/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:17:50 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/05 08:09:38 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*memfill;

	memfill = b;
	i = 0;
	while (len > 0)
	{
		memfill[i] = (char)c;
		len--;
		i++;
	}
	return (b);
}

/*int	main(void)
{
	char buffer[20]; // Buffer para almacenar datos
	
	// Llenar el buffer con 'A' usando ft_memset
	ft_memset(buffer, 'A', sizeof(buffer));
	
	// Imprimir el contenido del buffer para verificar
	printf("Contenido del buffer después de ft_memset: %s\n", buffer);
	
	return (0);
}*/

/*La función ft_memset proporciona una implementación de la función memset,
que llena un bloque de memoria con un valor específico.*/
