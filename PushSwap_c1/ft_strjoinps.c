/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 13:49:27 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/17 16:50:18 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpusw.h"

char	*ft_strjoinpf(char *s1, char *s2)
{
	int		lens1;
	int		lens2;
	int		i;
	char	*tab;

	if (!s1 && !s2)
		return (NULL);
	i = 0;
//	printf("test de strjoin 1\n");
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	//printf("test de strjoin 2 lens1 est %d lens2 est %d\n", lens1, lens2);
	/*if(!(tab = (char *)malloc(sizeof(*tab) * (lens1 + lens2 + 1))))
		return (NULL);*/
	if(!(tab = (char *)malloc(sizeof(*tab) * (lens1 + lens2 + 2))))
		return (NULL);
//	printf("test de strjoin 3\n");
	if (!tab)
		return (0);
//	printf("test de strjoin 4\n");
	while (i < lens1)
	{
		tab[i] = s1[i];
		i++;
	}
//	printf("test de strjoin 5\n");
	tab[i] = ' ';
	i++;
	while (i < lens1 + lens2 + 1)
	{
		tab[i] = s2[i - lens1 - 1];
		i++;
	}
//	printf("test de strjoin 6\n");
	if (s1)
		free(s1);
//	printf("test de strjoin 7\n");
	free(s2);
//	printf("test de strjoin 8\n");
	tab[i] = '\0';
//	printf("test de strjoin 9\n");
	return (tab);
}
