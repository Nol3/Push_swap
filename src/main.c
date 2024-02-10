/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:41:27 by alcarden          #+#    #+#             */
/*   Updated: 2024/02/10 19:56:51 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_print_stack(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp)
	{
		ft_printf("%d ", tmp->content);
		tmp = tmp->next;
	}
	ft_printf("\n");
}

void	ft_add_to_stack(t_stack **stack, int new_value)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	new_node->content = new_value;
	new_node->next = *stack;
	*stack = new_node;
	(*stack)->is_empty = false;
}

void	ft_init_stacks(t_stacks *stacks)
{
	stacks->stack_a = NULL;
	stacks->stack_b = NULL;
	stacks->stack_a->is_empty = true;
	stacks->stack_b->is_empty = true;
}

bool	is_empty(t_stack *stack)
{
	return (stack->is_empty);
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;
	int			coste_total;

	if (argc < 2)
	{
		ft_putstr_fd("Numero de argumentos invalido\n", 2);
		return (0);
	}
	ft_init_stacks(&stacks);
	ft_parse_args(argc, argv, &stacks);
	coste_total = 0;
	// Aquí iría el algoritmo de ordenación (calculo de costes).
	while (!is_empty(stacks.stack_a))
	{
		if (stack_top(stacks.stack_a) < stack_top(stacks.stack_b))
		{
			ft_pb(&stacks);
			coste_total += coste_pb();
		}
		else
		{
			ft_ra(&stacks.stack_a);
			coste_total += coste_ra(stacks.stack_a);
		}
	}
	while (!is_empty(stacks.stack_b))
	{
		ft_pa(&stacks);
		coste_total += coste_pa();
	}
	// Imprimir por terminal el antes.
	ft_printf("Antes, stack_A: ");
	ft_print_stack(stacks.stack_a);
	ft_printf("Antes, stack_B: ");
	ft_print_stack(stacks.stack_b);
	// Imprimir por terminal el después.
	ft_printf("Después, stack_A: ");
	ft_print_stack(stacks.stack_a);
	ft_printf("Después, stack_B: ");
	ft_print_stack(stacks.stack_b);
	ft_printf("Coste total: %d\n", ft_coste_total);
	return (0);
}
