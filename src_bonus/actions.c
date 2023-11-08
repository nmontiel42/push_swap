/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmontiel <montielarce9@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:13:30 by nmontiel          #+#    #+#             */
/*   Updated: 2023/11/08 17:13:42 by nmontiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	swap2(t_stack *stack)
{
	t_stack	*tmp;

	if (stack_size(stack) > 1)
	{
		tmp = stack;
		stack = stack->next;
		tmp->next = stack->next;
		stack->next = tmp;
	}
}

void	make_sa_new(t_stack **stack_a)
{
	swap2(*stack_a);
}

void	make_sb_new(t_stack **stack_b)
{
	swap2(*stack_b);
}

void	make_ss_new(t_stack **stack_a, t_stack **stack_b)
{
	swap2(*stack_a);
	swap2(*stack_b);
}
