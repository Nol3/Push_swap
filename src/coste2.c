/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coste2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:03:56 by alcarden          #+#    #+#             */
/*   Updated: 2024/02/13 18:12:23 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	coste_rb(t_stack *stack)
{
	return (stack->size); // Coste por mover cada elemento
}

int	coste_rr(t_stack *stack_a, t_stack *stack_b)
{
	return (stack_a->size + stack_b->size); // Coste por mover ambos stacks
}

int	coste_rra(t_stack *stack)
{
	return (stack->size); // Coste por mover cada elemento
}

int	coste_rrb(t_stack *stack)
{
	return (stack->size); // Coste por mover cada elemento
}

int	coste_rrr(t_stack *stack_a, t_stack *stack_b)
{
	return (stack_a->size + stack_b->size); // Coste por mover ambos stacks
}