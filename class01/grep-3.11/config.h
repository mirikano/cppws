/* config.h.  Generated from config.hin by configure.  */
/* config.hin.  Generated from configure.ac by autoheader.  */

/* CPU and C ABI indicator */
#ifndef __i386__
/* #undef __i386__ */
#endif
#ifndef __x86_64_x32__
/* #undef __x86_64_x32__ */
#endif
#ifndef __x86_64__
/* #undef __x86_64__ */
#endif
#ifndef __alpha__
/* #undef __alpha__ */
#endif
#ifndef __arm__
/* #undef __arm__ */
#endif
#ifndef __armhf__
/* #undef __armhf__ */
#endif
#ifndef __arm64_ilp32__
/* #undef __arm64_ilp32__ */
#endif
#ifndef __arm64__
#define __arm64__ 1
#endif
#ifndef __hppa__
/* #undef __hppa__ */
#endif
#ifndef __hppa64__
/* #undef __hppa64__ */
#endif
#ifndef __ia64_ilp32__
/* #undef __ia64_ilp32__ */
#endif
#ifndef __ia64__
/* #undef __ia64__ */
#endif
#ifndef __loongarch64__
/* #undef __loongarch64__ */
#endif
#ifndef __m68k__
/* #undef __m68k__ */
#endif
#ifndef __mips__
/* #undef __mips__ */
#endif
#ifndef __mipsn32__
/* #undef __mipsn32__ */
#endif
#ifndef __mips64__
/* #undef __mips64__ */
#endif
#ifndef __powerpc__
/* #undef __powerpc__ */
#endif
#ifndef __powerpc64__
/* #undef __powerpc64__ */
#endif
#ifndef __powerpc64_elfv2__
/* #undef __powerpc64_elfv2__ */
#endif
#ifndef __riscv32__
/* #undef __riscv32__ */
#endif
#ifndef __riscv64__
/* #undef __riscv64__ */
#endif
#ifndef __riscv32_ilp32__
/* #undef __riscv32_ilp32__ */
#endif
#ifndef __riscv32_ilp32f__
/* #undef __riscv32_ilp32f__ */
#endif
#ifndef __riscv32_ilp32d__
/* #undef __riscv32_ilp32d__ */
#endif
#ifndef __riscv64_ilp32__
/* #undef __riscv64_ilp32__ */
#endif
#ifndef __riscv64_ilp32f__
/* #undef __riscv64_ilp32f__ */
#endif
#ifndef __riscv64_ilp32d__
/* #undef __riscv64_ilp32d__ */
#endif
#ifndef __riscv64_lp64__
/* #undef __riscv64_lp64__ */
#endif
#ifndef __riscv64_lp64f__
/* #undef __riscv64_lp64f__ */
#endif
#ifndef __riscv64_lp64d__
/* #undef __riscv64_lp64d__ */
#endif
#ifndef __s390__
/* #undef __s390__ */
#endif
#ifndef __s390x__
/* #undef __s390x__ */
#endif
#ifndef __sh__
/* #undef __sh__ */
#endif
#ifndef __sparc__
/* #undef __sparc__ */
#endif
#ifndef __sparc64__
/* #undef __sparc64__ */
#endif


/* Witness that <config.h> has been included.  */
#define _GL_CONFIG_H_INCLUDED 1


/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to the function xargmatch calls on failures. */
#define ARGMATCH_DIE usage (EXIT_FAILURE)

/* Define to the declaration of the xargmatch failure function. */
#define ARGMATCH_DIE_DECL void usage (int _e)

/* Define to the number of bits in type 'ptrdiff_t'. */
/* #undef BITSIZEOF_PTRDIFF_T */

/* Define to the number of bits in type 'sig_atomic_t'. */
/* #undef BITSIZEOF_SIG_ATOMIC_T */

/* Define to the number of bits in type 'size_t'. */
/* #undef BITSIZEOF_SIZE_T */

/* Define to the number of bits in type 'wchar_t'. */
/* #undef BITSIZEOF_WCHAR_T */

/* Define to the number of bits in type 'wint_t'. */
/* #undef BITSIZEOF_WINT_T */

/* Define to 1 if the 'closedir' function returns void instead of int. */
/* #undef CLOSEDIR_VOID */

/* Define to 1 if using 'alloca.c'. */
/* #undef C_ALLOCA */

/* Define as the bit index in the word where to find bit 0 of the exponent of
   'double'. */
#define DBL_EXPBIT0_BIT 20

/* Define as the word index where to find the exponent of 'double'. */
#define DBL_EXPBIT0_WORD 1

/* the name of the file descriptor member of DIR */
/* #undef DIR_FD_MEMBER_NAME */

#ifdef DIR_FD_MEMBER_NAME
# define DIR_TO_FD(Dir_p) ((Dir_p)->DIR_FD_MEMBER_NAME)
#else
# define DIR_TO_FD(Dir_p) -1
#endif


/* Define to 1 if // is a file system root distinct from /. */
/* #undef DOUBLE_SLASH_IS_DISTINCT_ROOT */

/* Define if struct dirent has a member d_ino that actually works. */
#define D_INO_IN_DIRENT 1

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
/* #undef ENABLE_NLS */

/* Define this to 1 if F_DUPFD behavior does not match POSIX */
/* #undef FCNTL_DUPFD_BUGGY */

/* Define to nothing if C supports flexible array members, and to 1 if it does
   not. That way, with a declaration like 'struct s { int n; short
   d[FLEXIBLE_ARRAY_MEMBER]; };', the struct hack can be used with pre-C99
   compilers. Use 'FLEXSIZEOF (struct s, d, N * sizeof (short))' to calculate
   the size in bytes of such a struct containing an N-element array. */
#define FLEXIBLE_ARRAY_MEMBER /**/

/* Define to 1 if fopen() fails to recognize a trailing slash. */
/* #undef FOPEN_TRAILING_SLASH_BUG */

/* Define to 1 if fflush is known to work on stdin as per POSIX.1-2008, 0 if
   fflush is known to not work, -1 if unknown. */
#define FUNC_FFLUSH_STDIN 0

/* Define to 1 if nl_langinfo (YESEXPR) returns a non-empty string. */
#define FUNC_NL_LANGINFO_YESEXPR_WORKS 1

/* Define this to 'void' or 'struct timezone' to match the system's
   declaration of the second argument to gettimeofday. */
#define GETTIMEOFDAY_TIMEZONE void

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module close-stream shall be considered present. */
#define GNULIB_CLOSE_STREAM 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fcntl-safer shall be considered present. */
#define GNULIB_FCNTL_SAFER 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fdopendir shall be considered present. */
#define GNULIB_FDOPENDIR 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fd-safer-flag shall be considered present. */
#define GNULIB_FD_SAFER_FLAG 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fopen-gnu shall be considered present. */
#define GNULIB_FOPEN_GNU 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fscanf shall be considered present. */
#define GNULIB_FSCANF 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module isblank shall be considered present. */
#define GNULIB_ISBLANK 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module lock shall be considered present. */
#define GNULIB_LOCK 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module msvc-nothrow shall be considered present. */
#define GNULIB_MSVC_NOTHROW 1

/* Define to 1 to disable use of VLAs */
#define GNULIB_NO_VLA 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module openat shall be considered present. */
#define GNULIB_OPENAT 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module openat-safer shall be considered present. */
#define GNULIB_OPENAT_SAFER 1

/* enable some gnulib portability checks */
/* #undef GNULIB_PORTCHECK */

/* Enable compile-time and run-time bounds-checking, and some warnings,
      without upsetting glibc 2.15+. */
   #if (defined GNULIB_PORTCHECK && !defined _FORTIFY_SOURCE \
        && defined __OPTIMIZE__ && __OPTIMIZE__)
   # define _FORTIFY_SOURCE 2
   #endif
  

/* Define to 1 if printf and friends should be labeled with attribute
   "__gnu_printf__" instead of "__printf__" */
/* #undef GNULIB_PRINTF_ATTRIBUTE_FLAVOR_GNU */

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module reallocarray shall be considered present. */
#define GNULIB_REALLOCARRAY 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module scanf shall be considered present. */
#define GNULIB_SCANF 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module snprintf shall be considered present. */
#define GNULIB_SNPRINTF IN_GREP_GNULIB_TESTS

/* Define to 1 if you want the FILE stream functions getc, putc, etc. to use
   unlocked I/O if available, throughout the package. Unlocked I/O can improve
   performance, sometimes dramatically. But unlocked I/O is safe only in
   single-threaded programs, as well as in multithreaded programs for which
   you can guarantee that every FILE stream, including stdin, stdout, stderr,
   is used only in a single thread. */
#define GNULIB_STDIO_SINGLE_THREAD 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module strerror shall be considered present. */
#define GNULIB_STRERROR 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module strerror_r-posix shall be considered present. */
#define GNULIB_STRERROR_R_POSIX IN_GREP_GNULIB_TESTS

/* Define to 1 when the gnulib module accept should be tested. */
#define GNULIB_TEST_ACCEPT 1

/* Define to 1 when the gnulib module bind should be tested. */
#define GNULIB_TEST_BIND 1

/* Define to 1 when the gnulib module btowc should be tested. */
#define GNULIB_TEST_BTOWC 1

/* Define to 1 when the gnulib module calloc-gnu should be tested. */
#define GNULIB_TEST_CALLOC_GNU 1

/* Define to 1 when the gnulib module calloc-posix should be tested. */
#define GNULIB_TEST_CALLOC_POSIX 1

/* Define to 1 when the gnulib module chdir should be tested. */
#define GNULIB_TEST_CHDIR 1

/* Define to 1 when the gnulib module cloexec should be tested. */
#define GNULIB_TEST_CLOEXEC 1

/* Define to 1 when the gnulib module close should be tested. */
#define GNULIB_TEST_CLOSE 1

/* Define to 1 when the gnulib module closedir should be tested. */
#define GNULIB_TEST_CLOSEDIR 1

/* Define to 1 when the gnulib module connect should be tested. */
#define GNULIB_TEST_CONNECT 1

/* Define to 1 when the gnulib module dirfd should be tested. */
#define GNULIB_TEST_DIRFD 1

/* Define to 1 when the gnulib module dup should be tested. */
#define GNULIB_TEST_DUP 1

/* Define to 1 when the gnulib module dup2 should be tested. */
#define GNULIB_TEST_DUP2 1

/* Define to 1 when the gnulib module environ should be tested. */
#define GNULIB_TEST_ENVIRON 1

/* Define to 1 when the gnulib module fchdir should be tested. */
#define GNULIB_TEST_FCHDIR 1

/* Define to 1 when the gnulib module fcntl should be tested. */
#define GNULIB_TEST_FCNTL 1

/* Define to 1 when the gnulib module fdopen should be tested. */
#define GNULIB_TEST_FDOPEN 1

/* Define to 1 when the gnulib module fdopendir should be tested. */
#define GNULIB_TEST_FDOPENDIR 1

/* Define to 1 when the gnulib module fgetc should be tested. */
#define GNULIB_TEST_FGETC 1

/* Define to 1 when the gnulib module fgets should be tested. */
#define GNULIB_TEST_FGETS 1

/* Define to 1 when the gnulib module fnmatch should be tested. */
#define GNULIB_TEST_FNMATCH 1

/* Define to 1 when the gnulib module fopen should be tested. */
#define GNULIB_TEST_FOPEN 1

/* Define to 1 when the gnulib module fopen-gnu should be tested. */
#define GNULIB_TEST_FOPEN_GNU 1

/* Define to 1 when the gnulib module fprintf should be tested. */
#define GNULIB_TEST_FPRINTF 1

/* Define to 1 when the gnulib module fputc should be tested. */
#define GNULIB_TEST_FPUTC 1

/* Define to 1 when the gnulib module fputs should be tested. */
#define GNULIB_TEST_FPUTS 1

/* Define to 1 when the gnulib module fread should be tested. */
#define GNULIB_TEST_FREAD 1

/* Define to 1 when the gnulib module free-posix should be tested. */
#define GNULIB_TEST_FREE_POSIX 1

/* Define to 1 when the gnulib module fscanf should be tested. */
#define GNULIB_TEST_FSCANF 1

/* Define to 1 when the gnulib module fstat should be tested. */
#define GNULIB_TEST_FSTAT 1

/* Define to 1 when the gnulib module fstatat should be tested. */
#define GNULIB_TEST_FSTATAT 1

/* Define to 1 when the gnulib module ftruncate should be tested. */
#define GNULIB_TEST_FTRUNCATE 1

/* Define to 1 when the gnulib module fwrite should be tested. */
#define GNULIB_TEST_FWRITE 1

/* Define to 1 when the gnulib module getc should be tested. */
#define GNULIB_TEST_GETC 1

/* Define to 1 when the gnulib module getchar should be tested. */
#define GNULIB_TEST_GETCHAR 1

/* Define to 1 when the gnulib module getcwd should be tested. */
#define GNULIB_TEST_GETCWD 1

/* Define to 1 when the gnulib module getdtablesize should be tested. */
#define GNULIB_TEST_GETDTABLESIZE 1

/* Define to 1 when the gnulib module getopt-posix should be tested. */
#define GNULIB_TEST_GETOPT_POSIX 1

