/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:47:21 by alcarden          #+#    #+#             */
/*   Updated: 2024/02/06 19:19:09 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_stacks	ft_rrr(t_stacks *stacks)
{
	ft_rra(&stacks->stack_a);
	ft_rrb(&stacks->stack_b);
	ft_printf("rrr\n");
	return (*stacks);
}
