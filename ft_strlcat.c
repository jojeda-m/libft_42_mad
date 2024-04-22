/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:03:11 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/18 22:29:12 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	orig_dst;

	if (dstsize == 0)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	if (dstsize < len_dst)
		return (ft_strlen(src) + dstsize);
	len_src = 0;
	orig_dst = len_dst;
	while (len_dst < dstsize - 1 && src[len_src] != '\0')
		dst[len_dst++] = src[len_src++];
	dst[len_dst] = '\0';
	return (ft_strlen(src) + orig_dst);
}

/*int	main(void)
{
	char		dst[20];
	char		*dst_value;
	const char 	*src;
	size_t 		dstsize;
	size_t		result;

	dst_value = ;
	src = "World!!!";
	dstsize = 15;
	
	ft_strlcpy(dst, dst_value, sizeof(dst));
	printf("Implementación propia ft_strlcat:\n");
	printf("Cadena de destino antes de ft_strlcat: %s\n", dst);
	printf("Longitud de la cadena de destino antes de ft_strlcat: %zu\n", 
			ft_strlen(dst));
	result = ft_strlcat(dst, src, dstsize);
	printf("Cadena de destino después de ft_strlcat: %s\n", dst);
	printf("Longitud de la cadena de destino después de ft_strlcat: %zu\n", 
			ft_strlen(dst));
	printf("Valor devuelto por ft_strlcat: %zu\n\n", result);

	ft_strlcpy(dst, dst_value, sizeof(dst));
	printf("Implementación función original strlcat:\n");
	printf("Cadena de destino antes de strlcat: %s\n", dst);
	printf("Longitud de la cadena de destino antes de strlcat: %zu\n", 
			ft_strlen(dst));
	result = strlcat(dst, src, dstsize);
	printf("Cadena de destino después de strlcat: %s\n", dst);
	printf("Longitud de la cadena de destino después de strlcat: %zu\n", 
			ft_strlen(dst));
	printf("Valor devuelto por strlcat: %zu\n", result);
	return (0);
}*/

/*La función strlcat proporciona una manera segura de concatenar cadenas en C,
evitando desbordamientos de búfer y asegurando que la cadena resultante esté
correctamente terminada con un carácter nulo.*/