/* Define to 1 when the gnulib module getpagesize should be tested. */
#define GNULIB_TEST_GETPAGESIZE 1

/* Define to 1 when the gnulib module getprogname should be tested. */
#define GNULIB_TEST_GETPROGNAME 1

/* Define to 1 when the gnulib module gettimeofday should be tested. */
#define GNULIB_TEST_GETTIMEOFDAY 1

/* Define to 1 when the gnulib module ioctl should be tested. */
#define GNULIB_TEST_IOCTL 1

/* Define to 1 when the gnulib module isatty should be tested. */
#define GNULIB_TEST_ISATTY 1

/* Define to 1 when the gnulib module iswblank should be tested. */
#define GNULIB_TEST_ISWBLANK 1

/* Define to 1 when the gnulib module iswdigit should be tested. */
#define GNULIB_TEST_ISWDIGIT 1

/* Define to 1 when the gnulib module iswxdigit should be tested. */
#define GNULIB_TEST_ISWXDIGIT 1

/* Define to 1 when the gnulib module listen should be tested. */
#define GNULIB_TEST_LISTEN 1

/* Define to 1 when the gnulib module localeconv should be tested. */
#define GNULIB_TEST_LOCALECONV 1

/* Define to 1 when the gnulib module localename should be tested. */
#define GNULIB_TEST_LOCALENAME 1

/* Define to 1 when the gnulib module lseek should be tested. */
#define GNULIB_TEST_LSEEK 1

/* Define to 1 when the gnulib module lstat should be tested. */
#define GNULIB_TEST_LSTAT 1

/* Define to 1 when the gnulib module malloc-gnu should be tested. */
#define GNULIB_TEST_MALLOC_GNU 1

/* Define to 1 when the gnulib module malloc-posix should be tested. */
#define GNULIB_TEST_MALLOC_POSIX 1

/* Define to 1 when the gnulib module mbrlen should be tested. */
#define GNULIB_TEST_MBRLEN 1

/* Define to 1 when the gnulib module mbrtowc should be tested. */
#define GNULIB_TEST_MBRTOWC 1

/* Define to 1 when the gnulib module mbscasecmp should be tested. */
#define GNULIB_TEST_MBSCASECMP 1

/* Define to 1 when the gnulib module mbsinit should be tested. */
#define GNULIB_TEST_MBSINIT 1

/* Define to 1 when the gnulib module mbslen should be tested. */
#define GNULIB_TEST_MBSLEN 1

/* Define to 1 when the gnulib module mbsrtowcs should be tested. */
#define GNULIB_TEST_MBSRTOWCS 1

/* Define to 1 when the gnulib module mbsstr should be tested. */
#define GNULIB_TEST_MBSSTR 1

/* Define to 1 when the gnulib module mbtowc should be tested. */
#define GNULIB_TEST_MBTOWC 1

/* Define to 1 when the gnulib module memchr should be tested. */
#define GNULIB_TEST_MEMCHR 1

/* Define to 1 when the gnulib module mempcpy should be tested. */
#define GNULIB_TEST_MEMPCPY 1

/* Define to 1 when the gnulib module memrchr should be tested. */
#define GNULIB_TEST_MEMRCHR 1

/* Define to 1 when the gnulib module nanosleep should be tested. */
#define GNULIB_TEST_NANOSLEEP 1

/* Define to 1 when the gnulib module nl_langinfo should be tested. */
#define GNULIB_TEST_NL_LANGINFO 1

/* Define to 1 when the gnulib module open should be tested. */
#define GNULIB_TEST_OPEN 1

/* Define to 1 when the gnulib module openat should be tested. */
#define GNULIB_TEST_OPENAT 1

/* Define to 1 when the gnulib module opendir should be tested. */
#define GNULIB_TEST_OPENDIR 1

/* Define to 1 when the gnulib module perror should be tested. */
#define GNULIB_TEST_PERROR 1

/* Define to 1 when the gnulib module pipe should be tested. */
#define GNULIB_TEST_PIPE 1

/* Define to 1 when the gnulib module printf should be tested. */
#define GNULIB_TEST_PRINTF 1

/* Define to 1 when the gnulib module pselect should be tested. */
#define GNULIB_TEST_PSELECT 1

/* Define to 1 when the gnulib module pthread_sigmask should be tested. */
#define GNULIB_TEST_PTHREAD_SIGMASK 1

/* Define to 1 when the gnulib module pthread-thread should be tested. */
#define GNULIB_TEST_PTHREAD_THREAD 1

/* Define to 1 when the gnulib module putc should be tested. */
#define GNULIB_TEST_PUTC 1

/* Define to 1 when the gnulib module putchar should be tested. */
#define GNULIB_TEST_PUTCHAR 1

/* Define to 1 when the gnulib module putenv should be tested. */
#define GNULIB_TEST_PUTENV 1

/* Define to 1 when the gnulib module puts should be tested. */
#define GNULIB_TEST_PUTS 1

/* Define to 1 when the gnulib module raise should be tested. */
#define GNULIB_TEST_RAISE 1

/* Define to 1 when the gnulib module rawmemchr should be tested. */
#define GNULIB_TEST_RAWMEMCHR 1

/* Define to 1 when the gnulib module read should be tested. */
#define GNULIB_TEST_READ 1

/* Define to 1 when the gnulib module readdir should be tested. */
#define GNULIB_TEST_READDIR 1

/* Define to 1 when the gnulib module reallocarray should be tested. */
#define GNULIB_TEST_REALLOCARRAY 1

/* Define to 1 when the gnulib module realloc-gnu should be tested. */
#define GNULIB_TEST_REALLOC_GNU 1

/* Define to 1 when the gnulib module realloc-posix should be tested. */
#define GNULIB_TEST_REALLOC_POSIX 1

/* Define to 1 when the gnulib module scanf should be tested. */
#define GNULIB_TEST_SCANF 1

/* Define to 1 when the gnulib module select should be tested. */
#define GNULIB_TEST_SELECT 1

/* Define to 1 when the gnulib module setenv should be tested. */
#define GNULIB_TEST_SETENV 1

/* Define to 1 when the gnulib module setlocale should be tested. */
#define GNULIB_TEST_SETLOCALE 1

/* Define to 1 when the gnulib module setlocale_null should be tested. */
#define GNULIB_TEST_SETLOCALE_NULL 1

/* Define to 1 when the gnulib module setsockopt should be tested. */
#define GNULIB_TEST_SETSOCKOPT 1

/* Define to 1 when the gnulib module sigprocmask should be tested. */
#define GNULIB_TEST_SIGPROCMASK 1

/* Define to 1 when the gnulib module sleep should be tested. */
#define GNULIB_TEST_SLEEP 1

/* Define to 1 when the gnulib module snprintf should be tested. */
#define GNULIB_TEST_SNPRINTF 1

/* Define to 1 when the gnulib module socket should be tested. */
#define GNULIB_TEST_SOCKET 1

/* Define to 1 when the gnulib module stat should be tested. */
#define GNULIB_TEST_STAT 1

/* Define to 1 when the gnulib module stpcpy should be tested. */
#define GNULIB_TEST_STPCPY 1

/* Define to 1 when the gnulib module strdup should be tested. */
#define GNULIB_TEST_STRDUP 1

/* Define to 1 when the gnulib module strerror should be tested. */
#define GNULIB_TEST_STRERROR 1

/* Define to 1 when the gnulib module strerror_r should be tested. */
#define GNULIB_TEST_STRERROR_R 1

/* Define to 1 when the gnulib module strnlen should be tested. */
#define GNULIB_TEST_STRNLEN 1

/* Define to 1 when the gnulib module strstr should be tested. */
#define GNULIB_TEST_STRSTR 1

/* Define to 1 when the gnulib module strtoll should be tested. */
#define GNULIB_TEST_STRTOLL 1

/* Define to 1 when the gnulib module strtoull should be tested. */
#define GNULIB_TEST_STRTOULL 1

/* Define to 1 when the gnulib module symlink should be tested. */
#define GNULIB_TEST_SYMLINK 1

/* Define to 1 when the gnulib module time should be tested. */
#define GNULIB_TEST_TIME 1

/* Define to 1 when the gnulib module unsetenv should be tested. */
#define GNULIB_TEST_UNSETENV 1

/* Define to 1 when the gnulib module vfprintf should be tested. */
#define GNULIB_TEST_VFPRINTF 1

/* Define to 1 when the gnulib module vprintf should be tested. */
#define GNULIB_TEST_VPRINTF 1

/* Define to 1 when the gnulib module wcrtomb should be tested. */
#define GNULIB_TEST_WCRTOMB 1

/* Define to 1 when the gnulib module wctob should be tested. */
#define GNULIB_TEST_WCTOB 1

/* Define to 1 when the gnulib module wctomb should be tested. */
#define GNULIB_TEST_WCTOMB 1

/* Define to 1 when the gnulib module wcwidth should be tested. */
#define GNULIB_TEST_WCWIDTH 1

/* Define to 1 when the gnulib module wmemchr should be tested. */
#define GNULIB_TEST_WMEMCHR 1

/* Define to 1 when the gnulib module wmempcpy should be tested. */
#define GNULIB_TEST_WMEMPCPY 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unistr/u8-mbtoucr shall be considered present. */
#define GNULIB_UNISTR_U8_MBTOUCR 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unistr/u8-uctomb shall be considered present. */
#define GNULIB_UNISTR_U8_UCTOMB 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module xalloc shall be considered present. */
#define GNULIB_XALLOC 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module xalloc-die shall be considered present. */
#define GNULIB_XALLOC_DIE 1

/* We are building grep */
#define GREP 1

/* Define to 1 if you have 'alloca' after including <alloca.h>, a header that
   may be supplied by this distribution. */
#define HAVE_ALLOCA 1

/* Define to 1 if <alloca.h> works. */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <bp-sym.h> header file. */
/* #undef HAVE_BP_SYM_H */

/* Define to 1 if you have the 'btowc' function. */
#define HAVE_BTOWC 1

/* Define to 1 if nanosleep mishandles large arguments. */
#define HAVE_BUG_BIG_NANOSLEEP 1

/* Define to 1 if you have the `catgets' function. */
#define HAVE_CATGETS 1

/* Define to 1 if you have the Mac OS X function
   CFLocaleCopyPreferredLanguages in the CoreFoundation framework. */
#define HAVE_CFLOCALECOPYPREFERREDLANGUAGES 1

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
#define HAVE_CFPREFERENCESCOPYAPPVALUE 1

/* Define to 1 if you have the 'closedir' function. */
#define HAVE_CLOSEDIR 1

/* Define to 1 if you have the <crtdefs.h> header file. */
/* #undef HAVE_CRTDEFS_H */

/* Define to 1 if the alignas and alignof keywords work. */
/* #undef HAVE_C_ALIGNASOF */

/* Define to 1 if bool, true and false work as per C2023. */
/* #undef HAVE_C_BOOL */

/* Define to 1 if the static_assert keyword works. */
/* #undef HAVE_C_STATIC_ASSERT */

/* Define to 1 if C supports variable-length arrays. */
#define HAVE_C_VARARRAYS 1

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
/* #undef HAVE_DCGETTEXT */

/* Define to 1 if you have the declaration of 'alarm', and to 0 if you don't.
   */
#define HAVE_DECL_ALARM 1

/* Define to 1 if you have the declaration of 'clearerr_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_CLEARERR_UNLOCKED 1

/* Define to 1 if you have the declaration of 'dirfd', and to 0 if you don't.
   */
#define HAVE_DECL_DIRFD 1

/* Define to 1 if you have the declaration of 'ecvt', and to 0 if you don't.
   */
#define HAVE_DECL_ECVT 1

/* Define to 1 if you have the declaration of 'execvpe', and to 0 if you
   don't. */
#define HAVE_DECL_EXECVPE 0

/* Define to 1 if you have the declaration of 'fchdir', and to 0 if you don't.
   */
#define HAVE_DECL_FCHDIR 1

/* Define to 1 if you have the declaration of 'fcloseall', and to 0 if you
   don't. */
#define HAVE_DECL_FCLOSEALL 0

/* Define to 1 if you have the declaration of 'fcvt', and to 0 if you don't.
   */
#define HAVE_DECL_FCVT 1

/* Define to 1 if you have the declaration of 'fdopendir', and to 0 if you
   don't. */
#define HAVE_DECL_FDOPENDIR 1

/* Define to 1 if you have the declaration of 'feof_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_FEOF_UNLOCKED 1

/* Define to 1 if you have the declaration of 'ferror_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FERROR_UNLOCKED 1

/* Define to 1 if you have the declaration of 'fflush_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FFLUSH_UNLOCKED 0

/* Define to 1 if you have the declaration of 'fgets_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FGETS_UNLOCKED 0

/* Define to 1 if you have the declaration of 'fputc_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FPUTC_UNLOCKED 0

/* Define to 1 if you have the declaration of 'fputs_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FPUTS_UNLOCKED 0

/* Define to 1 if you have the declaration of 'fread_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FREAD_UNLOCKED 0

/* Define to 1 if you have the declaration of 'fwrite_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FWRITE_UNLOCKED 0

/* Define to 1 if you have the declaration of 'gcvt', and to 0 if you don't.
   */
