/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:45:09 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/03/21 10:37:00 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	int caracteres[] = {32, 126, 127, 31, 'A', '\t'};
	int i = 0;

	// Calculamos el tamaño del arreglo dividiendo el tamaño total del arreglo
	// // por el tamaño de un elemento del arreglo
	int	tamano = sizeof(caracteres) / sizeof(caracteres[0]);
	// Iteramos sobre los elementos del arreglo utilizando un bucle while
	while (i < tamano)
	{
		if (ft_isprint(caracteres[i]))
		{
			printf("%d es un carácter imprimible.\n", caracteres[i]);
		}
		else
		{
			printf("%d no es un carácter imprimible.\n", caracteres[i]);
		}
		i++;
	}
	return (0);
}*/

/*La función ft_isprint determina si un valor entero dado corresponde a un 
carácter imprimible en la tabla ASCII, siguiendo la convención de la 
función isprint estándar en C.*/
