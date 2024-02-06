/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:41:27 by alcarden          #+#    #+#             */
/*   Updated: 2024/02/06 19:44:23 by alcarden         ###   ########.fr       */
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
}

void	ft_init_stacks(t_stack **stack)
{
	*stack = NULL;
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	if (argc < 2)
	{
		ft_putstr_fd("Numero de argumentos invalido\n", 2);
		return (0);
	}
	ft_init_stacks(&stack_a);
	ft_parse_args(argc, argv, &stack_a);

	//Aquí iría el algoritmo de ordenación (calculo de costes).


	//Imprimir por terminal el antes y el resultado.
	ft_printf("Antes, stack_a: ");
	ft_print_stack(stack_a);

	ft_sa(&stack_a);

	ft_printf("Después, stack_a: ");
	ft_print_stack(stack_a);

	return (0);
}
