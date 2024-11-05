// include/stdbool.h
// Copyright (C) 2024 Kevin Alavik and contributors
// This file is part of olivelibc, which is licensed under the GNU General Public License v3.0.
// You may not use this file except in compliance with the License.
// You can obtain a copy of the License at <https://www.gnu.org/licenses/gpl-3.0.html>

#ifndef __OLIVE_STDBOOL_H
#define __OLIVE_STDBOOL_H

#ifndef __cplusplus

#define true 1 
#define false 0
#define bool _Bool

#endif // __cplusplus

#define __bool_true_false_are_defined 1

#endif // __OLIVE_STDBOOL_H