#define HAVE_DECL_GCVT 1

/* Define to 1 if you have the declaration of 'getchar_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_GETCHAR_UNLOCKED 1

/* Define to 1 if you have the declaration of 'getc_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_GETC_UNLOCKED 1

/* Define to 1 if you have the declaration of 'getdtablesize', and to 0 if you
   don't. */
#define HAVE_DECL_GETDTABLESIZE 1

/* Define to 1 if you have the declaration of 'getw', and to 0 if you don't.
   */
#define HAVE_DECL_GETW 1

/* Define to 1 if you have the declaration of 'inet_pton', and to 0 if you
   don't. */
#define HAVE_DECL_INET_PTON 1

/* Define to 1 if you have the declaration of 'isblank', and to 0 if you
   don't. */
#define HAVE_DECL_ISBLANK 1

/* Define to 1 if you have the declaration of 'iswblank', and to 0 if you
   don't. */
#define HAVE_DECL_ISWBLANK 1

/* Define to 1 if you have the declaration of 'mbrlen', and to 0 if you don't.
   */
/* #undef HAVE_DECL_MBRLEN */

/* Define to 1 if you have the declaration of 'mbrtowc', and to 0 if you
   don't. */
/* #undef HAVE_DECL_MBRTOWC */

/* Define to 1 if you have the declaration of 'mbsinit', and to 0 if you
   don't. */
/* #undef HAVE_DECL_MBSINIT */

/* Define to 1 if you have the declaration of 'mbsrtowcs', and to 0 if you
   don't. */
/* #undef HAVE_DECL_MBSRTOWCS */

/* Define to 1 if you have the declaration of 'memrchr', and to 0 if you
   don't. */
#define HAVE_DECL_MEMRCHR 0

/* Define to 1 if you have the declaration of 'program_invocation_name', and
   to 0 if you don't. */
#define HAVE_DECL_PROGRAM_INVOCATION_NAME 0

/* Define to 1 if you have the declaration of 'program_invocation_short_name',
   and to 0 if you don't. */
/* #undef HAVE_DECL_PROGRAM_INVOCATION_SHORT_NAME */

/* Define to 1 if you have the declaration of 'putchar_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_PUTCHAR_UNLOCKED 1

/* Define to 1 if you have the declaration of 'putc_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_PUTC_UNLOCKED 1

/* Define to 1 if you have the declaration of 'putw', and to 0 if you don't.
   */
#define HAVE_DECL_PUTW 1

/* Define to 1 if you have the declaration of 'setenv', and to 0 if you don't.
   */
#define HAVE_DECL_SETENV 1

/* Define to 1 if you have the declaration of 'sleep', and to 0 if you don't.
   */
#define HAVE_DECL_SLEEP 1

/* Define to 1 if you have the declaration of 'snprintf', and to 0 if you
   don't. */
#define HAVE_DECL_SNPRINTF 1

/* Define to 1 if you have the declaration of 'strdup', and to 0 if you don't.
   */
#define HAVE_DECL_STRDUP 1

/* Define to 1 if you have the declaration of 'strerror_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_R 1

/* Define to 1 if you have the declaration of 'strnlen', and to 0 if you
   don't. */
#define HAVE_DECL_STRNLEN 1

/* Define to 1 if you have the declaration of 'strtoimax', and to 0 if you
   don't. */
#define HAVE_DECL_STRTOIMAX 1

/* Define to 1 if you have the declaration of 'strtoll', and to 0 if you
   don't. */
/* #undef HAVE_DECL_STRTOLL */

/* Define to 1 if you have the declaration of 'strtoull', and to 0 if you
   don't. */
/* #undef HAVE_DECL_STRTOULL */

/* Define to 1 if you have the declaration of 'strtoumax', and to 0 if you
   don't. */
#define HAVE_DECL_STRTOUMAX 1

/* Define to 1 if you have the declaration of 'towlower', and to 0 if you
   don't. */
/* #undef HAVE_DECL_TOWLOWER */

/* Define to 1 if you have the declaration of 'unsetenv', and to 0 if you
   don't. */
#define HAVE_DECL_UNSETENV 1

/* Define to 1 if you have the declaration of 'wcrtomb', and to 0 if you
   don't. */
/* #undef HAVE_DECL_WCRTOMB */

/* Define to 1 if you have the declaration of 'wcsdup', and to 0 if you don't.
   */
#define HAVE_DECL_WCSDUP 1

/* Define to 1 if you have the declaration of 'wctob', and to 0 if you don't.
   */
#define HAVE_DECL_WCTOB 1

/* Define to 1 if you have the declaration of 'wcwidth', and to 0 if you
   don't. */
#define HAVE_DECL_WCWIDTH 1

/* Define to 1 if you have the declaration of '_putenv', and to 0 if you
   don't. */
#define HAVE_DECL__PUTENV 0

/* Define to 1 if you have the declaration of '_snprintf', and to 0 if you
   don't. */
#define HAVE_DECL__SNPRINTF 0

/* Define to 1 if you have the declaration of '__argv', and to 0 if you don't.
   */
/* #undef HAVE_DECL___ARGV */

/* Define to 1 if you have the declaration of '__fpending', and to 0 if you
   don't. */
/* #undef HAVE_DECL___FPENDING */

/* Define to 1 if you have the <dirent.h> header file, and it defines 'DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the 'dirfd' function. */
#define HAVE_DIRFD 1

/* Define to 1 if you have the `duplocale' function. */
#define HAVE_DUPLOCALE 1

/* Define if you have the declaration of environ. */
/* #undef HAVE_ENVIRON_DECL */

/* Define to 1 if you have the `error' function. */
/* #undef HAVE_ERROR */

/* Define to 1 if you have the <error.h> header file. */
/* #undef HAVE_ERROR_H */

/* Define if the locale_t type contains insufficient information, as on
   OpenBSD. */
/* #undef HAVE_FAKE_LOCALES */

/* Define to 1 if you have the 'fchdir' function. */
#define HAVE_FCHDIR 1

/* Define to 1 if you have the 'fcntl' function. */
#define HAVE_FCNTL 1

/* Define to 1 if you have the 'fdopendir' function. */
#define HAVE_FDOPENDIR 1

/* Define to 1 if you have the <features.h> header file. */
/* #undef HAVE_FEATURES_H */

/* Define to 1 if you have the 'fnmatch' function. */
#define HAVE_FNMATCH 1

/* Define to 1 if you have the <fnmatch.h> header file. */
#define HAVE_FNMATCH_H 1

/* Define to 1 if you have the `freelocale' function. */
#define HAVE_FREELOCALE 1

/* Define if the 'free' function is guaranteed to preserve errno. */
/* #undef HAVE_FREE_POSIX */

/* Define to 1 if you have the 'fstatat' function. */
#define HAVE_FSTATAT 1

/* Define to 1 if you have the 'fstatfs' function. */
#define HAVE_FSTATFS 1

/* Define to 1 if you have the `ftruncate' function. */
#define HAVE_FTRUNCATE 1

/* Define to 1 if you have the `fts_open' function. */
#define HAVE_FTS_OPEN 1

/* Define to 1 if you have the 'getdtablesize' function. */
#define HAVE_GETDTABLESIZE 1

/* Define to 1 if you have the 'getexecname' function. */
/* #undef HAVE_GETEXECNAME */

/* Define to 1 if you have the 'getlocalename_l' function. */
/* #undef HAVE_GETLOCALENAME_L */

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the 'getopt_long_only' function. */
#define HAVE_GETOPT_LONG_ONLY 1

/* Define to 1 if you have the `getprogname' function. */
#define HAVE_GETPROGNAME 1

/* Define to 1 if you have the 'getrlimit' function. */
#define HAVE_GETRLIMIT 1

/* Define if the GNU gettext() function is already present or preinstalled. */
/* #undef HAVE_GETTEXT */

/* Define to 1 if you have the 'gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define if the uselocale exists, may be safely called, and returns
   sufficient information. */
#define HAVE_GOOD_USELOCALE 1

/* Define if you have the iconv() function and it works. */
#define HAVE_ICONV 1

/* Define to 1 if you have the <iconv.h> header file. */
#define HAVE_ICONV_H 1

/* Define to 1 if you have the 'inet_pton' function. */
/* #undef HAVE_INET_PTON */

/* Define to 1 if the compiler supports one of the keywords 'inline',
   '__inline__', '__inline' and effectively inlines functions marked as such.
   */
#define HAVE_INLINE 1

/* Define if you have the 'intmax_t' type in <stdint.h> or <inttypes.h>. */
#define HAVE_INTMAX_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if <inttypes.h> exists, doesn't clash with <sys/types.h>, and
   declares uintmax_t. */
#define HAVE_INTTYPES_H_WITH_UINTMAX 1

/* Define to 1 if you have the 'ioctl' function. */
#define HAVE_IOCTL 1

/* Define to 1 if <sys/socket.h> defines AF_INET. */
#define HAVE_IPV4 1

/* Define to 1 if <sys/socket.h> defines AF_INET6. */
#define HAVE_IPV6 1

/* Define to 1 if you have the 'isascii' function. */
#define HAVE_ISASCII 1

/* Define to 1 if you have the 'isblank' function. */
#define HAVE_ISBLANK 1

/* Define to 1 if you have the `iswblank' function. */
#define HAVE_ISWBLANK 1

/* Define to 1 if you have the 'iswcntrl' function. */
#define HAVE_ISWCNTRL 1

/* Define to 1 if you have the 'iswctype' function. */
#define HAVE_ISWCTYPE 1

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
#define HAVE_LANGINFO_CODESET 1

/* Define to 1 if you have the <langinfo.h> header file. */
#define HAVE_LANGINFO_H 1

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* Define to 1 if you have the <libintl.h> header file. */
/* #undef HAVE_LIBINTL_H */

/* Define to 1 if you have the Perl Compatible Regular Expressions library. */
#define HAVE_LIBPCRE 1

/* Define if you have the libsigsegv library. */
/* #undef HAVE_LIBSIGSEGV */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if the system has the type 'long long int'. */
#define HAVE_LONG_LONG_INT 1

/* Define to 1 if you have the 'lstat' function. */
#define HAVE_LSTAT 1

/* Define to 1 if you have the <malloc.h> header file. */
/* #undef HAVE_MALLOC_H */

/* Define if malloc, realloc, and calloc set errno on allocation failure. */
#define HAVE_MALLOC_POSIX 1

/* Define to 1 if mmap()'s MAP_ANONYMOUS flag is available after including
   config.h and <sys/mman.h>. */
#define HAVE_MAP_ANONYMOUS 1

/* Define to 1 if you have the 'mbrlen' function. */
#define HAVE_MBRLEN 1

/* Define to 1 if you have the 'mbrtowc' function. */
#define HAVE_MBRTOWC 1

/* Define to 1 if you have the 'mbsinit' function. */
#define HAVE_MBSINIT 1

/* Define to 1 if you have the 'mbslen' function. */
/* #undef HAVE_MBSLEN */

/* Define to 1 if you have the 'mbsrtowcs' function. */
#define HAVE_MBSRTOWCS 1

/* Define to 1 if <wchar.h> declares mbstate_t. */
#define HAVE_MBSTATE_T 1

/* Define to 1 if you have the `mbtowc' function. */
#define HAVE_MBTOWC 1

/* Define to 1 if you have the `mempcpy' function. */
/* #undef HAVE_MEMPCPY */

/* Define to 1 if you have the 'memrchr' function. */
/* #undef HAVE_MEMRCHR */

/* Define to 1 if you have the <minix/config.h> header file. */
/* #undef HAVE_MINIX_CONFIG_H */

/* Define to 1 if <limits.h> defines the MIN and MAX macros. */
/* #undef HAVE_MINMAX_IN_LIMITS_H */

/* Define to 1 if <sys/param.h> defines the MIN and MAX macros. */
#define HAVE_MINMAX_IN_SYS_PARAM_H 1

/* Define to 1 if you have the 'mprotect' function. */
#define HAVE_MPROTECT 1

/* Define to 1 on MSVC platforms that have the "invalid parameter handler"
   concept. */
/* #undef HAVE_MSVC_INVALID_PARAMETER_HANDLER */

/* Define if the locale_t type does not contain the name of each locale
   category. */
/* #undef HAVE_NAMELESS_LOCALES */

/* Define to 1 if you have the <ndir.h> header file, and it defines 'DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the `newlocale' function. */
#define HAVE_NEWLOCALE 1

/* Define to 1 if you have the `nl_langinfo' function. */
#define HAVE_NL_LANGINFO 1

/* Define to 1 if the system has obstacks that work with any size object. */
/* #undef HAVE_OBSTACK */

/* Define to 1 if you have the 'openat' function. */
#define HAVE_OPENAT 1

/* Define to 1 if you have the 'opendir' function. */
#define HAVE_OPENDIR 1

/* Define to 1 if you have the <OS.h> header file. */
/* #undef HAVE_OS_H */

/* Define to 1 if you have the 'pipe' function. */
#define HAVE_PIPE 1

/* Define to 1 if you have the 'pselect' function. */
#define HAVE_PSELECT 1

/* Define if you have the <pthread.h> header and the POSIX threads API. */
#define HAVE_PTHREAD_API 1

