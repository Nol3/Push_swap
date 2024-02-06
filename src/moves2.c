/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:47:24 by alcarden          #+#    #+#             */
/*   Updated: 2024/02/06 19:18:52 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_stack	ft_ra(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*last;

	if (stack_a && (*stack_a)->next)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		last = *stack_a;
		while (last->next)
			last = last->next;
		last->next = tmp;
		tmp->next = NULL;
	}
	ft_printf("ra\n");
	return (**stack_a);
}

t_stack	ft_rb(t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*last;

	if (stack_b && (*stack_b)->next)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		last = *stack_b;
		while (last->next)
			last = last->next;
		last->next = tmp;
		tmp->next = NULL;
	}
	ft_printf("rb\n");
	return (**stack_b);
}

t_stacks	ft_rr(t_stacks *stacks)
{
	ft_ra(&stacks->stack_a);
	ft_rb(&stacks->stack_b);
	ft_printf("rr\n");
	return (*stacks);
}

t_stack	ft_rra(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*last;

	if (stack_a && (*stack_a)->next)
	{
		last = *stack_a;
		while (last->next->next)
			last = last->next;
		tmp = last->next;
		last->next = NULL;
		tmp->next = *stack_a;
		*stack_a = tmp;
	}
	ft_printf("rra\n");
	return (**stack_a);
}

t_stack	ft_rrb(t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*last;

	if (stack_b && (*stack_b)->next)
	{
		last = *stack_b;
		while (last->next->next)
			last = last->next;
		tmp = last->next;
		last->next = NULL;
		tmp->next = *stack_b;
		*stack_b = tmp;
	}
	ft_printf("rrb\n");
	return (**stack_b);
}
