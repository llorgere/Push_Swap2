#ifndef LIBFTPUSW_H
# define LIBFTPUSW_H
# include "./libft/libft.h"
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <inttypes.h>
# include <stddef.h>
# include <sys/types.h>
# include <stdarg.h>
# include <wchar.h>
# include <stdio.h>
# include <limits.h>

typedef struct
{
	int		*array;
	int		top;
	int		size;
}			stack;

int		ft_stack_empty(stack stk);
int		ft_stack_full(stack stk);
stack	ft_stack_init(stack stk, int *tab, int size, int top);
int		ft_check_stack_doublon(int *tab, int tmp, int max, int *error);
long long int		ft_atoips(const char *str, int *error);
void	ft_emptybuffer(void);
int		*ft_check_stack(int ac, char **av, int *error);
char	ft_getchar(void);
char	*ft_getstr(int *error);
char	*ft_strjoinpf(char	*s1, char	*s2);
# endif
