/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 09:27:55 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/05 02:04:00 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
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
