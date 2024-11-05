// Entry point for test app for olivelibc
// Copyright (C) 2024 Kevin Alavik and contributors
// This file is part of olivelibc, which is licensed under the GNU General Public License v3.0.
// You may not use this file except in compliance with the License.
// You can obtain a copy of the License at <https://www.gnu.org/licenses/gpl-3.0.html>

#include <stdio.h>
#include <test.h>

int main() {
	if(_olive_test(69420) != 69420) {
		fprintf(stderr, "ERROR: Failed to test olive-libc, didnt get '69420' back from test!\n");
		return 1;
	}

	fprintf(stdout, "SUCCESS: Olive Libc is working!\n");
	return 0;
}
