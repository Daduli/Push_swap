/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <tle@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:51:22 by tle               #+#    #+#             */
/*   Updated: 2021/08/30 17:46:35 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"
#include "../includes/collect_and_convert.h"

void	int_check(long *tab, int ac)
{
	(void)tab;
	int	i;
	int	j;

	i = 0;
	while (i < ac - 1)
	{
		if (tab[i] > 2147483647 || tab[i] < -2147483648)
			ft_error("Error\n");
		i++;
	}
	j = 0;
	while (j < ac - 1)
	{
		i = 0;
		while (i < ac - 1)
		{
			if (tab[j] == tab[i] && j != i)
				ft_error("Error\n");
			i++;
		}
		j++;
	}
}

void	create_list(t_stack *stack_a, int ac, long *tab)
{
	int	i;

	i = 0;
	while (i < ac - 1)
	{
		stack_a = ft_dlstadd_back(stack_a, tab[i]);
		i++;
	}
}

int	order_check(long *tab, int ac)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac - 1)
	{
		j = i;
		while (j < ac - 1)
		{
			if (tab[i] > tab[j] && i != j)
				return (1);
			j++;
		}
		i++;
	}
	exit(EXIT_SUCCESS);
}

int	*ft_parse(t_stack *stack_a, int ac, char **av)
{	
	char	**temp;
	long	*tab;
	int		i;
	
	temp = parse_arg(&ac, av);
	i = 0;
	while (temp[i])
	{
		digit_check(temp[i]);
		i++;
	}
	tab = convert_arg(temp, ac);
	int_check(tab, ac);
	order_check(tab, ac);
	create_list(stack_a, ac, tab);
	return ((int *)tab);
}