/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 10:55:08 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/05 08:08:32 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
    // Definimos dos bloques de memoria para comparar
    unsigned char block1[] = "Hello, Venezuela!";
    unsigned char block2[] = "Hello, worl!";
	
	// Definimos el número de bytes a comparar
	// Usamos la longitud de block1 para garantizar que se comparen 
	// todos los bytes
    size_t n = ft_strlen((char *)block2);     

	printf("Bloque 1: %s\n", block1);
	printf("Bloque 2: %s\n", block2);
	
	int result = ft_memcmp(block1, block2, n);
	if (result == 0)
	{
		printf("Los bloques de memoria son iguales.\n");
	}
	else if (result < 0)
	{
		printf("El bloque 1 es menor que el bloque 2.\n");
	}
	else
	{
		printf("El bloque 1 es mayor que el bloque 2.\n");
	}
	return (0);
}*/

/*La función ft_memcmp realiza la comparación byte a byte de los bloques de 
memoria apuntados por *s1 y *s2 y devuelve los resultados esperados según el
estándar de la función memcmp*/