/* Define to 1 if you have the `pthread_atfork' function. */
#define HAVE_PTHREAD_ATFORK 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define if the <pthread.h> defines PTHREAD_MUTEX_RECURSIVE. */
#define HAVE_PTHREAD_MUTEX_RECURSIVE 1

/* Define if the POSIX multithreading library has read/write locks. */
#define HAVE_PTHREAD_RWLOCK 1

/* Define if the 'pthread_rwlock_rdlock' function prefers a writer to a
   reader. */
#define HAVE_PTHREAD_RWLOCK_RDLOCK_PREFER_WRITER 1

/* Define to 1 if the pthread_sigmask function can be used (despite bugs). */
#define HAVE_PTHREAD_SIGMASK 1

/* Define to 1 if the system has the type 'pthread_spinlock_t'. */
/* #undef HAVE_PTHREAD_SPINLOCK_T */

/* Define to 1 if the system has the type 'pthread_t'. */
#define HAVE_PTHREAD_T 1

/* Define to 1 if you have the 'raise' function. */
#define HAVE_RAISE 1

/* Define to 1 if you have the 'rawmemchr' function. */
/* #undef HAVE_RAWMEMCHR */

/* Define to 1 if you have the 'readdir' function. */
#define HAVE_READDIR 1

/* Define to 1 if you have the `reallocarray' function. */
/* #undef HAVE_REALLOCARRAY */

/* Define to 1 if the system has the type 'sa_family_t'. */
#define HAVE_SA_FAMILY_T 1

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* Define to 1 if you have the <sdkddkver.h> header file. */
/* #undef HAVE_SDKDDKVER_H */

/* Define to 1 if you have the <search.h> header file. */
#define HAVE_SEARCH_H 1

/* Define to 1 if you have the 'setdtablesize' function. */
/* #undef HAVE_SETDTABLESIZE */

/* Define to 1 if you have the 'setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the 'setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the 'setrlimit' function. */
#define HAVE_SETRLIMIT 1

/* Define to 1 if you have the 'shutdown' function. */
#define HAVE_SHUTDOWN 1

/* Define to 1 if you have the 'sigaltstack' function. */
#define HAVE_SIGALTSTACK 1

/* Define to 1 if 'sig_atomic_t' is a signed integer type. */
/* #undef HAVE_SIGNED_SIG_ATOMIC_T */

/* Define to 1 if 'wchar_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WCHAR_T */

/* Define to 1 if 'wint_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WINT_T */

/* Define to 1 if the system has the type 'sigset_t'. */
#define HAVE_SIGSET_T 1

/* Define to 1 if you have the 'sleep' function. */
#define HAVE_SLEEP 1

/* Define to 1 if you have the 'snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define if the return value of the snprintf function is the number of of
   bytes (excluding the terminating NUL) that would have been produced if the
   buffer had been large enough. */
#define HAVE_SNPRINTF_RETVAL_C99 1

/* Define if the string produced by the snprintf function is always NUL
   terminated. */
#define HAVE_SNPRINTF_TRUNCATION_C99 1

/* Define if the locale_t type is as on Solaris 11.4. */
/* #undef HAVE_SOLARIS114_LOCALES */

/* Define to 1 if you have the <stdbool.h> header file. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdckdint.h> header file. */
/* #undef HAVE_STDCKDINT_H */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define if <stdint.h> exists, doesn't clash with <sys/types.h>, and declares
   uintmax_t. */
#define HAVE_STDINT_H_WITH_UINTMAX 1

/* Define to 1 if you have the <stdio_ext.h> header file. */
/* #undef HAVE_STDIO_EXT_H */

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `stpcpy' function. */
#define HAVE_STPCPY 1

/* Define to 1 if you have the `strerror_r' function. */
#define HAVE_STRERROR_R 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the 'strnlen' function. */
#define HAVE_STRNLEN 1

/* Define to 1 if you have the 'strtoimax' function. */
#define HAVE_STRTOIMAX 1

/* Define to 1 if you have the 'strtoll' function. */
#define HAVE_STRTOLL 1

/* Define to 1 if you have the 'strtoull' function. */
#define HAVE_STRTOULL 1

/* Define to 1 if you have the 'strtoumax' function. */
#define HAVE_STRTOUMAX 1

/* Define if there is a member named d_type in the struct describing directory
   headers. */
#define HAVE_STRUCT_DIRENT_D_TYPE 1

/* Define to 1 if 'decimal_point' is a member of 'struct lconv'. */
/* #undef HAVE_STRUCT_LCONV_DECIMAL_POINT */

/* Define to 1 if 'int_p_cs_precedes' is a member of 'struct lconv'. */
/* #undef HAVE_STRUCT_LCONV_INT_P_CS_PRECEDES */

/* Define to 1 if the system has the type 'struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if 'ss_family' is a member of 'struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY 1

/* Define to 1 if 'f_type' is a member of 'struct statfs'. */
/* #undef HAVE_STRUCT_STATFS_F_TYPE */

/* Define to 1 if 'st_atimensec' is a member of 'struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIMENSEC */

/* Define to 1 if 'st_atimespec.tv_nsec' is a member of 'struct stat'. */
#define HAVE_STRUCT_STAT_ST_ATIMESPEC_TV_NSEC 1

/* Define to 1 if 'st_atim.st__tim.tv_nsec' is a member of 'struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIM_ST__TIM_TV_NSEC */

/* Define to 1 if 'st_atim.tv_nsec' is a member of 'struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIM_TV_NSEC */

/* Define to 1 if 'st_birthtimensec' is a member of 'struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIMENSEC */

/* Define to 1 if 'st_birthtimespec.tv_nsec' is a member of 'struct stat'. */
#define HAVE_STRUCT_STAT_ST_BIRTHTIMESPEC_TV_NSEC 1

/* Define to 1 if 'st_birthtim.tv_nsec' is a member of 'struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIM_TV_NSEC */

/* Define to 1 if you have the 'symlink' function. */
#define HAVE_SYMLINK 1

/* Define to 1 if you have the <sys/bitypes.h> header file. */
/* #undef HAVE_SYS_BITYPES_H */

/* Define to 1 if you have the <sys/cdefs.h> header file. */
#define HAVE_SYS_CDEFS_H 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines 'DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/inttypes.h> header file. */
/* #undef HAVE_SYS_INTTYPES_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines 'DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/single_threaded.h> header file. */
/* #undef HAVE_SYS_SINGLE_THREADED_H */

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/vfs.h> header file. */
/* #undef HAVE_SYS_VFS_H */

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the `thrd_create' function. */
/* #undef HAVE_THRD_CREATE */

/* Define to 1 if you have the <threads.h> header file. */
/* #undef HAVE_THREADS_H */

/* Define to 1 if you have the 'towlower' function. */
#define HAVE_TOWLOWER 1

/* Define to 1 if you have the `tsearch' function. */
#define HAVE_TSEARCH 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <unistring/woe32dll.h> header file. */
/* #undef HAVE_UNISTRING_WOE32DLL_H */

/* Define to 1 if you have the 'unsetenv' function. */
#define HAVE_UNSETENV 1

/* Define to 1 if the system has the type 'unsigned long long int'. */
#define HAVE_UNSIGNED_LONG_LONG_INT 1

/* Define to 1 if you have the `uselocale' function. */
#define HAVE_USELOCALE 1

/* Define if you have a global __progname variable */
/* #undef HAVE_VAR___PROGNAME */

/* Define to 1 if you have the 'vasnprintf' function. */
/* #undef HAVE_VASNPRINTF */

/* Define to 1 or 0, depending whether the compiler supports simple visibility
   declarations. */
#define HAVE_VISIBILITY 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define if you have the 'wchar_t' type. */
#define HAVE_WCHAR_T 1

/* Define to 1 if you have the 'wcrtomb' function. */
#define HAVE_WCRTOMB 1

/* Define to 1 if you have the 'wcslen' function. */
#define HAVE_WCSLEN 1

/* Define to 1 if you have the 'wctob' function. */
#define HAVE_WCTOB 1

/* Define to 1 if you have the <wctype.h> header file. */
#define HAVE_WCTYPE_H 1

/* Define to 1 if you have the 'wcwidth' function. */
#define HAVE_WCWIDTH 1

/* Define to 1 if the compiler and linker support weak declarations of
   symbols. */
/* #undef HAVE_WEAK_SYMBOLS */

/* Define to 1 if you have the <winsock2.h> header file. */
/* #undef HAVE_WINSOCK2_H */

/* Define if you have the 'wint_t' type. */
#define HAVE_WINT_T 1

/* Define to 1 if you have the `wmempcpy' function. */
/* #undef HAVE_WMEMPCPY */

/* Define to 1 if fstatat (..., 0) works. For example, it does not work in AIX
   7.1. */
#define HAVE_WORKING_FSTATAT_ZERO_FLAG 1

/* Define to 1 if O_NOATIME works. */
#define HAVE_WORKING_O_NOATIME 1

/* Define to 1 if O_NOFOLLOW works. */
#define HAVE_WORKING_O_NOFOLLOW 1

/* Define if you have the sigaltstack() function and it works. */
#define HAVE_WORKING_SIGALTSTACK 1

/* Define if the uselocale function exists and may safely be called. */
#define HAVE_WORKING_USELOCALE 1

/* Define to 1 if you have the <ws2tcpip.h> header file. */
/* #undef HAVE_WS2TCPIP_H */

/* Define to 1 if you have the <xlocale.h> header file. */
#define HAVE_XLOCALE_H 1

/* Define to 1 if you have the '_chsize' function. */
/* #undef HAVE__CHSIZE */

/* Define to 1 if you have the '_set_invalid_parameter_handler' function. */
/* #undef HAVE__SET_INVALID_PARAMETER_HANDLER */

/* Define to 1 if the compiler supports __builtin_expect,
   and to 2 if <builtins.h> does.  */
#define HAVE___BUILTIN_EXPECT 1
#ifndef HAVE___BUILTIN_EXPECT
# define __builtin_expect(e, c) (e)
#elif HAVE___BUILTIN_EXPECT == 2
# include <builtins.h>
#endif
    

/* Define to 1 if the system has the type '__fsword_t'. */
/* #undef HAVE___FSWORD_T */

/* Define to 1 if ctype.h defines __header_inline. */
#define HAVE___HEADER_INLINE 1

/* Please see the Gnulib manual for how to use these macros.

   Suppress extern inline with HP-UX cc, as it appears to be broken; see
   <https://lists.gnu.org/r/bug-texinfo/2013-02/msg00030.html>.

   Suppress extern inline with Sun C in standards-conformance mode, as it
   mishandles inline functions that call each other.  E.g., for 'inline void f
   (void) { } inline void g (void) { f (); }', c99 incorrectly complains
   'reference to static identifier "f" in extern inline function'.
   This bug was observed with Oracle Developer Studio 12.6
   (Sun C 5.15 SunOS_sparc 2017/05/30).

   Suppress extern inline (with or without __attribute__ ((__gnu_inline__)))
   on configurations that mistakenly use 'static inline' to implement
   functions or macros in standard C headers like <ctype.h>.  For example,
   if isdigit is mistakenly implemented via a static inline function,
   a program containing an extern inline function that calls isdigit
   may not work since the C standard prohibits extern inline functions
   from calling static functions (ISO C 99 section 6.7.4.(3).
   This bug is known to occur on:

     OS X 10.8 and earlier; see:
     https://lists.gnu.org/r/bug-gnulib/2012-12/msg00023.html

     DragonFly; see
     http://muscles.dragonflybsd.org/bulk/clang-master-potential/20141111_102002/logs/ah-tty-0.3.12.log

     FreeBSD; see:
     https://lists.gnu.org/r/bug-gnulib/2014-07/msg00104.html

   OS X 10.9 has a macro __header_inline indicating the bug is fixed for C and
   for clang but remains for g++; see <https://trac.macports.org/ticket/41033>.
   Assume DragonFly and FreeBSD will be similar.

   GCC 4.3 and above with -std=c99 or -std=gnu99 implements ISO C99
   inline semantics, unless -fgnu89-inline is used.  It defines a macro
   __GNUC_STDC_INLINE__ to indicate this situation or a macro
   __GNUC_GNU_INLINE__ to indicate the opposite situation.
   GCC 4.2 with -std=c99 or -std=gnu99 implements the GNU C inline
   semantics but warns, unless -fgnu89-inline is used:
     warning: C99 inline functions are not supported; using GNU89
     warning: to disable this warning use -fgnu89-inline or the gnu_inline function attribute
   It defines a macro __GNUC_GNU_INLINE__ to indicate this situation.
 */
#if (((defined __APPLE__ && defined __MACH__) \
      || defined __DragonFly__ || defined __FreeBSD__) \
     && (defined HAVE___HEADER_INLINE \
         ? (defined __cplusplus && defined __GNUC_STDC_INLINE__ \
            && ! defined __clang__) \
         : ((! defined _DONT_USE_CTYPE_INLINE_ \
             && (defined __GNUC__ || defined __cplusplus)) \
            || (defined _FORTIFY_SOURCE && 0 < _FORTIFY_SOURCE \
                && defined __GNUC__ && ! defined __cplusplus))))
