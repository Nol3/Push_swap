/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:34:18 by alcarden          #+#    #+#             */
/*   Updated: 2024/02/10 20:05:09 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_stack	ft_sb(t_stack **stack_b)
{
	t_stack	*tmp;

	if (stack_b && (*stack_b)->next)
	{
		tmp = (*stack_b)->next;
		(*stack_b)->next = tmp->next;
		tmp->next = *stack_b;
		*stack_b = tmp;
		ft_printf("sb\n");
	}
	return (**stack_b);
}

t_stack	ft_sa(t_stack **stack_a)
{
	t_stack	*tmp;

	if (stack_a && (*stack_a)->next)
	{
		tmp = (*stack_a)->next;
		(*stack_a)->next = tmp->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
		ft_printf("sa\n");
	}
	return (**stack_a);
}

t_stacks	ft_ss(t_stacks *stacks)
{
	ft_sa(&stacks->stack_a);
	ft_sb(&stacks->stack_b);
	ft_printf("ss\n");
	return (*stacks);
}

t_stacks	ft_pa(t_stacks *stacks)
{
	t_stack	*tmp;

	if (stacks->stack_b)
	{
		tmp = stacks->stack_b;
		stacks->stack_b = (stacks->stack_b)->next;
		tmp->next = stacks->stack_a;
		stacks->stack_a = tmp;
		ft_printf("pa\n");
	}
	return (*stacks);
}

t_stacks	ft_pb(t_stacks *stacks)
{
	t_stack	*tmp;

	if (stacks->stack_a)
	{
		tmp = stacks->stack_a;
		stacks->stack_a = (stacks->stack_a)->next;
		tmp->next = stacks->stack_b;
		stacks->stack_b = tmp;
		ft_printf("pb\n");
		stacks->stack_b->is_empty = false;
	}
	return (*stacks);
}
