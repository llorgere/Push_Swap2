#include "libftpusw.h"

int		main(int ac, char **av)
{
	int		*tab;
	int		i;
	char	*ins;
	char	*tins;
	int		error;
	char	**ins_split;
	int		nb_ins;

	nb_ins = 0;
	error = 0;
//	tins = NULL;
	i = 0;
	tab = ft_check_stack(ac, av, &error);
	if (tab == NULL)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	while (i < ac - 1)
	{
		ft_putnbr(tab[i]);
		printf("\n");
		i++;
	}
	//ins = ft_getstr();
	//exit();
	ins = ft_getstr(&error);
	printf("main | test getstr 1 [%s]\n", ins);
	printf("ins est [%s] et error = [%d]\n", ins, error);
	if(error > 0 || !ins)
	{
		free(tab);
		write(2, "Error\n", 6);
		return (0);
	}
	ft_emptybuffer();
	//while ((ft_getchar()) != '\n');
	if (!ins)
	{
		free(tab);
		return (0);
	}
	while ((tins = ft_getstr(&error))/* != NULL*/)
	{
		printf("test 1 getstr tins est [%s] et ins est [%s]\n", tins, ins);
		ft_emptybuffer();
		printf("CLear du buff\n");
		ins = ft_strjoinpf(ins, tins);
		nb_ins++;
		//ft_emptybuffer();
		//while ((ft_getchar()) != '\n');
	//	printf("test 2 getstr tins est [%s] et ins est [%s]\n", tins, ins);
	}
	if(error != 0)
	{
		free(tab);
		free(ins);
		write(2, "Error\n", 6);
		return (0);
	}
	ins_split = ft_strsplit(ins, ' ');
	//	printf("test getstr fin tins est [%s] et ins est [%s]\n", tins, ins);
	i = 0;
	printf("debut test split ins est [%s]\n", ins);
	while (i <= nb_ins)
	{
		printf("[%s]\n", ins_split[i]);
		i++;
	}
	printf("fin test split\n");
	// mtnt on free tt
	i = 0;
	while (i <= nb_ins)
	{
//		printf("[%s]\n", ins_split[i])i;
		free(ins_split[i]);
		i++;
	}
	free(ins_split);
	free(tab);//effacer la pile
	if (ins)
	{
		printf("ins est [%s] et error = [%d]\n", ins, error);
		free(ins);
		}
	return (0);
}
