/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <tle@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:23:39 by tle               #+#    #+#             */
/*   Updated: 2021/08/27 15:12:49 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

void	swap(t_stack *p_stack)
{
	int	temp;

	if (p_stack->length > 1)
	{
		temp = p_stack->first->number;
		p_stack->first->number = p_stack->first->next->number;
		p_stack->first->next->number = temp;
	}
}

void	push(t_stack *src, t_stack *dst)
{
	t_node	*temp;

	if (src->length > 0)
	{
		temp = src->first;
		if (src->length == 1)
			src->first = NULL;
		else
		{
			src->first = temp->next;
			src->first->prev = NULL;
		}
		temp->next = dst->first;
		temp->prev = NULL;
		dst->first = temp;
		src->length--;
		dst->length++;
	}
}

void	rotate(t_stack *p_stack)
{
	t_node	*temp;

	if (p_stack->length > 1)
	{
		temp = p_stack->first;
		p_stack->first = temp->next;
		p_stack->first->prev = NULL;
		temp->next = NULL;
		temp->prev = p_stack->last;
		p_stack->last->next = temp;
		p_stack->last = temp;
	}
}

void	reverse_rotate(t_stack *p_stack)
{
	t_node	*temp;

	if (p_stack->length > 1)
	{
		temp = p_stack->last;
		p_stack->last = temp->prev;
		p_stack->last->next = NULL;
		temp->prev = NULL;
		temp->next = p_stack->first;
		p_stack->first->prev = temp;
		p_stack->first = temp;
	}
}