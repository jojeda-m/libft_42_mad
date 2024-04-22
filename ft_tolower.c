/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:22:22 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/17 20:34:04 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*int	main(void)
{
	char    caracteres[] = {'A', 'B', 'C', 'a', 'b', 'c','1', '$', '\n', '\0'};
	int     len = sizeof(caracteres);
	int     i = 0;
	
	printf("Implementación propia ft_tolower:\n");
	while (i < len)
	{
		printf("Original: %c ", caracteres[i]);
		if (caracteres[i] >= 'A' && caracteres[i] <= 'Z')
			printf("Minúscula: %c\n", ft_tolower(caracteres[i]));
		else
			printf("No hay cambio: %c\n", caracteres[i]);
		i++;
	}
	i = 0;
	printf("\n");
	printf("Implementación función tolower original:\n");
	while (i < len)
	{
		printf("Original: %c ", caracteres[i]);
		if (caracteres[i] >= 'A' && caracteres[i] <= 'Z')
			printf("Minúscula: %c\n", tolower(caracteres[i]));
		else
			printf("No hay cambio: %c\n", caracteres[i]);
		i++;
	}
	return (0);
}*/

/*La funcion ft_tolower devuelve caracteres convertidos a minúscula cuando
encuentra un caracter en mayúscula,para cualquier otro caracter, devuelve
el mismo cracter*/
