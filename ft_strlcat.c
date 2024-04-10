/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:03:11 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/10 18:08:58 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_d;
	size_t	len_s;
	size_t	len_ini_d;

	len_d = ft_strlen(dst);
	len_s = 0;
	if (dstsize <= len_d)
		return (ft_strlen(src) + dstsize);
	len_ini_d = len_d;
	while (len_d < dstsize - 1 && src[len_s] != '\0')
		dst[len_d++] = src[len_s++];
	dst[len_d] = '\0';
	return (ft_strlen(src) + len_ini_d);
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
