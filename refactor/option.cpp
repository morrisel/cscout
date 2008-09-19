/*
 * (C) Copyright 2006 Diomidis Spinellis.
 *
 * A user interface option
 *
 * $Id: option.cpp,v 1.8 2008/09/19 16:21:32 dds Exp $
 */

#include <string>
#include <set>
#include <map>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>		// max
#include <cstdio>		// FILE, stderr
#include <cstdlib>		// atoi
#include <cstdarg>
#include <cctype>

#include "swill.h"
#include "getopt.h"

#include "cpp.h"
#include "debug.h"
#include "error.h"
#include "option.h"


BoolOption *Option::fname_in_context;		// Remove common file prefix
BoolOption *Option::show_true;			// Only show true identifier properties
BoolOption *Option::show_line_number;		// Annotate source with line numbers
BoolOption *Option::file_icase;			// File name case-insensitive match
BoolOption *Option::sort_rev;			// Reverse sorting of query results
BoolOption *Option::show_projects;		// Show associated projects
BoolOption *Option::show_identical_files;	// Show a list of identical files

BoolOption *Option::rename_override_ro;		// Renames will override read-only identifiers
BoolOption *Option::refactor_fun_arg_override_ro;// Refactoring of function arguments will override read-only identifiers

IntegerOption *Option::tab_width;		// Tab width for code output
SelectionOption *Option::cgraph_type;		// Call graph type t(text h(tml d(ot s(vg g(if
SelectionOption *Option::cgraph_show;		// Call graph show e(dge n(ame f(ile p(ath
SelectionOption *Option::igraph_show;		// Include graph show e)dge n(ame p(ath
TextOption *Option::sfile_re_string;		// Saved files replacement location RE string
TextOption *Option::sfile_repl_string;		// Saved files replacement string
TextOption *Option::start_editor_cmd;		// Command to invoke an external editor
IntegerOption *Option::entries_per_page;	// Number of elements to show in a page
IntegerOption *Option::cgraph_depth;		// How deep to descend in a call graph
IntegerOption *Option::igraph_depth;		// How deep to descend in an include graph
BoolOption *Option::cgraph_dot_url;		// Include URLs in dot output
vector<Option *> Option::options;		// Options in the order they were added
map<string, Option *> Option::omap;		// For loading options

SelectionOption::SelectionOption(const char *sn, const char *un, char iv, ...) :
	Option(sn, un), v(iv)
{
	va_list marker;
	va_start(marker, iv);
	for (;;) {
		const char *s = va_arg(marker, const char *);
		if (s == NULL)
			break;
		options.push_back(SelectionElement(s));
	}
	va_end(marker);
}

void
SelectionOption::display(FILE *f)
{
	fprintf(f, "<tr><td>%s</td><td>", user_name);
	for (vector <SelectionElement>::const_iterator i = options.begin(); i != options.end(); i++)
		fprintf(f, "<input type=\"radio\" name=\"%s\" value=\"%c\" %s>%s\n",
			short_name,
			i->c,
			v == i->c ? "checked" : "",
			i->name);
	fputs("</td></tr>\n", f);
}

void
TextOption::load(ifstream &ifs)
{
	getline(ifs, v);
	// Skip leading whitespace
	while (v.length() && isspace(v[0]))
		v.erase(v.begin());
}

// Add a new option to the pool
void
Option::add(Option *o)
{
	options.push_back(o);
	omap[o->short_name] = o;
}

// Save to a file
void
Option::save_all(ofstream &ofs)
{
	for (vector <Option *>::const_iterator i = options.begin(); i != options.end(); i++) {
		ofs << (*i)->short_name << ": ";
		(*i)->save(ofs);
		ofs << endl;
	}
}

// Load from a file
void
Option::load_all(ifstream &in)
{
	while (!in.eof()) {
		string val;
		in >> val;
		if (val.empty())
			continue;
		map<string, Option *>::const_iterator i;
		if ((i = omap.find(val.substr(0, val.length() - 1))) != omap.end())
			i->second->load(in);
		else
			cerr << "Skipping unknown option :" << val << endl;
	}
}

// Set from a submitted page
void
Option::set_all()
{
	for (vector <Option *>::const_iterator i = options.begin(); i != options.end(); i++)
		(*i)->set();
}

