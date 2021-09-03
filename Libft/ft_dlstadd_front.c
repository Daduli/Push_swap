/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <tle@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:00:54 by tle               #+#    #+#             */
/*   Updated: 2021/08/20 11:13:40 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_dlstadd_front(t_stack *stack, int number)
{
	t_node	*new;

	new = ft_dlstnew(number);
	if (stack->first == NULL)
	{
		stack->first = new;
		stack->last = new;
	}
	else
	{
		stack->first->prev = new;
		new->next = stack->first;
		stack->first = new;
	}
	stack->length++;
	return (stack);
}