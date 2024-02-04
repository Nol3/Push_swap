/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:47:24 by alcarden          #+#    #+#             */
/*   Updated: 2024/02/04 20:47:52 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/push_swap.h"

void	ft_ra(t_stack **stack_a)
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
}

void	ft_rb(t_stack **stack_b)
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
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_ra(stack_a);
	ft_rb(stack_b);
}

void	ft_rra(t_stack **stack_a)
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
}

void	ft_rrb(t_stack **stack_b)
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
}