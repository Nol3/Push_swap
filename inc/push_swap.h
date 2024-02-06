/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:02:18 by alcarden          #+#    #+#             */
/*   Updated: 2024/02/06 19:36:59 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../include/inc/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	long int		content;
	int				act_pos;
	int				targ_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}					t_stack;

typedef struct s_stacks
{
	t_stack			*stack_a;
	t_stack			*stack_b;
	int				sizea;
	int				sizeb;
}					t_stacks;

//main.c
void		ft_print_stack(t_stack *stack);
void		ft_add_to_stack(t_stack **stack, int new_value);
void		ft_init_stacks(t_stack **stack);

//moves.c
t_stack		ft_sb(t_stack **stack_b);
t_stack		ft_sa(t_stack **stack_a);
t_stacks	ft_ss(t_stacks *stacks);
t_stacks	ft_pa(t_stacks *stacks);
t_stacks	ft_pb(t_stacks *stacks);

//moves2.c
t_stack		ft_ra(t_stack **stack_a);
t_stack		ft_rb(t_stack **stack_b);
t_stacks	ft_rr(t_stacks *stacks);
t_stack		ft_rra(t_stack **stack_a);
t_stack		ft_rrb(t_stack **stack_b);

//moves3.c
t_stacks	ft_rrr(t_stacks *stacks);

//parse.c
void		ft_stack_add_back(t_stack **lst, t_stack *new);
void		ft_parse_args(int argc, char **argv, t_stack **stack_a);

//push_swap.c

#endif