/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide.h                                        	:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <tle@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 16:26:07 by tle               #+#    #+#             */
/*   Updated: 2021/08/30 17:26:18 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIVIDE_H
# define DIVIDE_H

# include "../includes/utils.h"

void	cut_a(t_stack *stack_a, t_stack *stack_b);
void	divide(t_stack *stack_a, int group);

#endif