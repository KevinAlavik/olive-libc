# Olive Libc

> [!NOTE]
> Olive isnt ready for usage as of 2024-11-05

Olive is an alternative standard library for the C programming language.

## Installation

To install libc to the default location (/usr/local/) simply run:
```sh
sudo make install
```

To specify a custom install prefix simply do:
```sh
INSTALL_PREFIX=/some/dir sudo make install
```

## Usage

For now we dont supply our own GCC toolchain but this is on our todo (e.g. `x86_64-linux-olive-gcc`) so for now simply do:
```sh
gcc -L/usr/local/lib -lolivelibc ...
```

boom welcome to olive libc :^)

## License

The actual code for Olive is licensed under GPL v3.0 but with our exception you can freely use olive-libc under any license.
