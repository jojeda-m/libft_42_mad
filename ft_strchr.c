/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:56:46 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/17 20:49:43 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	while (*s)
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (NULL);
}

/*int	main(void)
{
	const char *str = "Hello, world!";
	int			to_find = 'w';
	char		*result;
	
	printf("Implementación propia ft_strchr:\n");
	result = ft_strchr(str, to_find);
	if (result != NULL)
	{
		printf("El carácter '%c' se encontró en la posición %ld.\n"
				,to_find, result - str);
	}
	else
	{
		printf("El carácter '%c' no se encontró en la cadena.\n",
				to_find);
	}
	printf("\nImplementación de la función strchr original\n");
	result = strchr(str, to_find);
	if (result != NULL)
	{
		printf("El carácter '%c' se encontró en la posición %ld\n",
				to_find, result - str);
	}
	else
	{
		printf("El carácter '%c' no se encontró en la cadena.\n",
				to_find);
	}
	return (0);
}*/

/*La función ft_strchr proporciona una implementación de la función strchr que
busca la primera ocurrencia de un carácter en una cadena de caracteres y
devuelve un puntero a la posición donde se encuentra ese carácter. 
Si el carácter no se encuentra, devuelve NULL.*/
