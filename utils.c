/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmontiel <montielarce9@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:04:13 by nmontiel          #+#    #+#             */
/*   Updated: 2023/11/08 14:08:00 by nmontiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack_a)
{
	while (stack_a->next != NULL)
	{
		if (stack_a->num > stack_a->next->num)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

int	stack_size(t_stack *stack)
{
	int	nodes;

	nodes = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->next;
		nodes++;
	}
	return (nodes);
}

void	free_stack(t_stack **stack)
{
	t_stack	*next;
	t_stack	*current;

	current = *stack;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*stack = NULL;
}

void	set_index(t_stack **stack)
{
	t_stack	*current;
	t_stack	*cmp;

	current = *stack;
	while (current)
	{
		cmp = *stack;
		current->index = 1;
		while (cmp)
		{
			if (cmp->num < current->num)
				current->index++;
			cmp = cmp->next;
		}
		current = current->next;
	}
}

int	my_abs(int num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}
