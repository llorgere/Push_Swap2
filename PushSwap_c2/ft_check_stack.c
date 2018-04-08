#include "libftpusw.h"

int		*ft_check_stack(int ac, char **av, int *error)
{
	int				i;
	int				*tab;
	long long int	tmp;
//	int				doublon;

//	doublon = 0;
	tmp = 0;
	i = 0;
	if (ac < 2)
		return (NULL);
	if(!(tab = (int*)malloc(sizeof(int) * (ac - 1))))
		return (NULL);
	while (i < ac - 1)
	{
	//	printf("test ft_check_stack str est [%s]\n", av[i + 1]);
		tmp = ft_atoips(av[i + 1], error);
		// faire une fct qui verifie que y a que des nombres dans tab[i]
		//printf("test atoi %d\n", tab[i]);
	//	printf("tmp est [%lld]\n", tmp);
		if (tmp > INT_MAX || tmp < INT_MIN || *error == 1 ||
		(i > 0 && ((ft_check_stack_doublon(tab, tmp, i - 1, error)) == 1)))
		{
			free(tab);
			*error = 1;
			return (NULL);
		}
		tab[i] = (int)tmp;
		i++;
	}
	return (tab);
}
