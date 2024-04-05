/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:03:11 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/05 02:42:14 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_dst;
	size_t	size_src;
	size_t	size_dst_initial;

	size_dst = ft_strlen(dst);
	size_dst_initial = ft_strlen(dst);
	size_src = 0;
	if (dstsize <= size_dst)
		return (ft_strlen(src) + dstsize);
	while (size_dst < dstsize - 1 && src[size_src] != '\0')
	{
		dst[size_dst] = src[size_src];
		size_dst++;
		size_src++;
	}
	dst[size_dst] = '\0';
	return (ft_strlen(src) + size_dst_initial);
}

/*int	main(void)
{
	char dst[20] = "Hello, ";
	const char src[] = "world!";
	size_t dstsize = sizeof(dst);
	
	printf("Cadena de destino antes de ft_strlcat: %s\n", dst);
	printf("Longitud de la cadena de destino antes de ft_strlcat: %zu\n", 
			ft_strlen(dst));
	
	size_t result = ft_strlcat(dst, src, dstsize);
	printf("Cadena de destino después de ft_strlcat: %s\n", dst);
	printf("Longitud de la cadena de destino después de ft_strlcat: %zu\n", 
			ft_strlen(dst));
	printf("Valor devuelto por ft_strlcat: %zu\n", result);
	return (0);
}*/

/*La función strlcat proporciona una manera segura de concatenar cadenas en C,
evitando desbordamientos de búfer y asegurando que la cadena resultante esté
correctamente terminada con un carácter nulo.*/
