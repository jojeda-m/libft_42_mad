/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:20:39 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/05 08:08:58 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dst;

	if (dst == NULL && src == NULL)
		return (NULL);
	ptr_src = (unsigned char *)src;
	ptr_dst = (unsigned char *)dst;
	while (n > 0)
	{
		*ptr_dst++ = *ptr_src++;
		n--;
	}
	return (dst);
}

/*int	main(void)
{
	char src[] = "Hello, world!";
	char dst[20]; // Destino con espacio suficiente para la copia
	
	ft_memcpy(dst, src, 13); // Copiar 13 bytes
	printf("Contenido de dst después de la copia: %s\n", dst);
	return (0);
}*/

/*La función proporciona una implementación básica de memcpy, copiando un bloque
de memoria desde una ubicación de origen a una ubicación de destino y 
devolviendo el puntero de destino original.*/
