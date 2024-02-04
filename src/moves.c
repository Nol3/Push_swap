/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:34:18 by alcarden          #+#    #+#             */
/*   Updated: 2024/02/04 19:44:27 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/push_swap.h"

int	is_empty(t_stack *stack)
{
	return (stack->top == -1);
}

int	is_full(t_stack *stack)
{
	return (stack->top == MAX_STACK_SIZE - 1);
}

void	push(t_stack *stack, int value)
{
	if (isFull(stack))
	{
		printf("Error: la pila está llena.\n");
		return ;
	}
	stack->data[++stack->top] = value;
}

int	pop(t_stack *stack)
{
	if (is_empty(stack))
	{
		printf("Error: la pila está vacía.\n");
		return (-1);
	}
	return (stack->data[stack->top--]);
}

void	sa(t_stack *stack)
{
	int	temp;

	if (stack->top >= 1)
	{
		temp = stack->data[stack->top];
		stack->data[stack->top] = stack->data[stack->top - 1];
		stack->data[stack->top - 1] = temp;
	}
}
