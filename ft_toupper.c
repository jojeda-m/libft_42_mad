/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:15:05 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/17 20:34:58 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*int	main(void)
{
	char	caracteres[] = {'A', 'B', 'C', 'a', 'b', 'c','1', '$', '\n', '\0'};
	int		len = sizeof(caracteres);
	int		i = 0;
	
	printf("Implementación propia ft_toupper:\n");
	while (i < len)
	{
		printf("Original: %c ", caracteres[i]);
		if (caracteres[i] >= 'a' && caracteres[i] <= 'z')
			printf("Mayúscula: %c\n", ft_toupper(caracteres[i]));
		else
			printf("No hay cambio: %c\n", caracteres[i]);
		i++;
	}
	i = 0;
	printf("\n");
	printf("Implementación función toupper original:\n");
    while (i < len)
    {
        printf("Original: %c ", caracteres[i]);
		if (caracteres[i] >= 'a' && caracteres[i] <= 'z')
			printf("Mayúscula: %c\n", toupper(caracteres[i]));
		else
			printf("No hay cambio: %c\n", caracteres[i]);
		i++;
    }
	return (0);
}*/

/*La funcion ft_toupper devuelve caracteres convertidos a mayúsculas cuando
encuentra un caracter en minúscula ,para cualquier otro caracter, devuelve
el mismo cracter*/
