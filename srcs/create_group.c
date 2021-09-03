/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_group.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <tle@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 14:40:34 by tle               #+#    #+#             */
/*   Updated: 2021/09/03 18:03:48 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"
#include "../includes/moves.h"

int	*sort_tab2(int *tab, int count)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	
	while (i < count - 1)
	{
		j = 0;
		while (j < count - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

int	get_pivot2(t_stack *stack_a, int group, int count)
{
	t_node	*temp;
	int	*tab;
	int	i;
	int	median;

	i = 0;
	temp = stack_a->first;
	tab = (int *)malloc(sizeof(int) * count);
	while (temp)
	{
		if (temp->group == group)
		{
			tab[i] = temp->number;
			i++;
		}
		temp = temp->next;
	}
	tab = sort_tab2(tab, count);
	median = tab[((count + 1) / 2) - 1];
	free(tab);
	return (median);
}

void	create_group(t_stack *p_stack, int group, int count)
{
	t_node	*temp;
	int	pivot;

	pivot = get_pivot2(p_stack, group, count);
	temp = p_stack->first;
	while (p_stack->first)
	{
		if (p_stack->first->group == group && p_stack->first->number > pivot)
			p_stack->first->group = 0;
		p_stack->first = p_stack->first->next;
	}
	p_stack->first = temp;
}
