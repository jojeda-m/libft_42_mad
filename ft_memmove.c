/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:06:01 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/17 14:27:51 by jojeda-m         ###   ########.fr       */
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
	char dst[sizeof(src)];
	size_t	len;

	len = ft_strlen(src) + 1;
	ft_memmove(dst, src, len);
	printf("Contenido de dst después de ft_memmove: %s\n", dst);
	
	memmove(dst, src, len);
	printf("Contenido de dst después de memmove: %s\n", dst);
	return (0);
}*/

/*La función memmove proporciona una implementación de copia de memoria flexible
que tiene en cuenta la posibilidad de superposición entre las regiones de memoria
de origen y destino. Esto garantiza una copia segura y correcta,
independientemente de la superposición.*/
