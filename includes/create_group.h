/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_group.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <tle@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:14:21 by tle               #+#    #+#             */
/*   Updated: 2021/09/03 17:54:21 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CREATE_GROUP_H
# define CREATE_GROUP_H

# include "utils.h"

void	create_group(t_stack *p_stack, int group, int count);
void	push_group(t_stack *stack_a, t_stack *stack_b, int group, int count);

void	setup_groups(t_stack *stack_a, t_stack *stack_b);

#endif