# define _GL_EXTERN_INLINE_STDHEADER_BUG
#endif
#if ((__GNUC__ \
      ? defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__ \
      : (199901L <= __STDC_VERSION__ \
         && !defined __HP_cc \
         && !defined __PGI \
         && !(defined __SUNPRO_C && __STDC__))) \
     && !defined _GL_EXTERN_INLINE_STDHEADER_BUG)
# define _GL_INLINE inline
# define _GL_EXTERN_INLINE extern inline
# define _GL_EXTERN_INLINE_IN_USE
#elif (2 < __GNUC__ + (7 <= __GNUC_MINOR__) && !defined __STRICT_ANSI__ \
       && !defined _GL_EXTERN_INLINE_STDHEADER_BUG)
# if defined __GNUC_GNU_INLINE__ && __GNUC_GNU_INLINE__
   /* __gnu_inline__ suppresses a GCC 4.2 diagnostic.  */
#  define _GL_INLINE extern inline __attribute__ ((__gnu_inline__))
# else
#  define _GL_INLINE extern inline
# endif
# define _GL_EXTERN_INLINE extern
# define _GL_EXTERN_INLINE_IN_USE
#else
# define _GL_INLINE _GL_UNUSED static
# define _GL_EXTERN_INLINE _GL_UNUSED static
#endif

/* In GCC 4.6 (inclusive) to 5.1 (exclusive),
   suppress bogus "no previous prototype for 'FOO'"
   and "no previous declaration for 'FOO'" diagnostics,
   when FOO is an inline function in the header; see
   <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=54113> and
   <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=63877>.  */
#if __GNUC__ == 4 && 6 <= __GNUC_MINOR__
# if defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__
#  define _GL_INLINE_HEADER_CONST_PRAGMA
# else
#  define _GL_INLINE_HEADER_CONST_PRAGMA \
     _Pragma ("GCC diagnostic ignored \"-Wsuggest-attribute=const\"")
# endif
# define _GL_INLINE_HEADER_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-prototypes\"") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-declarations\"") \
    _GL_INLINE_HEADER_CONST_PRAGMA
# define _GL_INLINE_HEADER_END \
    _Pragma ("GCC diagnostic pop")
#else
# define _GL_INLINE_HEADER_BEGIN
# define _GL_INLINE_HEADER_END
#endif

/* Define to 1 if the compiler supports the keyword '__inline'. */
#define HAVE___INLINE 1

/* Define to 1 if you have the '__xpg_strerror_r' function. */
/* #undef HAVE___XPG_STRERROR_R */

/* Define as const if the declaration of iconv() needs const. */
#define ICONV_CONST 

/* Define to a symbolic name denoting the flavor of iconv_open()
   implementation. */
/* #undef ICONV_FLAVOR */

/* Define if localename.c overrides newlocale(), duplocale(), freelocale(). */
/* #undef LOCALENAME_ENHANCE_LOCALE_FUNCS */

/* Define to 1 if lseek does not detect pipes. */
/* #undef LSEEK_PIPE_BROKEN */

/* Define to 1 if 'lstat' dereferences a symlink specified with a trailing
   slash. */
/* #undef LSTAT_FOLLOWS_SLASHED_SYMLINK */

/* If malloc(0) is != NULL, define this to 1. Otherwise define this to 0. */
#define MALLOC_0_IS_NONNULL 1

/* Define to a substitute value for mmap()'s MAP_ANONYMOUS flag. */
/* #undef MAP_ANONYMOUS */

/* Define if the mbrtowc function does not return (size_t) -2 for empty input.
   */
/* #undef MBRTOWC_EMPTY_INPUT_BUG */

/* Define if the mbrtowc function may signal encoding errors in the C locale.
   */
/* #undef MBRTOWC_IN_C_LOCALE_MAYBE_EILSEQ */

/* Define if the mbrtowc function has the NULL pwc argument bug. */
/* #undef MBRTOWC_NULL_ARG1_BUG */

/* Define if the mbrtowc function has the NULL string argument bug. */
/* #undef MBRTOWC_NULL_ARG2_BUG */

/* Define if the mbrtowc function does not return 0 for a NUL character. */
/* #undef MBRTOWC_NUL_RETVAL_BUG */

/* Define if the mbrtowc function returns a wrong return value. */
/* #undef MBRTOWC_RETVAL_BUG */

/* Define if the mbrtowc function stores a wide character when reporting
   incomplete input. */
/* #undef MBRTOWC_STORES_INCOMPLETE_BUG */

/* Use GNU style printf and scanf.  */
#ifndef __USE_MINGW_ANSI_STDIO
# define __USE_MINGW_ANSI_STDIO 1
#endif


/* Define to 1 on musl libc. */
/* #undef MUSL_LIBC */

/* Define to 1 if assertions should be disabled. */
/* #undef NDEBUG */

/* Define to 1 to enable general improvements of setlocale. */
#define NEED_SETLOCALE_IMPROVED 0

/* Define to 1 to enable a multithread-safety fix of setlocale. */
#define NEED_SETLOCALE_MTSAFE 1

/* Define to 1 if nl_langinfo is multithread-safe. */
#define NL_LANGINFO_MTSAFE 1

/* Define to 1 if open() fails to recognize a trailing slash. */
#define OPEN_TRAILING_SLASH_BUG 1

/* Name of package */
#define PACKAGE "grep"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "bug-grep@gnu.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "GNU grep"

/* String identifying the packager of this software */
/* #undef PACKAGE_PACKAGER */

/* Packager info for bug reports (URL/e-mail/...) */
/* #undef PACKAGE_PACKAGER_BUG_REPORTS */

/* Packager-specific version information */
/* #undef PACKAGE_PACKAGER_VERSION */

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "GNU grep 3.11"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "grep"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://www.gnu.org/software/grep/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.11"

/* Define to the type that is the result of default argument promotions of
   type mode_t. */
#define PROMOTED_MODE_T int

/* Define if pthread_create is an inline function. */
/* #undef PTHREAD_CREATE_IS_INLINE */

/* Define if the pthread_in_use() detection is hard. */
/* #undef PTHREAD_IN_USE_DETECTION_HARD */

/* Define to 1 if pthread_sigmask(), when it fails, returns -1 and sets errno.
   */
/* #undef PTHREAD_SIGMASK_FAILS_WITH_ERRNO */

/* Define to 1 if pthread_sigmask may return 0 and have no effect. */
/* #undef PTHREAD_SIGMASK_INEFFECTIVE */

/* Define to 1 if pthread_sigmask() unblocks signals incorrectly. */
/* #undef PTHREAD_SIGMASK_UNBLOCK_BUG */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'ptrdiff_t'. */
/* #undef PTRDIFF_T_SUFFIX */

/* Define to 1 if gnulib's fchdir() replacement is used. */
/* #undef REPLACE_FCHDIR */

/* Define to 1 if stat needs help when passed a file name with a trailing
   slash */
#define REPLACE_FUNC_STAT_FILE 1

/* Define if nl_langinfo exists but is overridden by gnulib. */
#define REPLACE_NL_LANGINFO 1

/* Define to 1 if open() should work around the inability to open a directory.
   */
/* #undef REPLACE_OPEN_DIRECTORY */

/* Define to 1 if strerror(0) does not return a message implying success. */
#define REPLACE_STRERROR_0 1

/* Define if vasnprintf exists but is overridden by gnulib. */
/* #undef REPLACE_VASNPRINTF */

/* Define to 1 if setlocale (LC_ALL, NULL) is multithread-safe. */
#define SETLOCALE_NULL_ALL_MTSAFE 0

/* Define to 1 if setlocale (category, NULL) is multithread-safe. */
#define SETLOCALE_NULL_ONE_MTSAFE 1

/* Define if sigaltstack() interprets the stack_t.ss_sp field incorrectly, as
   the highest address of the alternate stack range rather than as the lowest
   address. */
/* #undef SIGALTSTACK_SS_REVERSED */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'sig_atomic_t'. */
/* #undef SIG_ATOMIC_T_SUFFIX */

/* Define as the maximum value of type 'size_t', if the system doesn't define
   it. */
#ifndef SIZE_MAX
/* # undef SIZE_MAX */
#endif

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'size_t'. */
/* #undef SIZE_T_SUFFIX */

/* Define on Solaris 11 and its derivates. */
/* #undef SOLARIS11 */

/* Define as the direction of stack growth for your system. STACK_DIRECTION >
   0 => grows toward higher addresses STACK_DIRECTION < 0 => grows toward
   lower addresses STACK_DIRECTION = 0 => spaghetti stack. */
#define STACK_DIRECTION -1

/* Define to 1 if the 'S_IS*' macros in <sys/stat.h> do not work properly. */
/* #undef STAT_MACROS_BROKEN */

/* Define to 1 if all of the C89 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */
/* #undef STRERROR_R_CHAR_P */

/* Define to 1 if the type of the st_atim member of a struct stat is struct
   timespec. */
/* #undef TYPEOF_STRUCT_STAT_ST_ATIM_IS_STRUCT_TIMESPEC */

/* building with included regex code */
/* #undef USE_INCLUDED_REGEX */

/* Define if the combination of the ISO C and POSIX multithreading APIs can be
   used. */
/* #undef USE_ISOC_AND_POSIX_THREADS */

/* Define if the ISO C multithreading library can be used. */
/* #undef USE_ISOC_THREADS */

/* Define if the POSIX multithreading library can be used. */
#define USE_POSIX_THREADS 1

/* Define if references to the POSIX multithreading library are satisfied by
   libc. */
/* #undef USE_POSIX_THREADS_FROM_LIBC */

/* Define if references to the POSIX multithreading library should be made
   weak. */
/* #undef USE_POSIX_THREADS_WEAK */

/* Enable extensions on AIX, Interix, z/OS.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable general extensions on macOS.  */
#ifndef _DARWIN_C_SOURCE
# define _DARWIN_C_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable X/Open compliant socket functions that do not require linking
   with -lxnet on HP-UX 11.11.  */
#ifndef _HPUX_ALT_XOPEN_SOCKET_API
# define _HPUX_ALT_XOPEN_SOCKET_API 1
#endif
/* Identify the host operating system as Minix.
   This macro does not affect the system headers' behavior.
   A future release of Autoconf may stop defining this macro.  */
#ifndef _MINIX
/* # undef _MINIX */
#endif
/* Enable general extensions on NetBSD.
   Enable NetBSD compatibility extensions on Minix.  */
#ifndef _NETBSD_SOURCE
# define _NETBSD_SOURCE 1
#endif
/* Enable OpenBSD compatibility extensions on NetBSD.
   Oddly enough, this does nothing on OpenBSD.  */
#ifndef _OPENBSD_SOURCE
# define _OPENBSD_SOURCE 1
#endif
/* Define to 1 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_SOURCE
/* # undef _POSIX_SOURCE */
#endif
/* Define to 2 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_1_SOURCE
/* # undef _POSIX_1_SOURCE */
#endif
/* Enable POSIX-compatible threading on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-5:2014.  */
#ifndef __STDC_WANT_IEC_60559_ATTRIBS_EXT__
# define __STDC_WANT_IEC_60559_ATTRIBS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-1:2014.  */
#ifndef __STDC_WANT_IEC_60559_BFP_EXT__
# define __STDC_WANT_IEC_60559_BFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-2:2015.  */
#ifndef __STDC_WANT_IEC_60559_DFP_EXT__
# define __STDC_WANT_IEC_60559_DFP_EXT__ 1
#endif
/* Enable extensions specified by C23 Annex F.  */
#ifndef __STDC_WANT_IEC_60559_EXT__
# define __STDC_WANT_IEC_60559_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-4:2015.  */
#ifndef __STDC_WANT_IEC_60559_FUNCS_EXT__
# define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
#endif
/* Enable extensions specified by C23 Annex H and ISO/IEC TS 18661-3:2015.  */
#ifndef __STDC_WANT_IEC_60559_TYPES_EXT__
# define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TR 24731-2:2010.  */
#ifndef __STDC_WANT_LIB_EXT2__
# define __STDC_WANT_LIB_EXT2__ 1
#endif
/* Enable extensions specified by ISO/IEC 24747:2009.  */
#ifndef __STDC_WANT_MATH_SPEC_FUNCS__
# define __STDC_WANT_MATH_SPEC_FUNCS__ 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable X/Open extensions.  Define to 500 only if necessary
   to make mbstate_t available.  */
#ifndef _XOPEN_SOURCE
/* # undef _XOPEN_SOURCE */
#endif


/* An alias of GNULIB_STDIO_SINGLE_THREAD. */
#define USE_UNLOCKED_IO GNULIB_STDIO_SINGLE_THREAD

/* Define if the native Windows multithreading API can be used. */
/* #undef USE_WINDOWS_THREADS */

/* Version number of package */
#define VERSION "3.11"

/* Define to 1 if unsetenv returns void instead of int. */
/* #undef VOID_UNSETENV */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wchar_t'. */
/* #undef WCHAR_T_SUFFIX */

/* Define if the wcrtomb function does not work in the C locale. */
/* #undef WCRTOMB_C_LOCALE_BUG */

/* Define if the wcrtomb function has an incorrect return value. */
/* #undef WCRTOMB_RETVAL_BUG */

