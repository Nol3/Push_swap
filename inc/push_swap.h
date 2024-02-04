/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:02:18 by alcarden          #+#    #+#             */
/*   Updated: 2024/02/04 19:58:50 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define MAX_STACK_SIZE 500

typedef struct s_stack
{
	int	data[MAX_STACK_SIZE];
	int	top;
}	t_stack;

//main.c

//moves.c
int		is_empty(t_stack *stack);
int		is_full(t_stack *stack);
void	push(t_stack *stack, int value);
int		pop(t_stack *stack);
void	sa(t_stack *stack);

//moves2.c
void	ft_swap(int *a, int *b);

//moves3.c

//parse.c

//push_swap.c

#endif