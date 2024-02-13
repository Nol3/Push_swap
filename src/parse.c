/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:41:09 by alcarden          #+#    #+#             */
/*   Updated: 2024/02/13 18:13:20 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_stack	*ft_new(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_stack_add_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (!*lst)
	{
		*lst = new;
		(*lst)->size = 1; // Actualizar size si la pila estaba vacía
	}
	else
	{
		last = *lst;
		while (last->next)
			last = last->next;
		last->next = new;
		(*lst)->size++; // Incrementar size
	}
}

void	ft_parse_args(int argc, char **argv, t_stacks *stacks)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) || argv[i][j] == '-')
			{
				tmp = ft_atoi(&argv[i][j]);
				ft_stack_add_back(&stacks->stack_a, ft_new(tmp));
				while (ft_isdigit(argv[i][j]) || argv[i][j] == '-')
					j++;
			}
			else
				j++;
		}
		i++;
	}
}
