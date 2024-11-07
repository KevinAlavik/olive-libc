// include/stddef.h
// Copyright (C) 2024 Kevin Alavik and contributors
// This file is part of olivelibc, which is licensed under the GNU General
// Public License v3.0. You may not use this file except in compliance with the
// License. You can obtain a copy of the License at
// <https://www.gnu.org/licenses/gpl-3.0.html>

#ifndef __OLIVE_STDDEF_H

#ifdef __cplusplus
#define NULL 0L
#else
#define NULL ((void *)0)
#endif

#define __NEED_ptrdiff_t
#define __NEED_size_t
#define __NEED_wchar_t
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#define __NEED_max_align_t
#endif

#include "bits/alltypes.h"

#if __GNUC__ > 3
#define offsetof(type, member) __builtin_offsetof(type, member)
#else
#define offsetof(type, member)                                                 \
  ((size_t)((char *)&(((type *)0)->member) - (char *)0))
#endif

#define __OLIVE_STDDEF_H

#endif // __OLIVE_STDDEF_H
