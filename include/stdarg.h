// include/stdarg.h
// Copyright (C) 2024 Kevin Alavik and contributors
// This file is part of olivelibc, which is licensed under the GNU General Public License v3.0.
// You may not use this file except in compliance with the License.
// You can obtain a copy of the License at <https://www.gnu.org/licenses/gpl-3.0.html>

#ifndef __OLIVE_STDARG_H
#define __OLIVE_STDARG_H

#ifdef __cplusplus
#extern "C" {
#endif // __cplusplus

#define va_start(v,l)   __builtin_va_start(v,l)
#define va_end(v)       __builtin_va_end(v)
#define va_arg(v,l)     __builtin_va_arg(v,l)
#define va_copy(d,s)    __builtin_va_copy(d,s)

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __OLIVE_STDARG_H
