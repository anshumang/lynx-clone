/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if bfd functions use bfd_byte arguments. */
/* #undef BFD_BYTE */

/* Define to 1 if the emulator should be built */
/* #undef BUILD_EMULATOR */

/* Define if dill should attempt to DCG */
/* #undef EMULATION_ONLY */

/* Define to 1 if you have the <dis-asm.h> header file. */
/* #undef HAVE_DIS_ASM_H */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define if you have the `print_insn_arm' function. */
/* #undef HAVE_PRINT_INSN_ARM */

/* Define if you have the `print_insn_big_powerpc' function. */
/* #undef HAVE_PRINT_INSN_BIG_POWERPC */

/* Define if you have the `print_insn_i386' function. */
/* #undef HAVE_PRINT_INSN_I386 */

/* Define if you have the `print_insn_ia64' function. */
/* #undef HAVE_PRINT_INSN_IA64 */

/* Define if you have the `print_insn_little_arm' function. */
/* #undef HAVE_PRINT_INSN_LITTLE_ARM */

/* Define if you have the `print_insn_sparc' function. */
/* #undef HAVE_PRINT_INSN_SPARC */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define if the host processor is ARM */
/* #undef HOST_ARM */

/* Define if the host processor is an ia64 */
/* #undef HOST_IA64 */

/* Define if the host processor is a powerpc */
/* #undef HOST_POWERPC */

/* Define if the host processor is a powerpc64 */
/* #undef HOST_POWERPC64 */

/* Define if the host processor is a sparc */
/* #undef HOST_SPARC */

/* Define if the host processor is a sparcv9 */
/* #undef HOST_SPARCV9 */

/* Define if the host processor is an x86 */
/* #undef HOST_X86 */

/* Define if the host processor is an x86_64 */
#define HOST_X86_64 1

/* Define if INIT_DISASSEMBLE_INFO takes three arguments instead of two */
/* #undef INIT_DISASSEMBLE_INFO_THREE_ARG */

/* Define if integrating with kernel plugins */
/* #undef KPLUGINS_INTEGRATION */

/* Define if compiling for linux kernel */
/* #undef LINUX_KERNEL_MODULE */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define if you want more than just native target */
/* #undef MULTI_TARGET */

/* Define for the host architecture type */
#define NATIVE_ARCH "x86_64"

/* Define if there is no disassembler */
#define NO_DISASSEMBLER 1

/* Define if we should not use inlined procedures from BFD */
/* #undef NO_INLINED_BFD_PROCS */

/* Name of package */
#define PACKAGE "dill"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* The number of bytes in type long */
#define SIZEOF_LONG 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define if the membar instruction should be used to sync Icache and Dcache
   */
/* #undef USE_MEMBAR */

/* Define this is mmap should be used instead of malloc() for code memory */
#define USE_MMAP_CODE_SEG 1

/* Version number of package */
#define VERSION "1.0"

/* Define if byteorder is bigendian */
/* #undef WORDS_BIGENDIAN */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif