/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:29:19 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/04 12:15:02 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i <= n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/*int	main(void)
{
	const char *str1 = "Hello, world!";
	const char *str2 = "Hello, there!";
	size_t n = 7; // Máximo de caracteres a comparar
	// Comparar las cadenas usando ft_strncmp
	int result = ft_strncmp(str1, str2, n);
	// Imprimir el resultado de la comparación
	if (result < 0)
	{
		printf("'%.*s' es menor que '%.*s'\n", (int)n, str1, (int)n, str2);
	}
	else if (result > 0)
	{
		printf("'%.*s' es mayor que '%.*s'\n", (int)n, str1, (int)n, str2);
	}
	else
	{
		printf("'%.*s' es igual a '%.*s'\n", (int)n, str1, (int)n, str2);
	}
	return (0);
}*/

/*La función ft_strncmp compara n caracteres de las cadenas s1 y s2 y devuelve
un valor entero que indica la relación entre ellas. Si s1 es menor que s2,
devuelve un valor negativo; si son iguales, devuelve 0; y si s1 es mayor que s2,
devuelve un valor positivo.*/
