echo "void	ft_putchar(char c);\nvoid	ft_swap(int *a, int *b);\nvoid	ft_putstr(char *str);\nint	ft_strlen(char *str);\nint	ft_strcmp(char *s1, char *s2);\n" > libft.a
gcc -Wall -Werror -Wextra -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c libft.a
ar -rc libft.a
ranlib libft.a
