/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collect_and_convert.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <tle@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:08:43 by tle               #+#    #+#             */
/*   Updated: 2021/08/27 23:36:34 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLECT_AND_CONVERT_H
# define COLLECT_AND_CONVERT_H

#include "utils.h"

char	**parse_arg(int *ac, char **av);
void	digit_check(char *tab);
long	*convert_arg(char **temp, int ac);

#endif