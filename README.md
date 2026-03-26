# 📚 Libft

> My custom C library — a core project from 1337 School.

---

## 📖 About

**Libft** is the first project at 1337(42network). The goal is to re-implement a set of standard C library functions from scratch, and add some extra utility functions that will be useful throughout the cursus.

---

## 📂 Structure

```
libft/
├── ft_*.c       # Source files
├── libft.h      # Header file
└── Makefile     # Build rules
```

---

## ⚙️ Compilation

```bash
make        # Compile the library → libft.a
make clean  # Remove object files
make fclean # Remove object files + libft.a
make re     # fclean + make
```

To use the library in your project:

```bash
gcc main.c libft.a -o my_program (name a.out)
```

---

## 🔧 Functions

### Libc Functions (Part 1)

| Function | Description |
|---|---|
| `ft_isalpha` | Check if character is alphabetic |
| `ft_isdigit` | Check if character is a digit |
| `ft_isalnum` | Check if character is alphanumeric |
| `ft_isascii` | Check if character is ASCII |
| `ft_isprint` | Check if character is printable |
| `ft_strlen` | Return length of a string |
| `ft_memset` | Fill memory with a constant byte |
| `ft_bzero` | Zero out memory |
| `ft_memcpy` | Copy memory area |
| `ft_memmove` | Move memory area (handles overlap) |
| `ft_strlcpy` | Copy string with size limit |
| `ft_strlcat` | Concatenate string with size limit |
| `ft_toupper` | Convert char to uppercase |
| `ft_tolower` | Convert char to lowercase |
| `ft_strchr` | Locate first occurrence of char in string |
| `ft_strrchr` | Locate last occurrence of char in string |
| `ft_strncmp` | Compare two strings (up to n bytes) |
| `ft_memchr` | Locate byte in memory |
| `ft_memcmp` | Compare memory areas |
| `ft_strnstr` | Locate substring in string |
| `ft_atoi` | Convert string to integer |
| `ft_calloc` | Allocate and zero-initialize memory |
| `ft_strdup` | Duplicate a string |

### Additional Functions (Part 2)

| Function | Description |
|---|---|
| `ft_substr` | Extract a substring |
| `ft_strjoin` | Join two strings |
| `ft_strtrim` | Trim characters from both ends |
| `ft_split` | Split string by delimiter |
| `ft_itoa` | Convert integer to string |
| `ft_strmapi` | Apply function to each char (new string) |
| `ft_striteri` | Apply function to each char (in-place) |
| `ft_putchar_fd` | Write a char to a file descriptor |
| `ft_putstr_fd` | Write a string to a file descriptor |
| `ft_putendl_fd` | Write a string + newline to fd |
| `ft_putnbr_fd` | Write a number to a file descriptor |

### Bonus — Linked Lists

| Function | Description |
|---|---|
| `ft_lstnew` | Create a new list node |
| `ft_lstadd_front` | Add node at the front |
| `ft_lstsize` | Count nodes in a list |
| `ft_lstlast` | Return last node |
| `ft_lstadd_back` | Add node at the back |
| `ft_lstdelone` | Delete a node |
| `ft_lstclear` | Delete and free entire list |
| `ft_lstiter` | Apply function to each node |
| `ft_lstmap` | Map function over list → new list |

---

## 📋 Norme

This project follows the **42 Norm**:
- Max 25 lines per function
- Max 5 functions per file
- No `for`, `do...while`, `switch`
- No more than 5 variables per function

---

## 👤 Author

ataoufik@student.1337.ma

---

*1337 School (42 NETWORK)— libft project*
