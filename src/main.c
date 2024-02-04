/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:41:27 by alcarden          #+#    #+#             */
/*   Updated: 2024/02/04 20:57:15 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (argc < 2)
	{
		ft_putstr_fd("Numero de argumentos invalido\n", 2);
		return (0);
	}
	ft_init_stacks(&stack_a);
	ft_init_stacks(&stack_b);
	ft_parse_args(argc, argv, &stack_a);

	return (0);
}

void	ft_init_stacks(t_stacks *stacks)
{
	stacks->stack_a = NULL;
	stacks->stack_b = NULL;
	stacks->sizea = 0;
	stacks->sizeb = 0;
}
