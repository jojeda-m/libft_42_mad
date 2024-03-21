/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:24:39 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/03/21 10:52:30 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	while (*s != '\0')
	{
		if (*s == c)
			last = ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (last);
}

/*int	main(void)
{
	const char str[] = "Hello, world!";
	int c = '\0';
	char *result = ft_strrchr(str, c);
	
	if (result != NULL)
	{
		printf("Última ocurrencia de '%c' encontrada en la 
				posición: %ld\n", c, result - str);
	}
	else
	{
		printf("'%c' no encontrado en '%s'\n", c, str);
	}
	return (0);
}*/

/*Esta función busca el carácter c dentro de la cadena s y devuelve un puntero
a la última ocurrencia de ese carácter en la cadena. Si el carácter no está
presente, devuelve NULL. Es importante tener en cuenta que esta función funciona
con caracteres individuales, por lo que si c es una secuencia de caracteres,
solo se considerará el último carácter de esa secuencia para la búsqueda.*/
