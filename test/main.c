// test/main.c
// Copyright (C) 2024 Kevin Alavik and contributors
// This file is part of olivelibc, which is licensed under the GNU General
// Public License v3.0. You may not use this file except in compliance with the
// License. You can obtain a copy of the License at
// <https://www.gnu.org/licenses/gpl-3.0.html>

#include "stdint.h"
#include <iso646.h>
#include <stdbool.h>
#include <stddef.h>

extern int printf(const char *, ...);

int main() {
  if (true and false != 69) {
    printf("Booleans and iso646 work!\n");
  } else {
    printf("Booleans and iso646 dont work!\n");
  }

  if (NULL == 0L) {
    printf("NULL is 0L!\n");
  } else {
    printf("NULL is not 0L!\n");
  }

  printf("Size of int8_t: 0x%X\n", (unsigned int)sizeof(int8_t));
  printf("Size of uint8_t: 0x%X\n", (unsigned int)sizeof(uint8_t));
  printf("Size of int16_t: 0x%X\n", (unsigned int)sizeof(int16_t));
  printf("Size of uint16_t: 0x%X\n", (unsigned int)sizeof(uint16_t));
  printf("Size of int32_t: 0x%X\n", (unsigned int)sizeof(int32_t));
  printf("Size of uint32_t: 0x%X\n", (unsigned int)sizeof(uint32_t));
  printf("Size of int64_t: 0x%X\n", (unsigned int)sizeof(int64_t));
  printf("Size of uint64_t: 0x%X\n", (unsigned int)sizeof(uint64_t));

  return 0;
}
