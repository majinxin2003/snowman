/* Check that config.h is #included before system headers
    (this works only for glibc, but that should be enough).  */
#if defined(__GLIBC__) && !defined(__FreeBSD_kernel__) && !defined(__CONFIG_H__)
#  error config.h must be #included before system headers
#endif
#define __CONFIG_H__ 1

/* Name of host specific core header file to include in elf.c. */
/* #undef CORE_HEADER */

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
/* #undef ENABLE_NLS */

/* Define to 1 if you have the <alloca.h> header file. */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the declaration of `basename', and to 0 if you
   don't. */
#define HAVE_DECL_BASENAME 1

/* Define to 1 if you have the declaration of `ffs', and to 0 if you don't. */
#define HAVE_DECL_FFS 1

/* Define to 1 if you have the declaration of `free', and to 0 if you don't.
   */
#define HAVE_DECL_FREE 1

/* Define to 1 if you have the declaration of `fseeko', and to 0 if you don't.
   */
#define HAVE_DECL_FSEEKO 1

/* Define to 1 if you have the declaration of `fseeko64', and to 0 if you
   don't. */
/* #undef HAVE_DECL_FSEEKO64 */

/* Define to 1 if you have the declaration of `ftello', and to 0 if you don't.
   */
#define HAVE_DECL_FTELLO 1

/* Define to 1 if you have the declaration of `ftello64', and to 0 if you
   don't. */
/* #undef HAVE_DECL_FTELLO64 */

/* Define to 1 if you have the declaration of `getenv', and to 0 if you don't.
   */
#define HAVE_DECL_GETENV 1

/* Define to 1 if you have the declaration of `malloc', and to 0 if you don't.
   */
#define HAVE_DECL_MALLOC 1

/* Define to 1 if you have the declaration of `realloc', and to 0 if you
   don't. */
#define HAVE_DECL_REALLOC 1

/* Define to 1 if you have the declaration of `snprintf', and to 0 if you
   don't. */
#define HAVE_DECL_SNPRINTF 1

/* Define to 1 if you have the declaration of `stpcpy', and to 0 if you don't.
   */
#define HAVE_DECL_STPCPY 1

/* Define to 1 if you have the declaration of `strnlen', and to 0 if you
   don't. */
#define HAVE_DECL_STRNLEN 1

/* Define to 1 if you have the declaration of `strstr', and to 0 if you don't.
   */
#define HAVE_DECL_STRSTR 1

/* Define to 1 if you have the declaration of `vsnprintf', and to 0 if you
   don't. */
#define HAVE_DECL_VSNPRINTF 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `fcntl' function. */
/* #undef HAVE_FCNTL */

/* Define to 1 if you have the <fcntl.h> header file. */
/* #undef HAVE_FCNTL_H */

/* Define to 1 if you have the `fdopen' function. */
#define HAVE_FDOPEN 1

/* Define to 1 if you have the `fileno' function. */
#define HAVE_FILENO 1

/* Define to 1 if you have the `fopen64' function. */
/* #undef HAVE_FOPEN64 */

/* Define to 1 if you have the `fseeko' function. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the `fseeko64' function. */
/* #undef HAVE_FSEEKO64 */

/* Define to 1 if you have the `ftello' function. */
#define HAVE_FTELLO 1

/* Define to 1 if you have the `ftello64' function. */
/* #undef HAVE_FTELLO64 */

/* Define to 1 if you have the `getgid' function. */
#define HAVE_GETGID 1

/* Define to 1 if you have the `getpagesize' function. */
/* #undef HAVE_GETPAGESIZE */

/* Define to 1 if you have the `getrlimit' function. */
/* #undef HAVE_GETRLIMIT */

/* Define to 1 if you have the `getuid' function. */
#define HAVE_GETUID 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if <sys/procfs.h> has lwpstatus_t. */
/* #undef HAVE_LWPSTATUS_T */

/* Define if <sys/procfs.h> has lwpstatus_t.pr_context. */
/* #undef HAVE_LWPSTATUS_T_PR_CONTEXT */

/* Define if <sys/procfs.h> has lwpstatus_t.pr_fpreg. */
#undef HAVE_LWPSTATUS_T_PR_FPREG 

/* Define if <sys/procfs.h> has lwpstatus_t.pr_reg. */
/* #undef HAVE_LWPSTATUS_T_PR_REG */

/* Define if <sys/procfs.h> has lwpxstatus_t. */
/* #undef HAVE_LWPXSTATUS_T */

/* Define to 1 if you have the `madvise' function. */
#define HAVE_MADVISE 1

/* Define to 1 if you have the <memory.h> header file. */
/* #undef HAVE_MEMORY_H */

/* Define to 1 if you have a working `mmap' system call. */
#define HAVE_MMAP 1

/* Define to 1 if you have the `mprotect' function. */
#define HAVE_MPROTECT 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define if <sys/procfs.h> has prpsinfo32_t. */
/* #undef HAVE_PRPSINFO32_T */

/* Define if <sys/procfs.h> has prpsinfo32_t.pr_pid. */
/* #undef HAVE_PRPSINFO32_T_PR_PID */

