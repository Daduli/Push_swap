/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <tle@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:50:49 by tle               #+#    #+#             */
/*   Updated: 2021/08/24 13:43:53 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_dlstadd_back(t_stack *stack, int number)
{
	t_node	*new;

	new = ft_dlstnew(number);
	if (stack->last == NULL)
	{
		stack->last = new;
		stack->first = new;
	}
	else
	{
		stack->last->next = new;
		new->prev = stack->last;
		stack->last = new;
	}
	stack->length++;
	return (stack);
}