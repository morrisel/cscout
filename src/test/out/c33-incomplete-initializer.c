Table: Ids
EID	NAME	READONLY	UNDEFMACRO	MACRO	MACROARG	ORDINARY	SUETAG	SUMEMBER	LABEL	TYPEDEF	ENUM	YACC	FUN	CSCOPE	LSCOPE	UNUSED
91	MAXDIGIT	0	0	1	0	0	0	0	0	0	0	0	0	0	0	1
159	__wait_queue	0	0	0	0	0	1	0	0	0	0	0	0	0	0	0
289	wait_queue_t	0	0	0	0	1	0	0	0	1	0	0	0	1	0	0
331	x	0	0	0	0	1	0	0	0	0	0	0	0	0	1	1
441	main	1	0	0	0	1	0	0	0	0	0	0	1	0	1	0
529	list_head	0	0	0	0	0	1	0	0	0	0	0	0	0	0	0
571	qqq	0	0	0	0	1	0	0	0	0	0	0	0	0	1	1
891	foo	0	0	0	0	1	0	0	0	0	0	0	1	0	1	0
919	next	0	0	0	0	0	0	1	0	0	0	0	0	0	0	0
989	prev	0	0	0	0	0	0	1	0	0	0	0	0	0	0	1
1559	flags	0	0	0	0	0	0	1	0	0	0	0	0	0	0	1
1779	private	0	0	0	0	0	0	1	0	0	0	0	0	0	0	0
1999	func	0	0	0	0	0	0	1	0	0	0	0	0	0	0	0
2319	task_list	0	0	0	0	0	0	1	0	0	0	0	0	0	0	0
2829	name	0	0	0	0	1	0	0	0	0	0	0	0	0	0	1
2975	__DATE__	1	0	1	0	0	0	0	0	0	0	0	0	0	0	1
3295	__TIME__	1	0	1	0	0	0	0	0	0	0	0	0	0	0	1
3575	__FILE__	1	0	1	0	0	0	0	0	0	0	0	0	0	0	1
3865	__LINE__	1	0	1	0	0	0	0	0	0	0	0	0	0	0	1
4055	__STDC__	1	0	1	0	0	0	0	0	0	0	0	0	0	0	1
4129	name2	0	0	0	0	1	0	0	0	0	0	0	0	0	0	0
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
4	15	159
4	28	289
4	52	529
4	80	529
4	91	919
4	98	989
4	118	159
4	155	1559
4	177	1779
4	199	1999
4	221	529
4	231	2319
4	251	891
4	269	289
4	282	2829
4	301	1779
4	334	1999
4	357	2319
4	398	289
4	412	4129
4	423	4129
4	430	2319
4	440	919
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
4	0	typedef struct 
4	27	 
4	40	;\u0000d\u0000a\u0000d\u0000astruct 
4	61	 {\u0000d\u0000a        struct 
4	89	 *
4	95	, *
4	102	;\u0000d\u0000a};\u0000d\u0000a\u0000d\u0000astruct 
4	130	 {\u0000d\u0000a        unsigned int 
4	160	;\u0000d\u0000a        void *
4	184	;\u0000d\u0000a        int 
4	203	;\u0000d\u0000a        struct 
4	230	 
4	240	;\u0000d\u0000a};\u0000d\u0000a\u0000d\u0000a\u0000d\u0000a
4	254	()\u0000d\u0000a{\u0000d\u0000a        
4	281	 
4	286	 = {\u0000d\u0000a        .
4	308	        = 
4	322	,\u0000d\u0000a        .
4	338	           = 0,\u0000d\u0000a	.
4	366	 = {0, 0}\u0000d\u0000a         };\u0000d\u0000a        
4	410	 *
4	417	;\u0000d\u0000a\u0000d\u0000a	
4	428	->
4	439	.
4	444	 = 0;\u0000d\u0000a}\u0000d\u0000a
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
159	17
289	17
441	17
529	17
891	17
919	17
989	17
1559	17
1779	17
1999	17
2319	17
2829	17
2975	17
3295	17
3575	17
3865	17
4055	17
4129	17
5355	17
91	18
159	18
289	18
331	18
441	18
529	18
571	18
891	18
919	18
989	18
1559	18
1779	18
1999	18
2319	18
2829	18
2975	18
3295	18
3575	18
3865	18
4055	18
4129	18
5355	18
Table: Files
FID	NAME	RO
2	host-defs.h	1
3	host-incs.h	1
4	c33-incomplete-initializer.c	0
5	prj2.c	0
Table: Filemetrics
FID	PRECPP	NCHAR	NCCOMMENT	NSPACE	NLCOMMENT	NBCOMMENT	NLINE	MAXLINELEN	MAXSTMTLEN	MAXSTMTNEST	MAXBRACENEST	MAXBRACKNEST	BRACENEST	BRACKNEST	NULINE	NPPDIRECTIVE	NPPCOND	NPPFMACRO	NPPOMACRO	NTOKEN	NSTMT	NOP	NUOP	NNCONST	NCLIT	NSTRING	NPPCONCATOP	NPPSTRINGOP	NIF	NELSE	NSWITCH	NCASE	NDEFAULT	NBREAK	NFOR	NWHILE	NDO	NCONTINUE	NGOTO	NRETURN	NPID	NFID	NMID	NID	NUPID	NUFID	NUMID	NUID	NLABEL	NMACROEXPANDTOKEN	NCOPIES	NINCFILE	NPFUNCTION	NFFUNCTION	NPVAR	NFVAR	NAGGREGATE	NAMEMBER	NENUM	NEMEMBER
2	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	16	0	1	1	NULL	NULL	NULL	NULL	NULL	NULL	NULL	18	2	0	0	0	0	0	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	0	0	NULL	0	0	0	NULL	0	0	NULL	NULL	NULL	0	1	0	0	0	0	0	0
2	1	548	367	29	0	3	22	61	47	NULL	1	1	0	0	0	5	0	0	5	37	2	0	0	2	0	3	0	0	0	0	0	0	0	0	0	0	0	0	0	0	1	2	5	8	1	1	5	7	0	0	1	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	NULL
3	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	15	0	1	1	NULL	NULL	NULL	NULL	NULL	NULL	NULL	0	1	0	0	0	0	0	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	0	0	NULL	0	0	0	NULL	0	0	NULL	NULL	NULL	0	0	0	0	0	0	0	0
3	1	243	187	13	0	2	13	48	28	NULL	1	1	0	0	0	1	0	0	0	16	1	0	0	0	0	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	1	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	NULL
4	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	52	0	3	1	NULL	NULL	NULL	NULL	NULL	NULL	NULL	80	11	14	0	4	0	1	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	2	6	NULL	14	1	1	NULL	4	0	NULL	NULL	NULL	1	0	0	0	2	6	0	0
4	1	432	0	179	0	0	25	37	61	NULL	3	1	0	0	0	0	0	0	0	79	11	14	0	4	0	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	1	3	0	7	1	1	0	4	0	0	1	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	NULL
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
18	5	5	2
18	5	5	4
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
18	5	5	2	471	4
18	5	5	4	251	3
Table: Functions
ID	NAME	ISMACRO	DEFINED	DECLARED	FILESCOPED	FID	FOFFSET	FANIN
891	foo	0	1	1	0	5	88	0
4715	main	0	0	1	0	2	471	0
5355	_cscout_dummy1	0	1	1	1	2	535	1
Table: FunctionDefs
FUNCTIONID	FIDBEGIN	FOFFSETBEGIN	FIDEND	FOFFSETEND
891	4	259	4	452
5355	2	557	2	577
Table: FunctionMetrics
FUNCTIONID	PRECPP	NCHAR	NCCOMMENT	NSPACE	NLCOMMENT	NBCOMMENT	NLINE	MAXLINELEN	MAXSTMTLEN	MAXSTMTNEST	MAXBRACENEST	MAXBRACKNEST	BRACENEST	BRACKNEST	NULINE	NPPDIRECTIVE	NPPCOND	NPPFMACRO	NPPOMACRO	NTOKEN	NSTMT	NOP	NUOP	NNCONST	NCLIT	NSTRING	NPPCONCATOP	NPPSTRINGOP	NIF	NELSE	NSWITCH	NCASE	NDEFAULT	NBREAK	NFOR	NWHILE	NDO	NCONTINUE	NGOTO	NRETURN	NPID	NFID	NMID	NID	NUPID	NUFID	NUMID	NUID	NLABEL	NMACROEXPANDTOKEN	NGNSOC	NMPARAM	NFPARAM	NEPARAM	FANIN	FANOUT	CCYCL1	CCYCL2	CCYCL3	CSTRUC	CHAL	IFLOW
891	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	44	0	2	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	37	3	11	4	4	0	1	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	0	2	NULL	5	0	1	NULL	3	0	NULL	16	NULL	0	NULL	0	0	1	1	1	0.0	69.1886	0.0
891	1	204	0	92	0	0	9	33	49	NULL	2	0	0	0	0	0	0	0	0	37	3	11	4	4	0	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	2	0	5	0	1	0	3	0	0	NULL	0	NULL	0	0	0	1	1	1	0.0	69.1886	0.0
5355	0	NULL	NULL	NULL	NULL	NULL	NULL	NULL	5	0	0	1	NULL	NULL	NULL	NULL	NULL	NULL	NULL	5	1	0	0	0	0	0	NULL	NULL	0	0	0	0	0	0	0	0	0	0	0	0	0	1	NULL	1	0	1	NULL	1	0	NULL	9	NULL	0	NULL	1	1	1	1	1	1.0	0.0	1.0
5355	1	22	0	3	0	0	1	21	5	NULL	0	1	0	0	0	0	0	0	0	5	1	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	0	1	0	1	0	1	0	1	0	0	NULL	0	NULL	0	1	1	1	1	1	1.0	0.0	1.0
Table: FunctionId
FUNCTIONID	ORDINAL	EID
891	0	891
4715	0	441
5355	0	5355
Table: Fcalls
SOURCEID	DESTID
5355	5355
Done
