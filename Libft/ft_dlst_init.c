/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <tle@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:52:13 by tle               #+#    #+#             */
/*   Updated: 2021/08/20 11:13:25 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_dlst_init(void)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	new->length = 0;
	new->first = NULL;
	new->last = NULL;
	return (new);
}