// Display on a web page
void
Option::display_all(FILE *f)
{
	fputs("<table>", f);
	for (vector <Option *>::const_iterator i = options.begin(); i != options.end(); i++)
		(*i)->display(f);
	fputs("</table>", f);
}

// Return s with the double quotes and ampersands suitably escaped for HTML
static string
quote_escape(const string &s)
{
	string result;

	for (string::const_iterator i = s.begin(); i != s.end(); i++)
		switch (*i) {
		case '"':
			result.append("&quot;");
			break;
		case '&':
			result.append("&amp;");
			break;
		default:
			result.push_back(*i);
		}
	return result;
}


void
TextOption::display(FILE *f)
{
	fprintf(f,
		"<tr>"
		"<td>%s</td>\n"
		"<td><input type=\"text\" name=\"%s\" size=\"%d\" maxlength=\"200\" value=\"%s\"></td>"
		"</tr>\n",
		user_name,
		short_name,
		size,
		quote_escape(v).c_str()
	);
}


// Initialize the option objects and their container
void
Option::initialize()
{
	Option::add(new TitleOption("File and Identifier Pages"));
	Option::add(show_true = new BoolOption("show_true", "Show only true identifier classes (brief view)"));
	Option::add(show_projects = new BoolOption("show_projects", "Show associated projects", true));
	Option::add(show_identical_files = new BoolOption("show_identical_files", "Show a list of identical files", true));

	Option::add(new TitleOption("Source Listings"));
	Option::add(show_line_number = new BoolOption("show_line_number", "Show line numbers"));
	Option::add(tab_width = new IntegerOption("tab_width", "Tab width", 8));

	Option::add(new TitleOption("Refactoring"));
	Option::add(rename_override_ro = new BoolOption("rename_override_ro", "Allow the renaming of read-only identifiers"));
	Option::add(refactor_fun_arg_override_ro = new BoolOption("refactor_fun_arg_override_ro", "Allow the refactoring of function arguments of read-only functions"));

	Option::add(new TitleOption("Queries"));
	Option::add(file_icase = new BoolOption("file_icase", "Case-insensitive file name regular expression match"));

	Option::add(new TitleOption("Query Result Lists"));
	Option::add(entries_per_page = new IntegerOption("entries_per_page", "Number of entries on a page", 50));
	Option::add(fname_in_context = new BoolOption("fname_in_context", "Show file lists with file name in context"));
	Option::add(sort_rev = new BoolOption("sort_rev", "Sort identifiers starting from their last character"));

	Option::add(new TitleOption("Call and Include Graphs"));
	Option::add(cgraph_type = new SelectionOption("cgraph_type", "Graph links should lead to pages of:", 'h',
		"t:plain text",
		"h:HTML",
		"d:dot",
		"s:SVG (via dot)",
		"g:GIF (via dot)",
		NULL));
	Option::add(cgraph_show = new SelectionOption("cgraph_show", "Call graphs should contain:", 'f',
		"e:only edges",
		"n:function names",
		"f:file and function names",
		"p:path and function names",
		NULL));
	Option::add(igraph_show = new SelectionOption("igraph_show", "Include graphs should contain:", 'n',
		"e:only edges",
		"n:file names",
		"p:path and file names",
		NULL));
	Option::add(cgraph_depth = new IntegerOption("cgraph_depth", "Maximum number of call levels in a call graph", 5));
	Option::add(igraph_depth = new IntegerOption("igraph_depth", "Maximum number of include levels in an include graph", 5));
	Option::add(cgraph_dot_url = new BoolOption("cgraph_dot_url", "Include URLs in dot output", false));

	Option::add(new TitleOption("Saved Files"));
	Option::add(sfile_re_string = new TextOption("sfile_re_string", "When saving modified files replace RE"));
	Option::add(sfile_repl_string = new TextOption("sfile_repl_string", "... with the string"));
	Option::add(new TitleOption("Editing"));
	Option::add(start_editor_cmd = new TextOption("start_editor_cmd", "External editor invocation command",
#ifdef WIN32
	"echo Ignoring search for \"%s\" & start notepad \"%s\""
#else
	"xterm -c \"$VISUAL +/'%s' '%s'\" &"
#endif
	, 50));
}
