/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdel_first.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <tle@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 10:50:08 by tle               #+#    #+#             */
/*   Updated: 2021/08/20 11:42:25 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstdel_first(t_stack *p_stack)
{
	t_node	*temp;

	temp = p_stack->first;
	p_stack->first = temp->next;
	if (p_stack->first)
		p_stack->first->prev = NULL;
	else
		p_stack->last = NULL;
	free(temp);
	p_stack->length--;
}