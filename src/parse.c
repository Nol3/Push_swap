/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:41:09 by alcarden          #+#    #+#             */
/*   Updated: 2024/02/04 20:54:02 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/push_swap.h"

void	ft_parse_args(int argc, char **argv, t_stack *stack_a)
{
	int	i;
	int	j;
	int	num;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) || argv[i][j] == '-')
			{
				num = ft_atoi(&argv[i][j]);
				ft_lstadd_back(&stack_a, ft_lstnew(num));
				while (ft_isdigit(argv[i][j]) || argv[i][j] == '-')
					j++;
			}
			else
				j++;
		}
		i++;
	}
}