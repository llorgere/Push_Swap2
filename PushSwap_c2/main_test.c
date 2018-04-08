#include "libftpusw.h"

int		main()
{
	char	tab[10] = "";
	char	tmp[10] = "";
	int		i;
	char	a;
	char	d;
	char	c;
	char	b;
	/*
	   a = ft_getchar();
	   b = ft_getchar();
	   c = ft_getchar();
	   d = ft_getchar();
	   */	i = 0;
	//while((ft_getchar()) != '\n');
	while((tab[i] = ft_getchar()) != '\n') 
	{
		//tab[i] = ft_getchar();
		//printf("tab[i] [%c]\n", tab[i]);
		i++;
	}
	printf("tab [%s] et i est [%d]\n", tab, i);
	ft_emptybuffer();
	i = 0;
	while((tmp[i] = ft_getchar()) != '\n') 
	{
		//tab[i] = ft_getchar();
		//printf("tmp[i] [%c]\n", tmp[i]);
		i++;
	}
	printf("tmp [%s] et i est [%d]\n", tmp, i);
	//	printf()
	//	printf("[%c;%c;%c;%c]", a, b, c, d);
	return (0);
}
