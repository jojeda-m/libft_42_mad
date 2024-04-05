/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:06:01 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/05 08:09:16 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	const char	*ptr_src;
	char		*ptr_dst;

	ptr_src = src;
	ptr_dst = dst;
	i = 0;
	if (ptr_src > ptr_dst)
	{
		while (len > 0)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
			len--;
		}
	}
	if (ptr_src < ptr_dst)
	{
		while (len > 0)
		{
			ptr_dst[len - 1] = ptr_src[len - 1];
			len--;
		}
	}
	return (dst);
}

/*int	main(void)
{
	char src[] = "Hello, world!";
	char dst[20]; // Destino con espacio suficiente para la copia
	
	ft_memmove(dst, src, ft_strlen(src) + 1); //Copia la cadena incluyendo '\0'
	printf("Contenido de dst después de la copia: %s\n", dst);
	return (0);
}*/

/*La función memmove proporciona una implementación de copia de memoria flexible
que tiene en cuenta la posibilidad de superposición entre las regiones de memoria
de origen y destino. Esto garantiza una copia segura y correcta,
independientemente de la superposición.*/
