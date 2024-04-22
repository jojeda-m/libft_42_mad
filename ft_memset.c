/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:17:50 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/17 12:58:28 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*memfill;

	memfill = b;
	while (len-- > 0)
		*memfill++ = (char)c;
	return (b);
}

/*int	main(void)
{
	char	buffer[20];
	int		c;
	int		cc;
	
	c = '*';
	cc = '@';
	printf("Bueffer antes de ft_memset y memset original: %s\n", buffer);

	ft_memset(buffer, c, sizeof(buffer));
	printf("Contenido del buffer después de ft_memset: %s\n", buffer);

	memset(buffer, cc, sizeof(buffer));
	printf("Contenido del buffer después de memset original: %s\n", buffer);
	
	return (0);
}*/

/*La función ft_memset proporciona una implementación de la función memset,
que llena un bloque de memoria con un valor específico.*/
