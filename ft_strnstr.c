/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 09:27:55 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/03/21 11:03:54 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	char			*result;

	result = (char *)haystack;
	if (*needle == '\0')
		return (result);
	i = 0;
	while ((i < len) && (*haystack != '\0') && (*haystack != *needle))
	{
		i++;
		haystack++;
	}
	if (*haystack == *needle)
		return (result + i);
	return (NULL);
}

/*int	main(void)
{
	const char haystack[] = "Hello, world!";
	const char needle[] = "world";
	
	char *res = ft_strnstr(haystack, needle, 15);
	
	if (res != NULL)
	{
		printf("'%s' encontrado en la posición: %ld\n", needle, res - haystack);
	}
	else
	{
		printf("'%s' no encontrado en '%s'\n", needle, haystack);
	}
	return (0);
}*/

/*La función ft_strnstr busca la primera ocurrencia de una subcadena en una
cadena más grande con un límite de longitud especificado. Si la subcadena
se encuentra, devuelve un puntero a su ubicación en haystack.
Si no se encuentra, devuelve NULL.*/
