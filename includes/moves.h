/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <tle@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 11:40:30 by tle               #+#    #+#             */
/*   Updated: 2021/08/20 11:41:19 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVES_H
# define MOVES_H

# include "../includes/utils.h"

void	swap(t_stack *p_stack);
void	push(t_stack *src, t_stack *dst);
void	rotate(t_stack *p_stack);
void	reverse_rotate(t_stack *p_stack);

#endif