#if 0
	shc Version 3.8.6, Generic Script Compiler
	Copyright (c) 1994-2006 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -f match 
#endif

static  char data [] = 
#define      chk1_z	22
#define      chk1	((&data[2]))
	"\057\066\275\171\116\171\110\332\252\244\216\267\147\120\301\215"
	"\153\372\316\252\327\254\273\265\342"
#define      inlo_z	3
#define      inlo	((&data[25]))
	"\171\025\211"
#define      msg2_z	19
#define      msg2	((&data[28]))
	"\216\146\241\240\244\331\267\324\102\047\106\362\163\004\252\065"
	"\042\353\215"
#define      msg1_z	42
#define      msg1	((&data[57]))
	"\056\103\321\253\220\070\123\267\077\005\057\010\073\114\265\045"
	"\130\334\065\177\232\377\177\150\066\256\257\031\163\347\265\146"
	"\372\362\364\277\117\112\371\347\142\161\075\022\017\146\234\057"
	"\035\264\032\243\112"
#define      chk2_z	19
#define      chk2	((&data[104]))
	"\155\222\242\317\207\114\343\070\012\321\200\147\323\264\174\023"
	"\143\360\106\166\266\202\132"
#define      opts_z	1
#define      opts	((&data[123]))
	"\272"
#define      rlax_z	1
#define      rlax	((&data[124]))
	"\052"
#define      xecc_z	15
#define      xecc	((&data[127]))
	"\167\310\070\303\013\377\131\337\053\202\036\156\030\030\023\116"
	"\101\265\242"
#define      pswd_z	256
#define      pswd	((&data[207]))
	"\241\211\254\364\100\353\372\213\353\331\241\131\154\104\051\065"
	"\026\057\341\067\332\071\353\225\261\263\112\123\252\102\307\113"
	"\313\163\100\014\137\072\227\112\024\071\244\200\175\315\265\223"
	"\374\227\313\327\321\266\154\202\152\266\326\024\371\235\137\041"
	"\315\175\330\117\364\151\110\273\252\024\306\356\154\125\221\263"
	"\126\311\145\224\200\122\251\210\227\336\312\143\100\030\205\015"
	"\226\136\135\213\307\245\106\161\272\015\140\046\142\361\332\270"
	"\272\077\115\073\222\366\304\051\325\217\215\025\247\022\043\075"
	"\160\200\310\067\046\017\251\340\034\011\007\177\373\341\070\266"
	"\041\205\361\263\174\265\334\121\104\152\147\354\174\212\051\355"
	"\012\362\044\061\001\316\021\036\330\030\235\323\372\325\211\033"
	"\133\173\316\327\061\253\050\166\025\220\142\222\032\214\177\045"
	"\177\244\126\200\162\147\237\112\200\074\036\172\022\250\225\155"
	"\044\144\104\125\020\155\313\046\375\056\270\030\273\070\075\072"
	"\335\223\273\120\373\133\232\173\227\271\366\252\141\213\027\205"
	"\360\134\333\000\311\247\046\307\326\337\337\221\030\035\314\365"
	"\260\210\105\253\343\340\047\173\231\035\045\373\251\074\201\231"
	"\231\134\232\143\004\300\052\332\240\012\153\270\047\070\256\330"
	"\300\363\204\243\324\253\036\156\311\104\152\162\200\353\014\032"
	"\110\246\175\114\146\247\047\007\262\223\300\332\313\156\262\305"
	"\021\240\321\160\332\151\273\356\243\137\156\040\054\044\264\051"
	"\273\177\001\214\066\155\016\240\044\344\265\036"
#define      tst1_z	22
#define      tst1	((&data[492]))
	"\167\371\214\104\334\134\262\233\311\167\361\202\255\015\300\341"
	"\064\060\233\045\033\030\223\265\264\003\217"
#define      date_z	4
#define      date	((time_t*)(&data[520]))
	"\301\205\366\162\175"
#define      shll_z	8
#define      shll	((&data[526]))
	"\112\021\121\144\300\366\153\050\230\256\226\163"
#define      text_z	337
#define      text	((&data[543]))
	"\131\114\342\147\355\007\114\057\314\065\057\300\267\106\273\324"
	"\304\245\226\143\264\262\357\063\036\307\270\054\203\031\361\260"
	"\172\316\001\330\033\257\240\144\025\273\323\011\022\231\037\334"
	"\054\275\307\323\074\267\001\206\153\276\302\307\057\225\023\246"
	"\261\001\212\041\364\246\071\174\073\245\231\337\133\302\124\052"
	"\350\143\326\263\055\134\175\154\163\253\233\314\043\175\033\106"
	"\353\121\040\051\326\066\070\166\003\177\336\146\201\213\145\163"
	"\355\050\110\206\104\271\334\161\255\321\303\343\333\123\053\077"
	"\360\053\343\270\272\275\250\177\142\175\123\051\273\241\022\353"
	"\152\364\313\020\246\204\266\001\132\340\330\252\262\062\142\114"
	"\160\322\020\230\243\055\115\277\353\012\331\075\143\270\200\106"
	"\102\106\220\133\067\105\100\065\054\140\301\035\172\021\312\017"
	"\271\024\040\044\202\213\237\023\304\175\313\061\327\131\120\354"
	"\351\367\251\073\230\152\224\043\172\037\373\130\051\223\342\041"
	"\107\261\307\007\266\341\026\051\203\301\232\337\361\317\214\020"
	"\320\026\023\347\105\342\141\065\011\344\275\056\206\106\063\144"
	"\211\206\030\051\065\155\263\003\106\016\156\156\151\125\221\272"
	"\036\270\165\041\236\214\376\112\026\370\131\223\165\270\357\176"
	"\260\115\151\357\264\166\346\144\376\265\015\173\144\140\142\144"
	"\347\130\227\133\362\265\214\153\027\067\367\245\226\200\164\303"
	"\003\367\232\026\110\052\372\242\312\125\162\277\346\210\240\223"
	"\045\065\171\124\122\256\044\046\242\045\316\267\011\142\155\276"
	"\146\374\334\044\173\235\102\150\200\215\171\026\000\106\055\165"
	"\237\172\130\007\150\140\123\012\205\042\302\217\205\057"
#define      lsto_z	1
#define      lsto	((&data[918]))
	"\214"
#define      tst2_z	19
#define      tst2	((&data[919]))
	"\041\046\062\136\264\362\254\371\060\141\345\065\074\374\036\262"
	"\066\070\064\310\122\017"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned)chkenv;
	mask ^= (unsigned)getpid() * ~mask;
	sprintf(buff, "x%x", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%u %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%u %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && date[0]<time(NULL))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		if (text_z < hide_z) {
			/* Prepend spaces til a hide_z script size. */
			scrpt = malloc(hide_z);
			if (!scrpt)
				return 0;
			memset(scrpt, (int) ' ', hide_z);
			memcpy(&scrpt[hide_z - text_z], text, text_z);
		} else {
			scrpt = text;	/* Script text */
		}
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, argv[0]);
		} else {
			scrpt = argv[0];
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
