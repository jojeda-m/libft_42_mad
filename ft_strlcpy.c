/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:00:27 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/03/21 10:44:18 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	copied_len;

	if (*src == '\0')
	{
		*dst = '\0';
		return (ft_strlen(src));
	}
	if (dstsize == 0)
		return (ft_strlen(src));
	copied_len = 0;
	while (dstsize > 1 && *src != '\0')
	{
		*dst = *src;
		dstsize--;
		src++;
		dst++;
		copied_len++;
	}
	*dst = '\0';
	return (copied_len);
}

/*int	main(void)
{
	// Definir búfer de destino y búfer de origen
	char dst[20]; // Tamaño suficiente para contener la cadena copiada
	const char *src = "Hello, world!!!!!!!";
	
	// Copiar cadena usando ft_strlcpy
	size_t copied_len = ft_strlcpy(dst, src, sizeof(dst));
	
	// Imprimir la cadena copiada y la longitud
	printf("Cadena copiada: %s\n", dst);
	printf("Longitud de la cadena copiada: %zu\n", copied_len);
	return (0);
}*/

/*La función ft_strlcpy es una función que se utiliza para copiar cadenas de
caracteres de manera segura, evitando desbordamientos de búfer. Su
comportamiento es similar a la función ft_strcpy, pero con algunas diferencias
clave para garantizar la seguridad.*/