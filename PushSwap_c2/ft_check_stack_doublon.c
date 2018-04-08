#include "libftpusw.h"

int		ft_check_stack_doublon(int	*tab, int tmp, int max, int *error)
{
	int		i;

	i = 0;
	while(i <= max)
	{
		if(tab[i] == tmp)
		{
			*error = 1;
			return (1);
		}
		i++;
	}
	return (0);
}
