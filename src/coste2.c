/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coste2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:03:56 by alcarden          #+#    #+#             */
/*   Updated: 2024/02/10 18:04:30 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	coste_rb(t_stack *stack)
{
	return (stack_size(stack)); // Coste por mover cada elemento
}

int	coste_rr(t_stack *stack_a, t_stack *stack_b)
{
	return (stack_size(stack_a) + stack_size(stack_b));
		// Coste por mover ambos stacks
}

int	coste_rra(t_stack *stack)
{
	return (stack_size(stack)); // Coste por mover cada elemento
}

int	coste_rrb(t_stack *stack)
{
	return (stack_size(stack)); // Coste por mover cada elemento
}

int	coste_rrr(t_stack *stack_a, t_stack *stack_b)
{
	return (stack_size(stack_a) + stack_size(stack_b));
		// Coste por mover ambos stacks
}