/* Define if <sys/procfs.h> has prpsinfo_t. */
/* #undef HAVE_PRPSINFO_T */

/* Define if <sys/procfs.h> has prpsinfo_t.pr_pid. */
/* #undef HAVE_PRPSINFO_T_PR_PID */

/* Define if <sys/procfs.h> has prstatus32_t. */
/* #undef HAVE_PRSTATUS32_T */

/* Define if <sys/procfs.h> has prstatus32_t.pr_who. */
/* #undef HAVE_PRSTATUS32_T_PR_WHO */

/* Define if <sys/procfs.h> has prstatus_t. */
/* #undef HAVE_PRSTATUS_T */

/* Define if <sys/procfs.h> has prstatus_t.pr_who. */
/* #undef HAVE_PRSTATUS_T_PR_WHO */

/* Define if <sys/procfs.h> has psinfo32_t. */
/* #undef HAVE_PSINFO32_T */

/* Define if <sys/procfs.h> has psinfo32_t.pr_pid. */
/* #undef HAVE_PSINFO32_T_PR_PID */

/* Define if <sys/procfs.h> has psinfo_t. */
/* #undef HAVE_PSINFO_T */

/* Define if <sys/procfs.h> has psinfo_t.pr_pid. */
/* #undef HAVE_PSINFO_T_PR_PID */

/* Define if <sys/procfs.h> has pstatus32_t. */
/* #undef HAVE_PSTATUS32_T */

/* Define if <sys/procfs.h> has pstatus_t. */
/* #undef HAVE_PSTATUS_T */

/* Define if <sys/procfs.h> has pxstatus_t. */
/* #undef HAVE_PXSTATUS_T */

/* Define to 1 if you have the `setitimer' function. */
/* #undef HAVE_SETITIMER */

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
/* #undef HAVE_STDLIB_H */

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strtoull' function. */
#define HAVE_STRTOULL 1

/* Define if struct core_dumpx has member c_impl */
#undef HAVE_ST_C_IMPL 

/* Define to 1 if you have the `sysconf' function. */
/* #undef HAVE_SYSCONF */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/file.h> header file. */
/* #undef HAVE_SYS_FILE_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
/* #undef HAVE_SYS_PARAM_H */

/* Define to 1 if you have the <sys/procfs.h> header file. */
/* #undef HAVE_SYS_PROCFS_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
/* #undef HAVE_SYS_RESOURCE_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
/* #undef HAVE_SYS_STAT_H */

/* Define to 1 if you have the <sys/time.h> header file. */
/* #undef HAVE_SYS_TIME_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <time.h> header file. */
/* #undef HAVE_TIME_H */

/* Define to 1 if you have the <unistd.h> header file. */
/* #undef HAVE_UNISTD_H */

/* Define to 1 if you have the <wchar.h> header file. */
/* #undef HAVE_WCHAR_H */

/* Define if <sys/procfs.h> has win32_pstatus_t. */
/* #undef HAVE_WIN32_PSTATUS_T */

/* Define to 1 if you have the <windows.h> header file. */
/* #undef HAVE_WINDOWS_H */

/* Define to 1 if you have the <zlib.h> header file. */
#define HAVE_ZLIB_H 1

/* Name of package */
#define PACKAGE libbfd

/* Define to the address where bug reports for this package should be sent. */
/* #undef PACKAGE_BUGREPORT */

/* Define to the full name of this package. */
/* #undef PACKAGE_NAME */

/* Define to the full name and version of this package. */
/* #undef PACKAGE_STRING */

/* Define to the one symbol short name of this package. */
/* #undef PACKAGE_TARNAME */

/* Define to the home page for this package. */
/* #undef PACKAGE_URL */

/* Define to the version of this package. */
/* #undef PACKAGE_VERSION */

/* The size of `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Define to 1 if you have the ANSI C header files. */
/* #undef STDC_HEADERS */

/* Define if you can safely include both <string.h> and <strings.h>. */
/* #undef STRING_WITH_STRINGS */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
/* #undef TIME_WITH_SYS_TIME */

/* Name of host specific header file to include in trad-core.c. */
/* #undef TRAD_HEADER */

/* Use b modifier when opening binary files? */
/* #undef USE_BINARY_FOPEN */

/* Define if we should use leading underscore on 64 bit mingw targets */
/* #undef USE_MINGW64_LEADING_UNDERSCORES */

/* Use mmap if it's available? */
/* #undef USE_MMAP */

/* Define if we should default to creating read-only plt entries */
/* #undef USE_SECUREPLT */

/* Define if we may generate symbols with ELF's STT_COMMON type */
/* #undef USE_STT_COMMON */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
/* #undef _ALL_SOURCE */
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
/* #undef _GNU_SOURCE */
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
/* #undef _POSIX_PTHREAD_SEMANTICS */
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
/* #undef _TANDEM_SOURCE */
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
/* #undef __EXTENSIONS__ */
#endif


/* Version number of package */
#define VERSION 2.25.1

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */
