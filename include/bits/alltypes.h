// include/bits/alltypes.h
// Copyright (C) 2024 Kevin Alavik and contributors
// This file is part of olivelibc, which is licensed under the GNU General
// Public License v3.0. You may not use this file except in compliance with the
// License. You can obtain a copy of the License at
// <https://www.gnu.org/licenses/gpl-3.0.html>

#ifndef _OLIVE_BITS_ALLTYPES_H
#define _OLIVE_BITS_ALLTYPES_H

#if defined(__NEED_size_t) && !defined(__DEFINED_size_t)
typedef unsigned size_t;
#define __DEFINED_size_t
#endif

#if defined(__NEED_ssize_t) && !defined(__DEFINED_ssize_t)
typedef int ssize_t;
#define __DEFINED_ssize_t
#endif

#if defined(__NEED_ptrdiff_t) && !defined(__DEFINED_ptrdiff_t)
typedef long ptrdiff_t;
#define __DEFINED_ptrdiff_t
#endif

#if __GNUC__ >= 3
#if defined(__NEED_va_list) && !defined(__DEFINED_va_list)
typedef __builtin_va_list va_list;
#define __DEFINED_va_list
#endif
#else
#if defined(__NEED_va_list) && !defined(__DEFINED_va_list)
typedef struct __va_list *va_list;
#define __DEFINED_va_list
#endif
#endif

#ifndef __cplusplus
#ifdef __WCHAR_TYPE__
#if defined(__NEED_wchar_t) && !defined(__DEFINED_wchar_t)
typedef __WCHAR_TYPE__ wchar_t;
#define __DEFINED_wchar_t
#endif
#else
#if defined(__NEED_wchar_t) && !defined(__DEFINED_wchar_t)
typedef long wchar_t;
#define __DEFINED_wchar_t
#endif
#endif
#endif

#if defined(__NEED_wint_t) && !defined(__DEFINED_wint_t)
typedef long wint_t;
#define __DEFINED_wint_t
#endif

#if defined(__NEED_time_t) && !defined(__DEFINED_time_t)
typedef long time_t;
#define __DEFINED_time_t
#endif

#if defined(__NEED_int8_t) && !defined(__DEFINED_int8_t)
typedef char int8_t;
#define __DEFINED_int8_t
#endif

#if defined(__NEED_uint8_t) && !defined(__DEFINED_uint8_t)
typedef unsigned char uint8_t;
#define __DEFINED_uint8_t
#endif

#if defined(__NEED_int16_t) && !defined(__DEFINED_int16_t)
typedef short int16_t;
#define __DEFINED_int16_t
#endif

#if defined(__NEED_uint16_t) && !defined(__DEFINED_uint16_t)
typedef unsigned short uint16_t;
#define __DEFINED_uint16_t
#endif

#if defined(__NEED_int32_t) && !defined(__DEFINED_int32_t)
typedef int int32_t;
#define __DEFINED_int32_t
#endif

#if defined(__NEED_uint32_t) && !defined(__DEFINED_uint32_t)
typedef unsigned int uint32_t;
#define __DEFINED_uint32_t
#endif

#if defined(__NEED_int64_t) && !defined(__DEFINED_int64_t)
typedef long long int64_t;
#define __DEFINED_int64_t
#endif

#if defined(__NEED_uint64_t) && !defined(__DEFINED_uint64_t)
typedef unsigned long long uint64_t;
#define __DEFINED_uint64_t
#endif

#if defined(__NEED_float_t) && !defined(__DEFINED_float_t)
typedef long double float_t;
#define __DEFINED_float_t
#endif

#if defined(__NEED_double_t) && !defined(__DEFINED_double_t)
typedef long double double_t;
#define __DEFINED_double_t
#endif

#if defined(__NEED_pid_t) && !defined(__DEFINED_pid_t)
typedef int pid_t;
#define __DEFINED_pid_t
#endif

#if defined(__NEED_uid_t) && !defined(__DEFINED_uid_t)
typedef int uid_t;
#define __DEFINED_uid_t
#endif

#if defined(__NEED_mode_t) && !defined(__DEFINED_mode_t)
typedef unsigned int mode_t;
#define __DEFINED_mode_t
#endif

#if defined(__NEED_socklen_t) && !defined(__DEFINED_socklen_t)
typedef unsigned int socklen_t;
#define __DEFINED_socklen_t
#endif

#if defined(__NEED_sa_family_t) && !defined(__DEFINED_sa_family_t)
typedef unsigned short sa_family_t;
#define __DEFINED_sa_family_t
#endif

#if defined(__NEED_in_addr_t) && !defined(__DEFINED_in_addr_t)
typedef unsigned int in_addr_t;
#define __DEFINED_in_addr_t
#endif

#if defined(__NEED_struct_timeval) && !defined(__DEFINED_struct_timeval)
struct timeval {
  time_t tv_sec;
  int tv_usec;
};
#define __DEFINED_struct_timeval
#endif

#if defined(__NEED_struct_iovec) && !defined(__DEFINED_struct_iovec)
struct iovec {
  void *iov_base;
  size_t iov_len;
};
#define __DEFINED_struct_iovec
#endif

#endif /* _OLIVE_BITS_ALLTYPES_H */