/* Define if WSAStartup is needed. */
/* #undef WINDOWS_SOCKETS */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wint_t'. */
/* #undef WINT_T_SUFFIX */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* True if the compiler says it groks GNU C version MAJOR.MINOR.  */
#if defined __GNUC__ && defined __GNUC_MINOR__
# define _GL_GNUC_PREREQ(major, minor) \
    ((major) < __GNUC__ + ((minor) <= __GNUC_MINOR__))
#else
# define _GL_GNUC_PREREQ(major, minor) 0
#endif


/* Define to enable the declarations of ISO C 11 types and functions. */
/* #undef _ISOC11_SOURCE */

/* Define to 1 on platforms where this makes off_t a 64-bit type. */
/* #undef _LARGE_FILES */

/* Define to 1 on Solaris. */
/* #undef _LCONV_C99 */

/* The _Noreturn keyword of C11.  */
#ifndef _Noreturn
# if (defined __cplusplus \
      && ((201103 <= __cplusplus && !(__GNUC__ == 4 && __GNUC_MINOR__ == 7)) \
          || (defined _MSC_VER && 1900 <= _MSC_VER)) \
      && 0)
    /* [[noreturn]] is not practically usable, because with it the syntax
         extern _Noreturn void func (...);
       would not be valid; such a declaration would only be valid with 'extern'
       and '_Noreturn' swapped, or without the 'extern' keyword.  However, some
       AIX system header files and several gnulib header files use precisely
       this syntax with 'extern'.  */
#  define _Noreturn [[noreturn]]
# elif (defined __clang__ && __clang_major__ < 16 \
        && defined _GL_WORK_AROUND_LLVM_BUG_59792)
   /* Compile with -D_GL_WORK_AROUND_LLVM_BUG_59792 to work around
      that rare LLVM bug, though you may get many false-alarm warnings.  */
#  define _Noreturn
# elif ((!defined __cplusplus || defined __clang__) \
        && (201112 <= (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) \
            || (!defined __STRICT_ANSI__ \
                && (_GL_GNUC_PREREQ (4, 7) \
                    || (defined __apple_build_version__ \
                        ? 6000000 <= __apple_build_version__ \
                        : 3 < __clang_major__ + (5 <= __clang_minor__))))))
   /* _Noreturn works as-is.  */
# elif _GL_GNUC_PREREQ (2, 8) || defined __clang__ || 0x5110 <= __SUNPRO_C
#  define _Noreturn __attribute__ ((__noreturn__))
# elif 1200 <= (defined _MSC_VER ? _MSC_VER : 0)
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif


/* Define to 1 in order to get the POSIX compatible declarations of socket
   functions. */
/* #undef _POSIX_PII_SOCKET */

/* Define if you want <regex.h> to include <limits.h>, so that it consistently
   overrides <limits.h>'s RE_DUP_MAX. */
#define _REGEX_INCLUDE_LIMITS_H 1

/* Define if you want regoff_t to be at least as wide POSIX requires. */
#define _REGEX_LARGE_OFFSETS 1

/* Number of bits in time_t, on hosts where this is settable. */
/* #undef _TIME_BITS */

/* For standard stat data types on VMS. */
#define _USE_STD_STAT 1

/* Define to rpl_ if the getopt replacement functions and variables should be
   used. */
#define __GETOPT_PREFIX rpl_

/* Define to 1 on platforms where this makes time_t a 64-bit type. */
/* #undef __MINGW_USE_VC2005_COMPAT */

/* Define to 1 if the system <stdint.h> predates C++11. */
/* #undef __STDC_CONSTANT_MACROS */

/* Define to 1 if the system <stdint.h> predates C++11. */
/* #undef __STDC_LIMIT_MACROS */

/* Define to 1 if C does not support variable-length arrays, and if the
   compiler does not already define this. */
/* #undef __STDC_NO_VLA__ */

/* The _GL_ASYNC_SAFE marker should be attached to functions that are
   signal handlers (for signals other than SIGABRT, SIGPIPE) or can be
   invoked from such signal handlers.  Such functions have some restrictions:
     * All functions that it calls should be marked _GL_ASYNC_SAFE as well,
       or should be listed as async-signal-safe in POSIX
       <https://pubs.opengroup.org/onlinepubs/9699919799/functions/V2_chap02.html#tag_15_04>
       section 2.4.3.  Note that malloc(), sprintf(), and fwrite(), in
       particular, are NOT async-signal-safe.
     * All memory locations (variables and struct fields) that these functions
       access must be marked 'volatile'.  This holds for both read and write
       accesses.  Otherwise the compiler might optimize away stores to and
       reads from such locations that occur in the program, depending on its
       data flow analysis.  For example, when the program contains a loop
       that is intended to inspect a variable set from within a signal handler
           while (!signal_occurred)
             ;
       the compiler is allowed to transform this into an endless loop if the
       variable 'signal_occurred' is not declared 'volatile'.
   Additionally, recall that:
     * A signal handler should not modify errno (except if it is a handler
       for a fatal signal and ends by raising the same signal again, thus
       provoking the termination of the process).  If it invokes a function
       that may clobber errno, it needs to save and restore the value of
       errno.  */
#define _GL_ASYNC_SAFE


/* Attributes.  */
#if (defined __has_attribute \
     && (!defined __clang_minor__ \
         || (defined __apple_build_version__ \
             ? 6000000 <= __apple_build_version__ \
             : 5 <= __clang_major__)))
# define _GL_HAS_ATTRIBUTE(attr) __has_attribute (__##attr##__)
#else
# define _GL_HAS_ATTRIBUTE(attr) _GL_ATTR_##attr
# define _GL_ATTR_alloc_size _GL_GNUC_PREREQ (4, 3)
# define _GL_ATTR_always_inline _GL_GNUC_PREREQ (3, 2)
# define _GL_ATTR_artificial _GL_GNUC_PREREQ (4, 3)
# define _GL_ATTR_cold _GL_GNUC_PREREQ (4, 3)
# define _GL_ATTR_const _GL_GNUC_PREREQ (2, 95)
# define _GL_ATTR_deprecated _GL_GNUC_PREREQ (3, 1)
# define _GL_ATTR_diagnose_if 0
# define _GL_ATTR_error _GL_GNUC_PREREQ (4, 3)
# define _GL_ATTR_externally_visible _GL_GNUC_PREREQ (4, 1)
# define _GL_ATTR_fallthrough _GL_GNUC_PREREQ (7, 0)
# define _GL_ATTR_format _GL_GNUC_PREREQ (2, 7)
# define _GL_ATTR_leaf _GL_GNUC_PREREQ (4, 6)
# define _GL_ATTR_malloc _GL_GNUC_PREREQ (3, 0)
# ifdef _ICC
#  define _GL_ATTR_may_alias 0
# else
#  define _GL_ATTR_may_alias _GL_GNUC_PREREQ (3, 3)
# endif
# define _GL_ATTR_noinline _GL_GNUC_PREREQ (3, 1)
# define _GL_ATTR_nonnull _GL_GNUC_PREREQ (3, 3)
# define _GL_ATTR_nonstring _GL_GNUC_PREREQ (8, 0)
# define _GL_ATTR_nothrow _GL_GNUC_PREREQ (3, 3)
# define _GL_ATTR_packed _GL_GNUC_PREREQ (2, 7)
# define _GL_ATTR_pure _GL_GNUC_PREREQ (2, 96)
# define _GL_ATTR_returns_nonnull _GL_GNUC_PREREQ (4, 9)
# define _GL_ATTR_sentinel _GL_GNUC_PREREQ (4, 0)
# define _GL_ATTR_unused _GL_GNUC_PREREQ (2, 7)
# define _GL_ATTR_warn_unused_result _GL_GNUC_PREREQ (3, 4)
#endif

/* Disable GCC -Wpedantic if using __has_c_attribute and this is not C23+.  */
#if (defined __has_c_attribute && _GL_GNUC_PREREQ (4, 6) \
     && (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) <= 201710)
# pragma GCC diagnostic ignored "-Wpedantic"
#endif

/* Define if, in a function declaration, the attributes in bracket syntax
   [[...]] must come before the attributes in __attribute__((...)) syntax.
   If this is defined, it is best to avoid the bracket syntax, so that the
   various _GL_ATTRIBUTE_* can be cumulated on the same declaration in any
   order.  */
#ifdef __cplusplus
# if defined __clang__
#  define _GL_BRACKET_BEFORE_ATTRIBUTE 1
# endif
#else
# if defined __GNUC__ && !defined __clang__
#  define _GL_BRACKET_BEFORE_ATTRIBUTE 1
# endif
#endif

/* _GL_ATTRIBUTE_ALLOC_SIZE ((N)) declares that the Nth argument of the function
   is the size of the returned memory block.
   _GL_ATTRIBUTE_ALLOC_SIZE ((M, N)) declares that the Mth argument multiplied
   by the Nth argument of the function is the size of the returned memory block.
 */
/* Applies to: function, pointer to function, function types.  */
#ifndef _GL_ATTRIBUTE_ALLOC_SIZE
# if _GL_HAS_ATTRIBUTE (alloc_size)
#  define _GL_ATTRIBUTE_ALLOC_SIZE(args) __attribute__ ((__alloc_size__ args))
# else
#  define _GL_ATTRIBUTE_ALLOC_SIZE(args)
# endif
#endif

/* _GL_ATTRIBUTE_ALWAYS_INLINE tells that the compiler should always inline the
   function and report an error if it cannot do so.  */
/* Applies to: function.  */
#ifndef _GL_ATTRIBUTE_ALWAYS_INLINE
# if _GL_HAS_ATTRIBUTE (always_inline)
#  define _GL_ATTRIBUTE_ALWAYS_INLINE __attribute__ ((__always_inline__))
# else
#  define _GL_ATTRIBUTE_ALWAYS_INLINE
# endif
#endif

/* _GL_ATTRIBUTE_ARTIFICIAL declares that the function is not important to show
    in stack traces when debugging.  The compiler should omit the function from
    stack traces.  */
/* Applies to: function.  */
#ifndef _GL_ATTRIBUTE_ARTIFICIAL
# if _GL_HAS_ATTRIBUTE (artificial)
#  define _GL_ATTRIBUTE_ARTIFICIAL __attribute__ ((__artificial__))
# else
#  define _GL_ATTRIBUTE_ARTIFICIAL
# endif
#endif

/* _GL_ATTRIBUTE_COLD declares that the function is rarely executed.  */
/* Applies to: functions.  */
/* Avoid __attribute__ ((cold)) on MinGW; see thread starting at
   <https://lists.gnu.org/r/emacs-devel/2019-04/msg01152.html>.
   Also, Oracle Studio 12.6 requires 'cold' not '__cold__'.  */
#ifndef _GL_ATTRIBUTE_COLD
# if _GL_HAS_ATTRIBUTE (cold) && !defined __MINGW32__
#  ifndef __SUNPRO_C
#   define _GL_ATTRIBUTE_COLD __attribute__ ((__cold__))
#  else
#   define _GL_ATTRIBUTE_COLD __attribute__ ((cold))
#  endif
# else
#  define _GL_ATTRIBUTE_COLD
# endif
#endif

/* _GL_ATTRIBUTE_CONST declares that it is OK for a compiler to omit duplicate
   calls to the function with the same arguments.
   This attribute is safe for a function that neither depends on nor affects
   observable state, and always returns exactly once - e.g., does not loop
   forever, and does not call longjmp.
   (This attribute is stricter than _GL_ATTRIBUTE_PURE.)  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_CONST
# if _GL_HAS_ATTRIBUTE (const)
#  define _GL_ATTRIBUTE_CONST __attribute__ ((__const__))
# else
#  define _GL_ATTRIBUTE_CONST
# endif
#endif

/* _GL_ATTRIBUTE_DEALLOC (F, I) declares that the function returns pointers
   that can be freed by passing them as the Ith argument to the
   function F.
   _GL_ATTRIBUTE_DEALLOC_FREE declares that the function returns pointers that
   can be freed via 'free'; it can be used only after declaring 'free'.  */
/* Applies to: functions.  Cannot be used on inline functions.  */
#ifndef _GL_ATTRIBUTE_DEALLOC
# if _GL_GNUC_PREREQ (11, 0)
#  define _GL_ATTRIBUTE_DEALLOC(f, i) __attribute__ ((__malloc__ (f, i)))
# else
#  define _GL_ATTRIBUTE_DEALLOC(f, i)
# endif
#endif
/* If gnulib's <string.h> or <wchar.h> has already defined this macro, continue
   to use this earlier definition, since <stdlib.h> may not have been included
   yet.  */
#ifndef _GL_ATTRIBUTE_DEALLOC_FREE
# if defined __cplusplus && defined __GNUC__ && !defined __clang__
/* Work around GCC bug <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=108231> */
#  define _GL_ATTRIBUTE_DEALLOC_FREE \
     _GL_ATTRIBUTE_DEALLOC ((void (*) (void *)) free, 1)
# else
#  define _GL_ATTRIBUTE_DEALLOC_FREE \
     _GL_ATTRIBUTE_DEALLOC (free, 1)
# endif
#endif

/* _GL_ATTRIBUTE_DEPRECATED: Declares that an entity is deprecated.
   The compiler may warn if the entity is used.  */
