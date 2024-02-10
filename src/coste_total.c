/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coste_total.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:04:52 by alcarden          #+#    #+#             */
/*   Updated: 2024/02/10 19:35:09 by alcarden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_coste_total(int operaciones[], int longitud)
{
	int	coste;
	int	i;

	i = -1;
	coste = 0;
	while (i++ < longitud)
	{
		coste += coste_operacion(operaciones[i]);
		if (operaciones[i] == PA || operaciones[i] == PB)
		{// Actualiza el coste si PA o PB
			coste += 2;// Coste adicional por mover un elemento y actualizar el puntero
		}
	}
	return (coste);
}
