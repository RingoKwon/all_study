*This project has been created as part of the 42 curriculum by ringowkon.*

## Description
**Libft** is the first project in the 42 curriculum. The goal of this project is to create a C library that reimplements a set of standard C library functions (libc) as well as additional utility functions. This library will be used throughout the 42 curriculum in future projects, providing a deep understanding of memory management, string manipulation, and linked lists.

## Instructions

### Compilation
To create the library file `libft.a`, run the following command in the root of the repository:

```bash
make
```

This command compiles all source files and archives them into the static library `libft.a`.

### Other Makefile Rules
- `make clean`: Removes object files (`.o`).
- `make fclean`: Removes object files and the `libft.a` library.
- `make re`: Recompiles the library from scratch.

### Usage
To use this library in your projects:
1. Include the header file in your C source files:
   ```c
   #include "libft.h"
   ```
2. Compile your project by linking the library:
   ```bash
   cc main.c -L. -lft -o my_program
   ```
   - `-L.`: Tells the compiler to look for libraries in the current directory (`.`).
   - `-lft`: Links against the library named `libft`. The compiler follows a naming convention where it searches for a file named `lib` + `<name>` + `.a` (e.g., `libft.a`).

## Resources

### References
- **Man pages**: The primary reference for the behavior of standard C functions (e.g., `man strlen`, `man atoi`).
- **C Standard Library documentation**: For understanding standard types and macros.

### AI Usage
Artificial Intelligence (GitHub Copilot) was used in this project for the following tasks:
- **Code Review**: Analyzing implementations of `ft_striteri`, `ft_lstadd_back`, and `ft_lstmap` to identify logic errors and potential segmentation faults.
- **Debugging**: Fixing memory leaks in `ft_lstmap` and correcting pointer logic in linked list functions.
- **Refactoring**: Assisting in refactoring code to comply with the 42 Norminette (e.g., splitting functions to meet the 25-line limit).

## Library Description

The library covers a wide range of functionality, categorized as follows:

### 1. Libc Functions
Reimplementations of standard C library functions with the `ft_` prefix:
- **Character checks**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- **String manipulation**: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strncmp`, `ft_strdup`
- **Memory manipulation**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- **Conversion**: `ft_atoi`, `ft_toupper`, `ft_tolower`

### 2. Additional Functions
Useful utility functions not found in the standard library:
- `ft_substr`: Creates a substring from a string.
- `ft_strjoin`: Concatenates two strings.
- `ft_strtrim`: Trims characters from the beginning and end of a string.
- `ft_split`: Splits a string into an array of strings based on a delimiter.
- `ft_itoa`: Converts an integer to a string.
- `ft_strmapi`: Applies a function to each character of a string (creating a new string).
- `ft_striteri`: Applies a function to each character of a string (modifying in place).
- **File Descriptor Output**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 3. Bonus Functions (Linked Lists)
Functions to manipulate singly linked lists (`t_list`):
- `ft_lstnew`: Creates a new list node.
- `ft_lstadd_front`: Adds a node to the beginning of the list.
- `ft_lstsize`: Counts the number of nodes in the list.
- `ft_lstlast`: Returns the last node of the list.
- `ft_lstadd_back`: Adds a node to the end of the list.
- `ft_lstdelone`: Deletes a single node's content.
- `ft_lstclear`: Deletes and frees a node and all its successors.
- `ft_lstiter`: Iterates the list and applies a function to the content of each node.
- `ft_lstmap`: Iterates the list and applies a function to create a new list.