/* Applies to:
     - function, variable,
     - struct, union, struct/union member,
     - enumeration, enumeration item,
     - typedef,
   in C++ also: namespace, class, template specialization.  */
#ifndef _GL_ATTRIBUTE_DEPRECATED
# ifndef _GL_BRACKET_BEFORE_ATTRIBUTE
#  ifdef __has_c_attribute
#   if __has_c_attribute (__deprecated__)
#    define _GL_ATTRIBUTE_DEPRECATED [[__deprecated__]]
#   endif
#  endif
# endif
# if !defined _GL_ATTRIBUTE_DEPRECATED && _GL_HAS_ATTRIBUTE (deprecated)
#  define _GL_ATTRIBUTE_DEPRECATED __attribute__ ((__deprecated__))
# endif
# ifndef _GL_ATTRIBUTE_DEPRECATED
#  define _GL_ATTRIBUTE_DEPRECATED
# endif
#endif

/* _GL_ATTRIBUTE_ERROR(msg) requests an error if a function is called and
   the function call is not optimized away.
   _GL_ATTRIBUTE_WARNING(msg) requests a warning if a function is called and
   the function call is not optimized away.  */
/* Applies to: functions.  */
#if !(defined _GL_ATTRIBUTE_ERROR && defined _GL_ATTRIBUTE_WARNING)
# if _GL_HAS_ATTRIBUTE (error)
#  define _GL_ATTRIBUTE_ERROR(msg) __attribute__ ((__error__ (msg)))
#  define _GL_ATTRIBUTE_WARNING(msg) __attribute__ ((__warning__ (msg)))
# elif _GL_HAS_ATTRIBUTE (diagnose_if)
#  define _GL_ATTRIBUTE_ERROR(msg) __attribute__ ((__diagnose_if__ (1, msg, "error")))
#  define _GL_ATTRIBUTE_WARNING(msg) __attribute__ ((__diagnose_if__ (1, msg, "warning")))
# else
#  define _GL_ATTRIBUTE_ERROR(msg)
#  define _GL_ATTRIBUTE_WARNING(msg)
# endif
#endif

/* _GL_ATTRIBUTE_EXTERNALLY_VISIBLE declares that the entity should remain
   visible to debuggers etc., even with '-fwhole-program'.  */
/* Applies to: functions, variables.  */
#ifndef _GL_ATTRIBUTE_EXTERNALLY_VISIBLE
# if _GL_HAS_ATTRIBUTE (externally_visible)
#  define _GL_ATTRIBUTE_EXTERNALLY_VISIBLE __attribute__ ((externally_visible))
# else
#  define _GL_ATTRIBUTE_EXTERNALLY_VISIBLE
# endif
#endif

/* _GL_ATTRIBUTE_FALLTHROUGH declares that it is not a programming mistake if
   the control flow falls through to the immediately following 'case' or
   'default' label.  The compiler should not warn in this case.  */
/* Applies to: Empty statement (;), inside a 'switch' statement.  */
/* Always expands to something.  */
#ifndef _GL_ATTRIBUTE_FALLTHROUGH
# ifdef __has_c_attribute
#  if __has_c_attribute (__fallthrough__)
#   define _GL_ATTRIBUTE_FALLTHROUGH [[__fallthrough__]]
#  endif
# endif
# if !defined _GL_ATTRIBUTE_FALLTHROUGH && _GL_HAS_ATTRIBUTE (fallthrough)
#  define _GL_ATTRIBUTE_FALLTHROUGH __attribute__ ((__fallthrough__))
# endif
# ifndef _GL_ATTRIBUTE_FALLTHROUGH
#  define _GL_ATTRIBUTE_FALLTHROUGH ((void) 0)
# endif
#endif

/* _GL_ATTRIBUTE_FORMAT ((ARCHETYPE, STRING-INDEX, FIRST-TO-CHECK))
   declares that the STRING-INDEXth function argument is a format string of
   style ARCHETYPE, which is one of:
     printf, gnu_printf
     scanf, gnu_scanf,
     strftime, gnu_strftime,
     strfmon,
   or the same thing prefixed and suffixed with '__'.
   If FIRST-TO-CHECK is not 0, arguments starting at FIRST-TO_CHECK
   are suitable for the format string.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_FORMAT
# if _GL_HAS_ATTRIBUTE (format)
#  define _GL_ATTRIBUTE_FORMAT(spec) __attribute__ ((__format__ spec))
# else
#  define _GL_ATTRIBUTE_FORMAT(spec)
# endif
#endif

/* _GL_ATTRIBUTE_LEAF declares that if the function is called from some other
   compilation unit, it executes code from that unit only by return or by
   exception handling.  This declaration lets the compiler optimize that unit
   more aggressively.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_LEAF
# if _GL_HAS_ATTRIBUTE (leaf)
#  define _GL_ATTRIBUTE_LEAF __attribute__ ((__leaf__))
# else
#  define _GL_ATTRIBUTE_LEAF
# endif
#endif

/* _GL_ATTRIBUTE_MALLOC declares that the function returns a pointer to freshly
   allocated memory.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_MALLOC
# if _GL_HAS_ATTRIBUTE (malloc)
#  define _GL_ATTRIBUTE_MALLOC __attribute__ ((__malloc__))
# else
#  define _GL_ATTRIBUTE_MALLOC
# endif
#endif

/* _GL_ATTRIBUTE_MAY_ALIAS declares that pointers to the type may point to the
   same storage as pointers to other types.  Thus this declaration disables
   strict aliasing optimization.  */
/* Applies to: types.  */
/* Oracle Studio 12.6 mishandles may_alias despite __has_attribute OK.  */
#ifndef _GL_ATTRIBUTE_MAY_ALIAS
# if _GL_HAS_ATTRIBUTE (may_alias) && !defined __SUNPRO_C
#  define _GL_ATTRIBUTE_MAY_ALIAS __attribute__ ((__may_alias__))
# else
#  define _GL_ATTRIBUTE_MAY_ALIAS
# endif
#endif

/* _GL_ATTRIBUTE_MAYBE_UNUSED declares that it is not a programming mistake if
   the entity is not used.  The compiler should not warn if the entity is not
   used.  */
/* Applies to:
     - function, variable,
     - struct, union, struct/union member,
     - enumeration, enumeration item,
     - typedef,
   in C++ also: class.  */
/* In C++ and C23, this is spelled [[__maybe_unused__]].
   GCC's syntax is __attribute__ ((__unused__)).
   clang supports both syntaxes.  Except that with clang ≥ 6, < 10, in C++ mode,
   __has_c_attribute (__maybe_unused__) yields true but the use of
   [[__maybe_unused__]] nevertheless produces a warning.  */
#ifndef _GL_ATTRIBUTE_MAYBE_UNUSED
# ifndef _GL_BRACKET_BEFORE_ATTRIBUTE
#  if defined __clang__ && defined __cplusplus
#   if !defined __apple_build_version__ && __clang_major__ >= 10
#    define _GL_ATTRIBUTE_MAYBE_UNUSED [[__maybe_unused__]]
#   endif
#  elif defined __has_c_attribute
#   if __has_c_attribute (__maybe_unused__)
#    define _GL_ATTRIBUTE_MAYBE_UNUSED [[__maybe_unused__]]
#   endif
#  endif
# endif
# ifndef _GL_ATTRIBUTE_MAYBE_UNUSED
#  define _GL_ATTRIBUTE_MAYBE_UNUSED _GL_ATTRIBUTE_UNUSED
# endif
#endif
/* Alternative spelling of this macro, for convenience and for
   compatibility with glibc/include/libc-symbols.h.  */
#define _GL_UNUSED _GL_ATTRIBUTE_MAYBE_UNUSED
/* Earlier spellings of this macro.  */
#define _UNUSED_PARAMETER_ _GL_ATTRIBUTE_MAYBE_UNUSED

/* _GL_ATTRIBUTE_NODISCARD declares that the caller of the function should not
   discard the return value.  The compiler may warn if the caller does not use
   the return value, unless the caller uses something like ignore_value.  */
/* Applies to: function, enumeration, class.  */
#ifndef _GL_ATTRIBUTE_NODISCARD
# ifndef _GL_BRACKET_BEFORE_ATTRIBUTE
#  if defined __clang__ && defined __cplusplus
  /* With clang up to 15.0.6 (at least), in C++ mode, [[__nodiscard__]] produces
     a warning.
     The 1000 below means a yet unknown threshold.  When clang++ version X
     starts supporting [[__nodiscard__]] without warning about it, you can
     replace the 1000 with X.  */
#   if __clang_major__ >= 1000
#    define _GL_ATTRIBUTE_NODISCARD [[__nodiscard__]]
#   endif
#  elif defined __has_c_attribute
#   if __has_c_attribute (__nodiscard__)
#    define _GL_ATTRIBUTE_NODISCARD [[__nodiscard__]]
#   endif
#  endif
# endif
# if !defined _GL_ATTRIBUTE_NODISCARD && _GL_HAS_ATTRIBUTE (warn_unused_result)
#  define _GL_ATTRIBUTE_NODISCARD __attribute__ ((__warn_unused_result__))
# endif
# ifndef _GL_ATTRIBUTE_NODISCARD
#  define _GL_ATTRIBUTE_NODISCARD
# endif
#endif

/* _GL_ATTRIBUTE_NOINLINE tells that the compiler should not inline the
   function.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_NOINLINE
# if _GL_HAS_ATTRIBUTE (noinline)
#  define _GL_ATTRIBUTE_NOINLINE __attribute__ ((__noinline__))
# else
#  define _GL_ATTRIBUTE_NOINLINE
# endif
#endif

/* _GL_ATTRIBUTE_NONNULL ((N1, N2,...)) declares that the arguments N1, N2,...
   must not be NULL.
   _GL_ATTRIBUTE_NONNULL () declares that all pointer arguments must not be
   null.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_NONNULL
# if _GL_HAS_ATTRIBUTE (nonnull)
#  define _GL_ATTRIBUTE_NONNULL(args) __attribute__ ((__nonnull__ args))
# else
#  define _GL_ATTRIBUTE_NONNULL(args)
# endif
#endif

/* _GL_ATTRIBUTE_NONSTRING declares that the contents of a character array is
   not meant to be NUL-terminated.  */
/* Applies to: struct/union members and variables that are arrays of element
   type '[[un]signed] char'.  */
#ifndef _GL_ATTRIBUTE_NONSTRING
# if _GL_HAS_ATTRIBUTE (nonstring)
#  define _GL_ATTRIBUTE_NONSTRING __attribute__ ((__nonstring__))
# else
#  define _GL_ATTRIBUTE_NONSTRING
# endif
#endif

/* There is no _GL_ATTRIBUTE_NORETURN; use _Noreturn instead.  */

/* _GL_ATTRIBUTE_NOTHROW declares that the function does not throw exceptions.
 */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_NOTHROW
# if _GL_HAS_ATTRIBUTE (nothrow) && !defined __cplusplus
#  define _GL_ATTRIBUTE_NOTHROW __attribute__ ((__nothrow__))
# else
#  define _GL_ATTRIBUTE_NOTHROW
# endif
#endif

/* _GL_ATTRIBUTE_PACKED declares:
   For struct members: The member has the smallest possible alignment.
   For struct, union, class: All members have the smallest possible alignment,
   minimizing the memory required.  */
/* Applies to: struct members, struct, union,
   in C++ also: class.  */
#ifndef _GL_ATTRIBUTE_PACKED
# if _GL_HAS_ATTRIBUTE (packed)
#  define _GL_ATTRIBUTE_PACKED __attribute__ ((__packed__))
# else
#  define _GL_ATTRIBUTE_PACKED
# endif
#endif

/* _GL_ATTRIBUTE_PURE declares that It is OK for a compiler to omit duplicate
   calls to the function with the same arguments if observable state is not
   changed between calls.
   This attribute is safe for a function that does not affect
   observable state, and always returns exactly once.
   (This attribute is looser than _GL_ATTRIBUTE_CONST.)  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_PURE
# if _GL_HAS_ATTRIBUTE (pure)
#  define _GL_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define _GL_ATTRIBUTE_PURE
# endif
#endif

/* _GL_ATTRIBUTE_RETURNS_NONNULL declares that the function's return value is
   a non-NULL pointer.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_RETURNS_NONNULL
# if _GL_HAS_ATTRIBUTE (returns_nonnull)
#  define _GL_ATTRIBUTE_RETURNS_NONNULL __attribute__ ((__returns_nonnull__))
# else
#  define _GL_ATTRIBUTE_RETURNS_NONNULL
# endif
#endif

/* _GL_ATTRIBUTE_SENTINEL(pos) declares that the variadic function expects a
   trailing NULL argument.
   _GL_ATTRIBUTE_SENTINEL () - The last argument is NULL (requires C99).
   _GL_ATTRIBUTE_SENTINEL ((N)) - The (N+1)st argument from the end is NULL.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_SENTINEL
# if _GL_HAS_ATTRIBUTE (sentinel)
#  define _GL_ATTRIBUTE_SENTINEL(pos) __attribute__ ((__sentinel__ pos))
# else
#  define _GL_ATTRIBUTE_SENTINEL(pos)
# endif
#endif

/* A helper macro.  Don't use it directly.  */
#ifndef _GL_ATTRIBUTE_UNUSED
# if _GL_HAS_ATTRIBUTE (unused)
#  define _GL_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define _GL_ATTRIBUTE_UNUSED
# endif
#endif


