/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <tle@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:16:04 by tle               #+#    #+#             */
/*   Updated: 2021/09/03 18:00:01 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"
#include "../includes/moves.h"

int	*sort_tab(int *tab, t_stack *stack_a)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	
	while (i < stack_a->length - 1)
	{
		j = 0;
		while (j < stack_a->length - i - 1)
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

int	get_pivot(t_stack *stack_a, int group)
{
	t_node	*temp;
	int	*tab;
	int	i;
	int	median;

	i = 0;
	temp = stack_a->first;
	tab = (int *)malloc(sizeof(int) * stack_a->length);
	while (temp)
	{
		if (temp->group == group)
		{
			tab[i] = temp->number;
			i++;
		}
		temp = temp->next;
	}
	tab = sort_tab(tab, stack_a);
	median = tab[((stack_a->length + 1) / 2) - 1];
	free(tab);
	return (median);
}

int	get_limit(t_stack *stack_a, int pivot)
{
	int	max;
	t_node *temp;

	max = 0;
	temp = stack_a->first;
	while (temp)
	{
		if (temp->number <= pivot)
			max++;
		temp = temp->next;
	}
	return (max);
}

void	cut_a(t_stack *stack_a, t_stack *stack_b)
{
	int	pivot;
	int	max;

	pivot = get_pivot(stack_a, 0);
	max = get_limit(stack_a, pivot);
	while (max > 0)
	{
		if (stack_a->first->number <= pivot)
		{
			stack_a->first->group = 1;
			push(stack_a, stack_b);
			ft_putstr("pb\n");
			max--;
		}
		else
		{
			rotate(stack_a);
			ft_putstr("ra\n");
		}
	}
}

void	divide(t_stack *stack_a, int group)
{
	t_node	*temp;
	int	pivot;
	int	i;

	i = 0;
	pivot = get_pivot(stack_a, 0);
	temp = stack_a->first;
	while (stack_a->first)
	{
		if (stack_a->first->number <= pivot)
			stack_a->first->group = group;
		stack_a->first = stack_a->first->next;
	}
	stack_a->first = temp;
}
