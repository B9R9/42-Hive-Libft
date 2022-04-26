# 42-Hive-Libft

## Objectives

C programming can be very tedious when one doesn’t have access to those highly useful standard functions. This project makes you to take the time to re-write those functions, understand them, and learn to use them. This library will help you for all your future C projects.
Through this project, we also give you the opportunity to expand the list of functions with your own. Take the time to expand your libft throughout the year.

### Allowed functions
- write
- malloc
- free

### Part 1 - Libc functions
In this first part, you must re-code a set of the libc functions, as defined in their man. Your functions will need to present the same prototype and behaviors as the orig- inals. Your functions’ names must be prefixed by “ft_”. For instance strlen becomes ft_strlen.

list if fucntion:
• memset        • bzero       • memcpy        • memccpy         • memmove         • memchr 
• memcmp        • strlen      • strdup        • strcpy          • strncpy         • strcat 
• strncat       • strlcat     • strchr        • strrchr         • strstr          • strnstr 
• strcmp        • strncmp     • atoi          • isalpha         • isdigit         • isalnum
• isascii       • isprint     • toupper       • tolower

### Part 2 - Additional functions
  - void * ft_memalloc(size_t size);
  - void ft_memdel(void **ap);
  - char * ft_strnew(size_t size);
  - void ft_strdel(char **as);
  - void ft_strclr(char *s);
  - void ft_striter(char *s, void (*f)(char *));
  - void ft_striteri(char *s, void (*f)(unsigned int, char *));
  - char * ft_strmap(char const *s, char (*f)(char));
  - char * ft_strmapi(char const *s, char (*f)(unsigned int, char));
  - int ft_strequ(char const *s1, char const *s2);
  - int ft_strnequ(char const *s1, char const *s2, size_t n);
  - char * ft_strsub(char const *s, unsigned int start, size_t len);
  - char * ft_strjoin(char const *s1, char const *s2);
  - char * ft_strtrim(char const *s);
  - char ** ft_strsplit(char const *s, char c);
  - char * ft_itoa(int n);
  - void ft_putchar(char c);
  - void ft_putstr(char const *s);
  - void ft_putnbr(int n);
