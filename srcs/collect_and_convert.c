/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collect_and_convert.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <tle@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:07:20 by tle               #+#    #+#             */
/*   Updated: 2021/08/28 00:07:01 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"
#include <stdio.h>

int		tab_size(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == '\0' || str[i + 1] == c))
			count++;
		i++;
	}
	return (count);
}

char	*copy_arg(char *av)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *)malloc(sizeof(char *) * ft_strlen(av));
	if (!temp)
		return (NULL);
	while (av[i])
	{
		temp[i] = av[i];
		i++;
	}
	temp[i] = 0;
	return (temp);
}

char	**parse_arg(int *ac, char **av)
{
	char **tab;
	int	size;
	int	i;
	int	j;

	i = 0;
	j = 0;
	size = 0;
	if (*ac == 2)
	{
		*ac = tab_size(av[1], ' ') + 1;
		tab = ft_split(av[1], ' ');
	}
	else
	{	
		tab = (char **)malloc(sizeof(char **) * (*ac));
		if (!tab)
			return (NULL);
		while (av[++j])
		{
			tab[i] = copy_arg(av[j]);
			i++;
		}
		tab[i] = NULL;
	}
	return (tab);
}

void	digit_check(char *tab)
{
	int	i;

	i = 0;
	if (tab[i] == '-')
		i++;
	while (tab[i])
	{
		if (!(ft_isdigit(tab[i])))
			ft_error("Error\n");
		i++;
	}
}

long	*convert_arg(char **temp, int ac)
{
	int	i;
	long	*tab;

	i = 0;
	tab = (long *)malloc(sizeof(long) * (ac - 1));
	if (!tab)
		return (NULL);
	while (temp[i])
	{
		tab[i] = ft_atoi(temp[i]);
		i++;
	}
	tab_free(temp);
	return (tab);
}