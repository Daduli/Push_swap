/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_group.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <tle@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 18:03:29 by tle               #+#    #+#             */
/*   Updated: 2021/09/03 18:35:59 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"
#include "../includes/moves.h"

void	find_path(t_stack *stack_a, int number, int *top, int *bottom)
{
	t_node	*temp;

	top = 0;
	bottom = 0;
	temp = stack_a->first;
	while (temp->number != number)
	{
		temp = temp->next;
		top++;
	}
	temp = stack_a->last;
	while (temp->number != number)
	{
		temp = temp->prev;
		bottom++;
	}
}

int	rotate_group(t_stack *stack_a, int number)
{
	t_node	*temp;
	int	top;
	int	bottom;

	find_path(stack_a, number, &top, &bottom);
	temp = stack_a->first;
	if (top < bottom)
	{
		while (temp->number != number)
		{
			rotate(stack_a);
			ft_putstr("ra\n");
			temp = temp->next;
		}
	}
	else
	{
		while (temp->number != number)
		{
			reverse_rotate(stack_a);
			ft_putstr("rra\n");
			temp = temp->next;
		}
	}
}

void	push_group(t_stack *stack_a, t_stack *stack_b, int group, int max)
{
	t_node	*temp;
	int	count;

	count = max;
	temp = stack_a->first;
	while (count > 0)
	{
		if (temp->group == group)
		{
			rotate_group(stack_a, temp->number);
			push(stack_a, stack_b);
			count--;
			temp = stack_a->first;
		}
		temp = temp->next;
	}
}