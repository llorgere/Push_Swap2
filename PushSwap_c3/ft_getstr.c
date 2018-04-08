#include "libftpusw.h"

char	*ft_getstr(int *error)
{
	char	*tab;
	int		i;
	//int		error;

	//error = 0;
	i = 0;
	//ft_emptybuffer();
//	printf("entree getstr\n");
	//while ((ft_getchar()) != '\n');
	if (!(tab = malloc(sizeof(char) * 4)))
		return (NULL);
	/*while (i < 4// && tab[i - 1] != '\n'//)
	{
				//printf("i est [%d] tab[i] est [%c] et tab[i-1] est [%c]\n", i, tab[i], tab[i - 1]);
		tab[i] = ft_getchar();
		//printf("tab[i] est %c", tab[i]);
		if(tab[i] == '\n')
		{
			i++;
			break ;
		}
		i++;
	}*/
//	printf("getstr | i est [%d]\n", i);
	//printf("tab[0] est [%c]\n", tab[0]);
	while (/*i < 4 && */((tab[i] = ft_getchar()) != '\n')/* && tab[i - 1] != '\n'*/)
	{
				//printf("i est [%d] tab[i] est [%c] et tab[i-1] est [%c]\n", i, tab[i], tab[i - 1]);
		//tab[i] = ft_getchar();
//		printf("tab[i] est [%c] et i est %d\n", tab[i], i);
		if(i >= 3)
		{
			i++;
			*error = 1;
			free(tab);
//			printf("returnurn error\n");
			ft_emptybuffer();
			return (NULL);
			//break ;
		}
		i++;
	}
		//printf(" fin i est [%d] tab[i] est [%c] et tab[i-1] est [%c]\n", i, tab[i], tab[i - 1]);
	//i++;
	while (i < 4)
	{
		tab[i] = '\0';
		i++;
	}
//	printf(" getstr | test 1 getstr [%s]\n", tab);
	if (tab[0] == '\n' || tab[0] == '\0')
	{
		free(tab);
		return (NULL);
	}
	else
	{
//		printf("test 2 getstr [%s]\n", tab);
		//ft_emptybuffer();
		return (tab);
	}
}
