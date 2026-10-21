*This project has been created as part of the 42 curriculum by psaudell.*

# ft_printf

## Description

My own version of the libc `printf()` function. The goal is to learn how
variadic functions work in C (`va_start`, `va_arg`, `va_end`).

```c
int	ft_printf(const char *str, ...);
```

It prints the format string and returns the number of characters printed,
like the original `printf()`.

### Handled conversions

| Conversion | Description |
|---|---|
| `%c` | Prints a single character |
| `%s` | Prints a string (`(null)` if the pointer is `NULL`) |
| `%p` | Prints a pointer address in hexadecimal (`(nil)` if `NULL`) |
| `%d` | Prints a decimal (base 10) number |
| `%i` | Prints an integer in base 10 |
| `%u` | Prints an unsigned decimal (base 10) number |
| `%x` | Prints a number in hexadecimal lowercase |
| `%X` | Prints a number in hexadecimal uppercase |
| `%%` | Prints a percent sign |

## Algorithm and data structure

No data structure is needed: the characters are written one by one with
`write()`, without any buffer.

- `ft_printf` reads the format string character by character.
  A normal character is printed directly. When it finds a `%`, it sends the
  next character to `ft_conversion`.
- `ft_conversion` checks which conversion it is, takes the right argument
  with `va_arg` and calls the matching print function.
- Every print function returns the number of characters it wrote, so
  `ft_printf` can add them up and return the total.

| File | Role |
|---|---|
| `ft_printf.c` | Main loop on the format string |
| `ft_conversion.c` | Chooses the function to call for each conversion |
| `ft_putchar_pf.c` | Prints a character |
| `ft_putstr_pf.c` | Prints a string |
| `ft_putnbr_pf.c` | Prints a signed number (`%d`, `%i`) |
| `ft_base_pf.c` | Prints an unsigned number in any base (`%u`, `%x`, `%X`, `%p`) |

`ft_base_pf` takes an `unsigned long` so the same function works for
`unsigned int` and for the 64-bit addresses of `%p`.

## Instructions

### Compilation

Run `make` at the root of the repository. It first compiles the `libft`
with its own Makefile, then creates the static library `libftprintf.a`
(which also contains the libft functions).

- `make` : builds `libftprintf.a`
- `make clean` : removes the object files
- `make fclean` : removes the object files and the libraries
- `make re` : rebuilds everything

### Usage

Include `ft_printf.h` in your code, then link the library when compiling:

```
cc main.c -I. -L. -lftprintf -o my_program
./my_program
```

## Resources

- `man 3 printf` and `man 3 stdarg`
- some youtube video
- github repositories
- peers at 42

AI was used to explain some concepts, to write the Makefile and a test
program comparing `ft_printf` with `printf`, not to write the ft_printf code.
AI helped me to create the readme.
