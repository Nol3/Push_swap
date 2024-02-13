/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:28:52 by alcarden          #+#    #+#             */
/*   Updated: 2024/02/13 18:11:49 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	coste_sa(void)
{
	return (1); // Coste constante
}

int	coste_sb(void)
{
	return (1); // Coste constante
}

int	coste_pa(void)
{
	return (2); // Coste por mover un elemento y actualizar el puntero
}

int	coste_pb(void)
{
	return (2); // Coste por mover un elemento y actualizar el puntero
}

int	coste_ra(t_stack *stack)
{
	return stack->size; // Coste por mover cada elemento
}
