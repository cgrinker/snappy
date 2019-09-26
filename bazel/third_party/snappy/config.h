#ifndef THIRD_PARTY_SNAPPY_OPENSOURCE_CMAKE_CONFIG_H_
#define THIRD_PARTY_SNAPPY_OPENSOURCE_CMAKE_CONFIG_H_

/* Define to 1 if the compiler supports __builtin_ctz and friends. */
#ifndef _WIN32
#define HAVE_BUILTIN_CTZ 1
#endif
/* Define to 1 if the compiler supports __builtin_expect. */
#ifndef _WIN32
#define HAVE_BUILTIN_EXPECT 1
#endif
/* Define to 1 if you have the <byteswap.h> header file. */
#ifndef _WIN32
#define HAVE_BYTESWAP_H 1
#endif
/* Define to 1 if you have a definition for mmap() in <sys/mman.h>. */
#ifndef _WIN32
#define HAVE_FUNC_MMAP 1
#endif
/* Define to 1 if you have a definition for sysconf() in <unistd.h>. */
#ifndef _WIN32
#define HAVE_FUNC_SYSCONF 1
#endif
/* Define to 1 to use the gflags package for command-line parsing. */
/* #undef HAVE_GFLAGS */

/* Define to 1 if you have Google Test. */
/* #undef HAVE_GTEST */

/* Define to 1 if you have the `lzo2' library (-llzo2). */
/* #undef HAVE_LIBLZO2 */

/* Define to 1 if you have the `z' library (-lz). */
/* #undef HAVE_LIBZ */

/* Define to 1 if you have the <sys/endian.h> header file. */
/* #undef HAVE_SYS_ENDIAN_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
#ifndef _WIN32
#define HAVE_SYS_MMAN_H 1
#endif
/* Define to 1 if you have the <sys/resource.h> header file. */
#ifndef _WIN32
#define HAVE_SYS_RESOURCE_H 1
#endif
/* Define to 1 if you have the <sys/time.h> header file. */
#ifndef _WIN32
#define HAVE_SYS_TIME_H 1
#endif
/* Define to 1 if you have the <sys/uio.h> header file. */
#ifndef _WIN32
#define HAVE_SYS_UIO_H 1
#endif
/* Define to 1 if you have the <unistd.h> header file. */
#ifndef _WIN32
#define HAVE_UNISTD_H 1
#endif
/* Define to 1 if you have the <windows.h> header file. */
#ifdef _WIN32
#define HAVE_WINDOWS_H
#endif

/* Define to 1 if you target processors with SSSE3+ and have <tmmintrin.h>. */
#ifndef _WIN32
#define SNAPPY_HAVE_SSSE3 0
#endif
/* Define to 1 if you target processors with BMI2+ and have <bmi2intrin.h>. */
#ifndef _WIN32
#define SNAPPY_HAVE_BMI2 0
#endif
/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
#ifdef __arm__
#define SNAPPY_IS_BIG_ENDIAN
#endif

#endif  // THIRD_PARTY_SNAPPY_OPENSOURCE_CMAKE_CONFIG_H_
