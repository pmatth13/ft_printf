*This project has been created as part of the 42 curriculum by psaudell.*

# libft

## Description

My own C library. It recodes some functions of the libc and adds a few
other useful ones. It will be reused in the next 42 projects.

## Library content

All functions are prototyped in `libft.h` and start with the `ft_` prefix.

### Part 1 - Libc functions

Same prototypes and behaviour as the originals (see their `man` page).

| Function | Description |
|---|---|
| `ft_isalpha` | Checks if a character is a letter |
| `ft_isdigit` | Checks if a character is a digit (`0`-`9`) |
| `ft_isalnum` | Checks if a character is a letter or a digit |
| `ft_isascii` | Checks if a value is in the ASCII table (0-127) |
| `ft_isprint` | Checks if a character is printable (32-126) |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills a memory area with a byte |
| `ft_bzero` | Sets a memory area to zero |
| `ft_memcpy` | Copies a memory area (no overlap allowed) |
| `ft_memmove` | Copies a memory area, overlap is handled |
| `ft_strlcpy` | Size-bounded string copy, always `\0`-terminated |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_toupper` | Converts a lowercase letter to uppercase |
| `ft_tolower` | Converts an uppercase letter to lowercase |
| `ft_strchr` | Finds the first occurrence of a char in a string |
| `ft_strrchr` | Finds the last occurrence of a char in a string |
| `ft_strncmp` | Compares two strings on at most `n` characters |
| `ft_memchr` | Finds a byte in a memory area |
| `ft_memcmp` | Compares two memory areas |
| `ft_strnstr` | Finds a substring in the first `len` chars of a string |
| `ft_atoi` | Converts a string to an `int` |
| `ft_calloc` | Allocates zero-initialized memory |
| `ft_strdup` | Returns an allocated copy of a string |

### Part 2 - Additional functions

| Function | Description |
|---|---|
| `ft_substr` | Returns an allocated substring of a string |
| `ft_strjoin` | Returns the allocated concatenation of two strings |
| `ft_strtrim` | Removes chars of a set from the start and end of a string |
| `ft_split` | Splits a string into a `NULL`-terminated array of words |
| `ft_itoa` | Converts an `int` to an allocated string |
| `ft_strmapi` | Applies a function to each char, result in a new string |
| `ft_striteri` | Applies a function to each char of a string, in place |
| `ft_putchar_fd` | Writes a character on a file descriptor |
| `ft_putstr_fd` | Writes a string on a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline on a file descriptor |
| `ft_putnbr_fd` | Writes an integer on a file descriptor |

### Part 3 - Linked list

Functions that manipulate a singly linked list of `t_list` nodes:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates a new node with the given content |
| `ft_lstadd_front` | Adds a node at the beginning of a list |
| `ft_lstsize` | Returns the number of nodes in a list |
| `ft_lstlast` | Returns the last node of a list |
| `ft_lstadd_back` | Adds a node at the end of a list |
| `ft_lstdelone` | Frees one node and its content |
| `ft_lstclear` | Frees a node and all the following ones |
| `ft_lstiter` | Applies a function to the content of each node |
| `ft_lstmap` | Creates a new list by applying a function to each content |

## Instructions

### Compilation

Run `make` at the root of the repository. It compiles the sources with
`cc -Wall -Wextra -Werror` and creates the static library `libft.a`.

- `make` : builds `libft.a`
- `make clean` : removes the object files
- `make fclean` : removes the object files and `libft.a`
- `make re` : rebuilds everything

### Usage

Include `libft.h` in your code, then link the library when compiling:

```
cc main.c -I. -L. -lft -o my_program
./my_program
```

## Resources

- man pages of the libc functions
- some youtube video
- github repositories
- peers at 42

AI was used to explain some concepts or test, not to write the code.
AI helped me to create the readme.
