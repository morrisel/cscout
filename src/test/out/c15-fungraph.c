Table: Ids
EID	NAME	READONLY	UNDEFMACRO	MACRO	MACROARG	ORDINARY	SUETAG	SUMEMBER	LABEL	TYPEDEF	ENUM	YACC	FUN	CSCOPE	LSCOPE	UNUSED
89	macro	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0
91	MAXDIGIT	0	0	1	0	0	0	0	0	0	0	0	0	0	0	1
169	middlemacro	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0
331	x	0	0	0	0	1	0	0	0	0	0	0	0	0	1	1
441	main	1	0	0	0	1	0	0	0	0	0	0	1	0	1	0
539	innemacro	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0
571	qqq	0	0	0	0	1	0	0	0	0	0	0	0	0	1	1
869	function1	0	0	0	0	1	0	0	0	0	0	0	1	0	1	0
891	foo	0	0	0	0	1	0	0	0	0	0	0	1	0	1	1
1159	function2	0	0	0	0	1	0	0	0	0	0	0	1	0	1	0
1899	function3	0	0	0	0	1	0	0	0	0	0	0	1	0	1	1
2119	printf	0	0	0	0	1	0	0	0	0	0	0	1	0	1	1
2975	__DATE__	1	0	1	0	0	0	0	0	0	0	0	0	0	0	1
3295	__TIME__	1	0	1	0	0	0	0	0	0	0	0	0	0	0	1
3575	__FILE__	1	0	1	0	0	0	0	0	0	0	0	0	0	0	1
3865	__LINE__	1	0	1	0	0	0	0	0	0	0	0	0	0	0	1
4055	__STDC__	1	0	1	0	0	0	0	0	0	0	0	0	0	0	1
5355	_cscout_dummy1	1	0	0	0	1	0	0	0	0	0	0	1	1	0	0
Table: Tokens
FID	FOFFSET	EID
2	297	2975
2	329	3295
2	357	3575
2	386	3865
2	405	4055
2	471	441
2	535	5355
2	558	5355
4	8	89
4	16	169
4	39	169
4	53	539
4	74	539
4	86	869
4	99	869
4	115	1159
4	131	441
4	149	89
4	167	1159
4	189	1899
4	211	2119
5	8	91
5	32	331
5	43	441
5	56	571
5	88	891
Table: Rest
FID	FOFFSET	CODE
2	287	\u0000a\u0000a#define 
2	305	  
2	320	\u0000a#define 
2	337	 
2	348	\u0000a#define 
2	365	 
2	377	\u0000a#define 
2	394	 1\u0000a#define 
2	413	 1\u0000a\u0000a
2	466	\u0000aint 
2	475	();\u0000a
2	522	\u0000astatic void 
2	549	(void) { 
2	572	(); }\u0000a
3	152	\u0000a\u0000a\u0000a#pragma includepath 
3	195	\u0000a
3	239	\u0000astatic void _cscout_dummy2(void) { _cscout_dummy2(); }\u0000a
4	0	#define 
4	13	() 
4	27	()\u0000d\u0000a#define 
4	50	() 
4	62	()\u0000d\u0000a#define 
4	83	() 
4	95	()\u0000d\u0000a
4	108	() {}\u0000d\u0000a
4	124	() {}\u0000d\u0000a
4	135	() {\u0000d\u0000a        
4	154	();\u0000d\u0000a        
4	176	();\u0000d\u0000a        
4	198	();\u0000d\u0000a        
4	217	(
4	225	);\u0000d\u0000a}\u0000d\u0000a
5	0	#define 
5	16	 11\u0000d\u0000aextern int 
5	33	;\u0000d\u0000aextern 
5	47	();\u0000d\u0000aint 
5	59	;\u0000d\u0000a\u0000d\u0000a
5	86	\u0000d\u0000a
5	91	() {\u0000d\u0000a	
5	116	}\u0000d\u0000a\u0000d\u0000a
Table: Projects
PID	NAME
16	unspecified
17	Prj1
18	Prj2
Table: IdProj
EID	PID
89	17
169	17
441	17
539	17
869	17
1159	17
1899	17
2119	17
2975	17
3295	17
3575	17
3865	17
4055	17
5355	17
89	18
91	18
169	18
331	18
441	18
539	18
571	18
869	18
891	18
1159	18
1899	18
2119	18
2975	18
3295	18
3575	18
3865	18
4055	18
5355	18
Table: Files
FID	NAME	RO
2	host-defs.h	1
3	host-incs.h	1
4	c15-fungraph.c	0
5	prj2.c	0
Table: Filemetrics
FID	PRECPP	NCHAR	NCCOMMENT	NSPACE	NLCOMMENT	NBCOMMENT	NLINE	MAXLINELEN	MAXSTMTLEN	MAXSTMTNEST	MAXBRACENEST	MAXBRACKNEST	BRACENEST	BRACKNEST	NULINE	NPPDIRECTIVE	NPPCOND	NPPFMACRO	NPPOMACRO	NTOKEN	NSTMT	NOP	NUOP	NNCONST	NCLIT	NSTRING	NPPCONCATOP	NPPSTRINGOP	NIF	NELSE	NSWITCH	NCASE	NDEFAULT	NBREAK	NFOR	NWHILE	NDO	NCONTINUE	NGOTO	NRETURN	NPID	NFID	NMID	NID	NUPID	NUFID	NUMID	NUID	NLABEL	NMACROEXPANDTOKEN	NCOPIES	NINCFILE	NPFUNCTION	NFFUNCTION	NPVAR	NFVAR	NAGGREGATE	NAMEMBER	NENUM	NEMEMBER
2	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	16	0	1	1	NULL	NULL	NULL	NULL	NULL	NULL	NULL	18	2	0	0	0	0	0	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	0	0	NULL	0	0	0	NULL	0	0	NULL	NULL	NULL	0	1	0	0	0	0	0	0
2	1	548	367	29	0	3	22	61	47	NULL	1	1	0	0	0	5	0	0	5	37	2	0	0	2	0	3	0	0	0	0	0	0	0	0	0	0	0	0	0	0	1	2	5	8	1	1	5	7	0	0	1	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	NULL
3	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	15	0	1	1	NULL	NULL	NULL	NULL	NULL	NULL	NULL	0	1	0	0	0	0	0	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	0	0	NULL	0	0	0	NULL	0	0	NULL	NULL	NULL	0	0	0	0	0	0	0	0
3	1	243	187	13	0	2	13	48	28	NULL	1	1	0	0	0	1	0	0	0	16	1	0	0	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	1	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	NULL
4	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	27	0	1	1	NULL	NULL	NULL	NULL	NULL	NULL	NULL	33	4	0	0	0	0	1	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	14	0	NULL	14	5	0	NULL	5	0	NULL	NULL	NULL	3	0	0	0	0	0	0	0
4	1	230	0	63	0	0	11	31	64	NULL	1	1	0	0	0	3	0	3	0	56	4	0	0	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	7	0	6	13	5	0	3	8	0	4	1	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	NULL
5	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	8	0	1	1	NULL	NULL	NULL	NULL	NULL	NULL	NULL	18	3	0	0	0	0	0	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	4	0	NULL	4	4	0	NULL	4	0	NULL	NULL	NULL	1	0	2	0	0	0	0	0
5	1	106	34	26	2	0	11	21	14	NULL	1	1	0	0	0	1	0	0	1	21	3	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	4	0	1	5	4	0	1	5	0	0	1	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	NULL
Table: FileProj
FID	PID
2	17
3	17
4	17
1	18
2	18
3	18
4	18
5	18
Table: Definers
PID	CUID	BASEFILEID	DEFINERID
17	4	4	2
18	4	4	2
18	5	5	2
Table: Includers
PID	CUID	BASEFILEID	INCLUDERID
17	2	2	1
17	4	3	1
17	4	4	1
18	2	2	1
18	2	2	1
18	4	3	1
18	4	4	1
18	5	3	1
18	5	5	1
Table: Providers
PID	CUID	PROVIDERID
17	2	2
17	4	4
18	2	2
18	2	2
18	4	4
18	5	5
Table: IncTriggers
PID	CUID	BASEFILEID	DEFINERID	FOFFSET	LEN
17	4	4	2	471	4
18	4	4	2	471	4
18	5	5	2	471	4
Table: Functions
ID	NAME	ISMACRO	DEFINED	DECLARED	FILESCOPED	FID	FOFFSET	FANIN
89	macro	1	1	0	1	4	8	1
399	middlemacro	1	1	0	1	4	39	1
749	innemacro	1	1	0	1	4	74	1
891	foo	0	1	1	0	5	88	0
999	function1	0	1	1	0	4	99	1
1159	function2	0	1	1	0	4	115	1
1319	main	0	1	1	0	4	131	0
1899	function3	0	0	1	0	4	189	1
2119	printf	0	0	1	0	4	211	1
5355	_cscout_dummy1	0	1	1	1	2	535	1
Table: FunctionDefs
FUNCTIONID	FIDBEGIN	FOFFSETBEGIN	FIDEND	FOFFSETEND
89	4	15	4	31
399	4	52	4	66
749	4	85	4	99
891	5	95	5	117
999	4	112	4	113
1159	4	128	4	129
1319	4	139	4	230
5355	2	557	2	577
Table: FunctionMetrics
FUNCTIONID	PRECPP	NCHAR	NCCOMMENT	NSPACE	NLCOMMENT	NBCOMMENT	NLINE	MAXLINELEN	MAXSTMTLEN	MAXSTMTNEST	MAXBRACENEST	MAXBRACKNEST	BRACENEST	BRACKNEST	NULINE	NPPDIRECTIVE	NPPCOND	NPPFMACRO	NPPOMACRO	NTOKEN	NSTMT	NOP	NUOP	NNCONST	NCLIT	NSTRING	NPPCONCATOP	NPPSTRINGOP	NIF	NELSE	NSWITCH	NCASE	NDEFAULT	NBREAK	NFOR	NWHILE	NDO	NCONTINUE	NGOTO	NRETURN	NPID	NFID	NMID	NID	NUPID	NUFID	NUMID	NUID	NLABEL	NMACROEXPANDTOKEN	NGNSOC	NMPARAM	NFPARAM	NEPARAM	FANIN	FANOUT	CCYCL1	CCYCL2	CCYCL3	CSTRUC	CHAL	IFLOW
89	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	0	0	0	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	0	0	0	0	0	0	0	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	0	0	NULL	0	0	0	NULL	0	0	NULL	0	NULL	0	NULL	1	1	1	1	1	1.0	0.0	1.0
89	1	18	0	3	0	0	1	16	0	NULL	0	1	0	0	0	0	0	0	0	3	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	1	1	0	0	1	1	0	0	NULL	0	NULL	0	1	1	1	1	1	1.0	0.0	1.0
399	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	0	0	0	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	0	0	0	0	0	0	0	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	0	0	NULL	0	0	0	NULL	0	0	NULL	0	NULL	0	NULL	1	1	1	1	1	1.0	0.0	1.0
399	1	16	0	3	0	0	1	14	0	NULL	0	1	0	0	0	0	0	0	0	3	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	1	1	0	0	1	1	0	0	NULL	0	NULL	0	1	1	1	1	1	1.0	0.0	1.0
749	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	0	0	0	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	0	0	0	0	0	0	0	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	0	0	NULL	0	0	0	NULL	0	0	NULL	0	NULL	0	NULL	1	1	1	1	1	1.0	0.0	1.0
749	1	25	0	3	0	0	1	14	0	NULL	0	1	0	0	0	0	0	0	0	3	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	2	0	0	2	1	0	0	1	0	0	NULL	0	NULL	0	1	1	1	1	1	1.0	0.0	1.0
891	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	0	0	0	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	1	0	0	0	0	0	0	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	0	0	NULL	0	0	0	NULL	0	0	NULL	20	NULL	0	NULL	0	0	1	1	1	0.0	0.0	0.0
891	1	23	15	4	1	0	2	18	0	NULL	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	NULL	0	NULL	0	0	0	1	1	1	0.0	0.0	0.0
999	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	0	0	0	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	1	0	0	0	0	0	0	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	0	0	NULL	0	0	0	NULL	0	0	NULL	14	NULL	0	NULL	1	0	1	1	1	0.0	0.0	0.0
999	1	2	0	1	0	0	0	0	0	NULL	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	NULL	0	NULL	0	1	0	1	1	1	0.0	0.0	0.0
1159	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	0	0	0	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	1	0	0	0	0	0	0	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	0	0	NULL	0	0	0	NULL	0	0	NULL	16	NULL	0	NULL	1	0	1	1	1	0.0	0.0	0.0
1159	1	2	0	1	0	0	0	0	0	NULL	0	0	0	0	0	0	0	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	NULL	0	NULL	0	1	0	1	1	1	0.0	0.0	0.0
1319	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	7	0	0	1	NULL	NULL	NULL	NULL	NULL	NULL	NULL	18	4	0	0	0	0	1	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	4	0	NULL	4	4	0	NULL	4	0	NULL	16	NULL	0	NULL	0	4	1	1	1	0.0	8.0	0.0
1319	1	96	0	43	0	0	5	26	8	NULL	0	1	0	0	0	0	0	0	0	18	4	0	0	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	3	0	1	4	3	0	1	4	0	2	NULL	0	NULL	0	0	4	1	1	1	0.0	8.0	0.0
5355	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	5	0	0	1	NULL	NULL	NULL	NULL	NULL	NULL	NULL	5	1	0	0	0	0	0	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	0	1	NULL	1	0	1	NULL	1	0	NULL	12	NULL	0	NULL	1	1	1	1	1	1.0	0.0	1.0
5355	1	22	0	3	0	0	1	21	5	NULL	0	1	0	0	0	0	0	0	0	5	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	1	0	1	0	1	0	1	0	0	NULL	0	NULL	0	1	1	1	1	1	1.0	0.0	1.0
Table: FunctionId
FUNCTIONID	ORDINAL	EID
89	0	89
399	0	169
749	0	539
891	0	891
999	0	869
1159	0	1159
1319	0	441
1899	0	1899
2119	0	2119
5355	0	5355
Table: Fcalls
SOURCEID	DESTID
89	399
399	749
749	999
1319	89
1319	1159
1319	1899
1319	2119
5355	5355
Done
