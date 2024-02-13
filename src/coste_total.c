/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coste_total.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarden <alcarden@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:04:52 by alcarden          #+#    #+#             */
/*   Updated: 2024/02/13 18:40:45 by alcarden         ###   ########.fr       */
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
		{               // Actualiza el coste si PA o PB
			coste += 2;
				// Coste adicional por mover un elemento y actualizar el puntero
		}
	}
	return (coste);
}

// int	coste_operacion(int operacion)
// {
// 	if (operacion == SA || operacion == SB)
// 		return (1); // Coste constante para operaciones simples
// 	else if (operacion == PA || operacion == PB)
// 		return (2); // Coste por mover un elemento y actualizar el puntero
// 	else if (operacion == RA || operacion == RB)
// 		return (1); // Coste por mover un elemento
// 	else if (operacion == RR)
// 		return (2); // Coste por mover ambos stacks
// 	else if (operacion == RRA || operacion == RRB)
// 		return (1); // Coste por mover un elemento
// 	else if (operacion == RRR)
// 		return (2); // Coste por mover ambos stacks
// 	else
// 		return (0); // Coste nulo para operaciones desconocidas
// }