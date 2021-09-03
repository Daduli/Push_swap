/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <tle@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:24:20 by tle               #+#    #+#             */
/*   Updated: 2021/09/02 00:50:03 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/utils.h"
#include "includes/moves.h"
#include "includes/ft_parse.h"
#include "includes/divide.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	
	stack_a = ft_dlst_init();
	stack_b = ft_dlst_init();
	if (ac == 1)
		ft_error("Error\n");
	ft_parse(stack_a, ac, av);

	setup_groups(stack_a, stack_b);

	//add recursive here to split stack_b until it has groups of 3
	//if (stack_b->length > 3)
	//	create_group(stack_b);
	
	//printf("\n");
	//temp = stack_b->first;
	//while (temp)
	//{
	//	printf("stack_b : %d\n", temp->group);
	//	temp = temp->next;
	//}
}