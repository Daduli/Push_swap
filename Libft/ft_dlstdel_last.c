/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdel_last.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <tle@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 11:35:31 by tle               #+#    #+#             */
/*   Updated: 2021/08/20 11:38:50 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstdel_last(t_stack *p_stack)
{
	t_node	*temp;

	temp = p_stack->last;
	p_stack->last = temp->prev;
	if (p_stack->last)
		p_stack->last->next = NULL;
	else
		p_stack->first = NULL;
	free(temp);
	p_stack->length--;
}