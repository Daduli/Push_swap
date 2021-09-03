/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <tle@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:18:38 by tle               #+#    #+#             */
/*   Updated: 2021/09/03 17:49:01 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# include "../Libft/libft.h"

void	ft_error(char *str);
void	tab_free(char **temp);
int	get_limit(t_stack *stack_a, int pivot);


#endif