/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 09:27:55 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/18 11:19:00 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	if (ft_strlen(haystack) < ft_strlen(needle))
		return (NULL);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while ((i + j) < len && needle[j] && haystack[i + j] == needle[j])
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	haystack[] = "Hello, world!";
	const char	needle[] = "world";
	size_t		len;
	char 		*result;
	
	len = ft_strlen(haystack);
	printf("\nImplementación propia ft_strnstr:\n");
	result = ft_strnstr(haystack, needle, len);
	if (result != NULL)
		printf("'%s' encontrado en la posición: %ld\n", needle,
				result - haystack);
	else
		printf("'%s' no encontrado en '%s'\n", needle, haystack);
	
	printf("\nImplementación de la función original strnstr:\n");
	result = strnstr(haystack, needle, len);
	if (result != NULL)
		printf("'%s' encontrado en la posición: %ld\n", needle,
				result - haystack);
	else
		printf("'%s' no encontrado en '%s'\n", needle, haystack);
	return (0);
}*/

/*La función ft_strnstr busca la primera ocurrencia de una subcadena en una
cadena más grande con un límite de longitud especificado. Si la subcadena
se encuentra, devuelve un puntero a su ubicación en haystack.
Si no se encuentra, devuelve NULL.*/
