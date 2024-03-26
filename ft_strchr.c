/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:56:46 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/03/21 10:50:07 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ocurrence;

	ocurrence = (char *)s;
	while (*s != '\0')
	{
		if (*s == c)
			return (ocurrence);
		s++;
		ocurrence++;
	}
	if (c == '\0')
		return (ocurrence);
	return (NULL);
}

/*int	main(void)
{
	const char *str = "Hello, world!";
	char character_to_find = 'o';

	// Buscar la primera ocurrencia del carácter en la cadena
	char *result = ft_strchr(str, character_to_find);

	if (result != NULL)
	{
		printf("El carácter '%c' se encontró en la posición %ld de la 
				cadena.\n",character_to_find, result - str);
	}
	else
	{
		printf("El carácter '%c' no se encontró en la cadena.\n", 
				character_to_find);
	}
	return (0);
}*/

/*La función ft_strchr proporciona una implementación de la función strchr que
busca la primera ocurrencia de un carácter en una cadena de caracteres y devuelve
un puntero a la posición donde se encuentra ese carácter. Si el carácter no
se encuentra, devuelve NULL.*/
