# Makefile for olivelibc
# Copyright (C) 2024 Kevin Alavik and contributors
# This file is part of olivelibc, which is licensed under the GNU General Public License v3.0.
# You may not use this file except in compliance with the License.
# You can obtain a copy of the License at <https://www.gnu.org/licenses/gpl-3.0.html>

INSTALL_PREFIX ?= /usr/local
INCLUDE_DIR = $(INSTALL_PREFIX)/include
LIB_DIR = $(INSTALL_PREFIX)/lib

CC = gcc
AR = ar
CFLAGS = -Wall -Werror -fPIC -Iinclude
ARFLAGS = rcs

SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)

TEST_DIR = test
BUILD_DIR = bin/
TEST_SRC = $(wildcard $(TEST_DIR)/*.c)
TEST_OBJ = $(TEST_SRC:$(TEST_DIR)/%.c=$(BUILD_DIR)/%.o)

.PHONY: all clean install test

all: libolivelibc.a

libolivelibc.a: $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

install: all
	mkdir -p $(INCLUDE_DIR)
	mkdir -p $(LIB_DIR)
	cp -r include/* $(INCLUDE_DIR)/
	cp libolivelibc.a $(LIB_DIR)/

test: $(TEST_OBJ)
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/test $(TEST_OBJ) -L$(LIB_DIR) -lolivelibc

$(BUILD_DIR)/%.o: $(TEST_DIR)/%.c
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o libolivelibc.a $(BUILD_DIR)/*.o $(BUILD_DIR)/test_runner

