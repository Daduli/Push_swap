/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup_groups.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <tle@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 22:39:01 by tle               #+#    #+#             */
/*   Updated: 2021/09/03 17:59:33 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"
#include "../includes/create_group.h"
#include "../includes/divide.h"

int	check_group(t_stack *p_stack, int group)
{
	t_node *temp;
	int	count;

	temp = p_stack->first;
	count = 0;
	while (temp)
	{
		if (temp->group == group)
			count++;
		temp = temp->next;
	}
	//printf("count : %d\n", count);
	return (count);
}

void	setup_groups(t_stack *stack_a, t_stack *stack_b)
{
	//t_node *temp;
	//temp = stack_a->first;
	//while (temp)
	//{
	//	printf("stack_a : %d\n", temp->number);
	//	temp = temp->next;
	//}
	//printf("\n");
	int	count;
	int	group;

	group = 2;
	cut_a(stack_a, stack_b); //cut_a good

	//printf("cut_a\n");
	//temp = stack_a->first;
	//while (temp)
	//{
	//	printf("stack_a : %d\n", temp->number);
	//	temp = temp->next;
	//}
	//printf("\n");
	//temp = stack_b->first;
	//while (temp)
	//{
	//	printf("stack_b : %d\n", temp->number);
	//	temp = temp->next;
	//}

	//divide(stack_a, group);

	//printf("\n");
	//printf("divide\n");
	//temp = stack_a->first;
	//while (temp)
	//{
	//	printf("stack_a : %d\n", temp->group);
	//	temp = temp->next;
	//}
	//temp = stack_b->first;
	//while (temp)
	//{
	//	printf("stack_b : %d\n", temp->group);
	//	temp = temp->next;
	//}
	//printf("\n");

	//while (check_group(stack_a, 2) > 3)
	//{
	//printf("\n\n");
	count = check_group(stack_a, 2);
	while (stack_a->length > 3)
	{
		divide(stack_a, group); //divide good
		count = check_group(stack_a, group);
		while (count > 3)
		{
			create_group(stack_a, group, count);
			count = check_group(stack_a, group);
			//printf("count : %d\n", count);
		}
		push_group(stack_a, stack_b, group, count);
		//temp = stack_a->first;
		//while (temp)
		//{
		//	if (temp->group == group)
		//		printf("stack_a : %d\n", temp->number);
		//	temp = temp->next;
		//}
		group++;
	}
	//temp = stack_a->first;
	//while (temp)
	//{
	//	if (temp->group == 2)
	//		printf("stack_a : %d\n", temp->number);
	//	temp = temp->next;
	//}
	//}
	//printf("\n");
	//check_group(stack_a, 2);
	//create_group(stack_a, 2);
	//check_group(stack_a, 2);
	//printf("\ncreate_group\n");
	//temp = stack_b->first;
	//while (temp)
	//{
	//	printf("stack_b : %d\n", temp->group);
	//	temp = temp->next;
	//}
}