/* _GL_UNUSED_LABEL; declares that it is not a programming mistake if the
   immediately preceding label is not used.  The compiler should not warn
   if the label is not used.  */
/* Applies to: label (both in C and C++).  */
/* Note that g++ < 4.5 does not support the '__attribute__ ((__unused__)) ;'
   syntax.  But clang does.  */
#ifndef _GL_UNUSED_LABEL
# if !(defined __cplusplus && !_GL_GNUC_PREREQ (4, 5)) || defined __clang__
#  define _GL_UNUSED_LABEL _GL_ATTRIBUTE_UNUSED
# else
#  define _GL_UNUSED_LABEL
# endif
#endif


/* In C++, there is the concept of "language linkage", that encompasses
    name mangling and function calling conventions.
    The following macros start and end a block of "C" linkage.  */
#ifdef __cplusplus
# define _GL_BEGIN_C_LINKAGE extern "C" {
# define _GL_END_C_LINKAGE }
#else
# define _GL_BEGIN_C_LINKAGE
# define _GL_END_C_LINKAGE
#endif


/* Define to empty if 'const' does not conform to ANSI C. */
/* #undef const */

/* Define to the overridden function name */
#define fts_children rpl_fts_children

/* Define to the overridden function name */
#define fts_close rpl_fts_close

/* Define to the overridden function name */
#define fts_cross_check rpl_fts_cross_check

/* Define to the overridden function name */
#define fts_open rpl_fts_open

/* Define to the overridden function name */
#define fts_read rpl_fts_read

/* Define to the overridden function name */
#define fts_set rpl_fts_set

/* Define as 'int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* A replacement for va_copy, if needed.  */
#define gl_va_copy(a,b) ((a) = (b))

/* Define to '__inline__' or '__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to long or long long if <stdint.h> and <inttypes.h> don't define. */
/* #undef intmax_t */

/* Work around a bug in Apple GCC 4.0.1 build 5465: In C99 mode, it supports
   the ISO C 99 semantics of 'extern inline' (unlike the GNU C semantics of
   earlier versions), but does not display it by setting __GNUC_STDC_INLINE__.
   __APPLE__ && __MACH__ test for Mac OS X.
   __APPLE_CC__ tests for the Apple compiler and its version.
   __STDC_VERSION__ tests for the C99 mode.  */
#if defined __APPLE__ && defined __MACH__ && __APPLE_CC__ >= 5465 && !defined __cplusplus && __STDC_VERSION__ >= 199901L && !defined __GNUC_STDC_INLINE__
# define __GNUC_STDC_INLINE__ 1
#endif

/* Define to 1 if the compiler is checking for lint. */
/* #undef lint */

/* Define to a type if <wchar.h> does not define. */
/* #undef mbstate_t */

/* _GL_CMP (n1, n2) performs a three-valued comparison on n1 vs. n2, where
   n1 and n2 are expressions without side effects, that evaluate to real
   numbers (excluding NaN).
   It returns
     1  if n1 > n2
     0  if n1 == n2
     -1 if n1 < n2
   The naïve code   (n1 > n2 ? 1 : n1 < n2 ? -1 : 0)  produces a conditional
   jump with nearly all GCC versions up to GCC 10.
   This variant     (n1 < n2 ? -1 : n1 > n2)  produces a conditional with many
   GCC versions up to GCC 9.
   The better code  (n1 > n2) - (n1 < n2)  from Hacker's Delight § 2-9
   avoids conditional jumps in all GCC versions >= 3.4.  */
#define _GL_CMP(n1, n2) (((n1) > (n2)) - ((n1) < (n2)))


/* Define to 'int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to the type of st_nlink in struct stat, or a supertype. */
/* #undef nlink_t */

/* Define to 'long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define as a signed integer type capable of holding a process identifier. */
/* #undef pid_t */

/* Define as the type of the result of subtracting two pointers, if the system
   doesn't define it. */
/* #undef ptrdiff_t */

/* Define to rpl_re_comp if the replacement should be used. */
#define re_comp rpl_re_comp

/* Define to rpl_re_compile_fastmap if the replacement should be used. */
#define re_compile_fastmap rpl_re_compile_fastmap

/* Define to rpl_re_compile_pattern if the replacement should be used. */
#define re_compile_pattern rpl_re_compile_pattern

/* Define to rpl_re_exec if the replacement should be used. */
#define re_exec rpl_re_exec

/* Define to rpl_re_match if the replacement should be used. */
#define re_match rpl_re_match

/* Define to rpl_re_match_2 if the replacement should be used. */
#define re_match_2 rpl_re_match_2

/* Define to rpl_re_search if the replacement should be used. */
#define re_search rpl_re_search

/* Define to rpl_re_search_2 if the replacement should be used. */
#define re_search_2 rpl_re_search_2

/* Define to rpl_re_set_registers if the replacement should be used. */
#define re_set_registers rpl_re_set_registers

/* Define to rpl_re_set_syntax if the replacement should be used. */
#define re_set_syntax rpl_re_set_syntax

/* Define to rpl_re_syntax_options if the replacement should be used. */
#define re_syntax_options rpl_re_syntax_options

/* Define to rpl_regcomp if the replacement should be used. */
#define regcomp rpl_regcomp

/* Define to rpl_regerror if the replacement should be used. */
#define regerror rpl_regerror

/* Define to rpl_regexec if the replacement should be used. */
#define regexec rpl_regexec

/* Define to rpl_regfree if the replacement should be used. */
#define regfree rpl_regfree

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported only directly.  */
#define restrict __restrict__
/* Work around a bug in older versions of Sun C++, which did not
   #define __restrict__ or support _Restrict or __restrict__
   even though the corresponding Sun C compiler ended up with
   "#define restrict _Restrict" or "#define restrict __restrict__"
   in the previous line.  This workaround can be removed once
   we assume Oracle Developer Studio 12.5 (2016) or later.  */
#if defined __SUNPRO_CC && !defined __RESTRICT && !defined __restrict__
# define _Restrict
# define __restrict__
#endif

/* Define as 'unsigned int' if <stddef.h> doesn't define. */
/* #undef size_t */

/* type to use in place of socklen_t if not defined */
/* #undef socklen_t */

/* Define as a signed type of the same size as size_t. */
/* #undef ssize_t */

/* Define to 'struct sigaltstack' if that's the type of the argument to
   sigaltstack */
/* #undef stack_t */

/* Define as 'int' if <sys/types.h> doesn't define. */
/* #undef uid_t */


  /* This definition is a duplicate of the one in unitypes.h.
     It is here so that we can cope with an older version of unitypes.h
     that does not contain this definition and that is pre-installed among
     the public header files.  */
  # if defined __restrict \
       || 2 < __GNUC__ + (95 <= __GNUC_MINOR__) \
       || __clang_major__ >= 3
  #  define _UC_RESTRICT __restrict
  # elif 199901L <= __STDC_VERSION__ || defined restrict
  #  define _UC_RESTRICT restrict
  # else
  #  define _UC_RESTRICT
  # endif
  

/* Define as a macro for copying va_list variables. */
/* #undef va_copy */

#if !defined HAVE_C_ALIGNASOF && __cplusplus < 201103 && !defined alignof
# if HAVE_STDALIGN_H
#  include <stdalign.h>
# endif

/* ISO C23 alignas and alignof for platforms that lack it.

   References:
   ISO C23 (latest free draft
   <http://www.open-std.org/jtc1/sc22/wg14/www/docs/n3047.pdf>)
   sections 6.5.3.4, 6.7.5, 7.15.
   C++11 (latest free draft
   <http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2011/n3242.pdf>)
   section 18.10. */

/* alignof (TYPE), also known as _Alignof (TYPE), yields the alignment
   requirement of a structure member (i.e., slot or field) that is of
   type TYPE, as an integer constant expression.

   This differs from GCC's and clang's __alignof__ operator, which can
   yield a better-performing alignment for an object of that type.  For
   example, on x86 with GCC and on Linux/x86 with clang,
   __alignof__ (double) and __alignof__ (long long) are 8, whereas
   alignof (double) and alignof (long long) are 4 unless the option
   '-malign-double' is used.

   The result cannot be used as a value for an 'enum' constant, if you
   want to be portable to HP-UX 10.20 cc and AIX 3.2.5 xlc.  */

/* GCC releases before GCC 4.9 had a bug in _Alignof.  See GCC bug 52023
   <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=52023>.
   clang versions < 8.0.0 have the same bug.  */
#  if (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112 \
       || (defined __GNUC__ && __GNUC__ < 4 + (__GNUC_MINOR__ < 9) \
           && !defined __clang__) \
       || (defined __clang__ && __clang_major__ < 8))
#   undef/**/_Alignof
#   ifdef __cplusplus
#    if (201103 <= __cplusplus || defined _MSC_VER)
#     define _Alignof(type) alignof (type)
#    else
      template <class __t> struct __alignof_helper { char __a; __t __b; };
#     define _Alignof(type) offsetof (__alignof_helper<type>, __b)
#     define _GL_STDALIGN_NEEDS_STDDEF 1
#    endif
#   else
#    if (defined __GNUC__ && 4 <= __GNUC__) || defined __clang__
#     define _Alignof(type) __builtin_offsetof (struct { char __a; type __b; }, __b)
#    else
#     define _Alignof(type) offsetof (struct { char __a; type __b; }, __b)
#     define _GL_STDALIGN_NEEDS_STDDEF 1
#    endif
#   endif
#  endif
#  if ! (defined __cplusplus && (201103 <= __cplusplus || defined _MSC_VER))
#   undef/**/alignof
#   define alignof _Alignof
#  endif

/* alignas (A), also known as _Alignas (A), aligns a variable or type
   to the alignment A, where A is an integer constant expression.  For
   example:

      int alignas (8) foo;
      struct s { int a; int alignas (8) bar; };

   aligns the address of FOO and the offset of BAR to be multiples of 8.

   A should be a power of two that is at least the type's alignment
   and at most the implementation's alignment limit.  This limit is
   2**28 on typical GNUish hosts, and 2**13 on MSVC.  To be portable
   to MSVC through at least version 10.0, A should be an integer
   constant, as MSVC does not support expressions such as 1 << 3.
   To be portable to Sun C 5.11, do not align auto variables to
   anything stricter than their default alignment.

   The following C23 requirements are not supported here:

     - If A is zero, alignas has no effect.
     - alignas can be used multiple times; the strictest one wins.
     - alignas (TYPE) is equivalent to alignas (alignof (TYPE)).

   */
# if !defined __STDC_VERSION__ || __STDC_VERSION__ < 201112
#  if defined __cplusplus && (201103 <= __cplusplus || defined _MSC_VER)
#   define _Alignas(a) alignas (a)
#  elif (!defined __attribute__ \
         && ((defined __APPLE__ && defined __MACH__ \
              ? 4 < __GNUC__ + (1 <= __GNUC_MINOR__) \
              : __GNUC__ && !defined __ibmxl__) \
             || (4 <= __clang_major__) \
             || (__ia64 && (61200 <= __HP_cc || 61200 <= __HP_aCC)) \
             || __ICC || 0x590 <= __SUNPRO_C || 0x0600 <= __xlC__))
#   define _Alignas(a) __attribute__ ((__aligned__ (a)))
#  elif 1300 <= _MSC_VER
#   define _Alignas(a) __declspec (align (a))
#  endif
# endif
# if !HAVE_STDALIGN_H
#  if ((defined _Alignas \
        && !(defined __cplusplus \
             && (201103 <= __cplusplus || defined _MSC_VER))) \
       || (defined __STDC_VERSION__ && 201112 <= __STDC_VERSION__))
#   define alignas _Alignas
#  endif
# endif

# if _GL_STDALIGN_NEEDS_STDDEF
#  include <stddef.h>
# endif
#endif

#ifndef HAVE_C_BOOL
# if !defined __cplusplus && !defined __bool_true_false_are_defined
#  if HAVE_STDBOOL_H
#   include <stdbool.h>
#  else
#   if defined __SUNPRO_C
#    error "<stdbool.h> is not usable with this configuration. To make it usable, add -D_STDC_C99= to $CC."
#   else
#    error "<stdbool.h> does not exist on this platform. Use gnulib module 'stdbool-c99' instead of gnulib module 'stdbool'."
#   endif
#  endif
# endif
# if !true
#  define true (!false)
# endif
#endif

#if (!defined HAVE_C_STATIC_ASSERT && !defined assert \
     && (!defined __cplusplus \
         || (__cpp_static_assert < 201411 \
             && __GNUG__ < 6 && __clang_major__ < 6)))
 #include <assert.h>
 #undef/**/assert
 #ifdef __sgi
  #undef/**/__ASSERT_H__
 #endif
 /* Solaris 11.4 <assert.h> defines static_assert as a macro with 2 arguments.
    We need it also to be invocable with a single argument.  */
 #if defined __sun && (__STDC_VERSION__ - 0 >= 201112L) && !defined __cplusplus
  #undef/**/static_assert
  #define static_assert _Static_assert
 #endif
#endif
