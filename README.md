# libft

This repository contains my custom C library, implemented as part of the 42 school "libft" project. It re-creates a selection of standard C library functions, along with some additional utilities for string and memory manipulation.

## Features

The library currently includes implementations of functions such as:

- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- Character case conversion: `ft_toupper`, `ft_tolower`
- String handling: `ft_strlen`, `ft_strdup`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_substr`, `ft_strmapi`, `ft_striteri`
- Memory handling: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- Conversions: `ft_atoi`, `ft_itoa`
- File descriptor output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

All function prototypes are declared in `libft.h`.

## Project Structure

- `*.c` – Source files implementing the library functions
- `libft.h` – Header file containing function prototypes and required includes
- `Makefile` – Build rules to compile the library

## Building

To build the static library `libft.a`, run:

```bash
make
```

To clean object files:

```bash
make clean
```

To remove all built files (including `libft.a`):

```bash
make fclean
```

To recompile from scratch:

```bash
make re
```

## Usage

1. Build the library with `make`.
2. Include the header in your C source files:

```c
#include "libft.h"
```

3. Link the library when compiling your program, for example:

```bash
gcc main.c -L. -lft -o my_program
```

(Adjust compiler and flags according to your environment.)

