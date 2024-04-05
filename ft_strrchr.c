/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:24:39 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/05 08:19:02 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	ch;

	ch = (char)c;
	last = NULL;
	if (ch == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == ch)
		{
			last = (char *)s;
		}
		s++;
	}
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
