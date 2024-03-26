/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:15:05 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/03/21 10:46:42 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c < 'a' || c > 'z')
		return (c);
	return (c - 32);
}

/*int	main(void)
{
	char caracteres[] = {'A', 'B', 'C', 'a', 'b', 'c','1', '$', '\n', '\0'};
	
	printf("Caracteres originales y convertidos a mayúsculas:\n");
	int i = 0;
	while (caracteres[i] != '\0')
	{
		printf("Original: %c ", caracteres[i]);
		printf("Mayúscula: %c\n", ft_toupper(caracteres[i]));
		i++;
	}
	return (0);
}*/

/*La funcion ft_toupper devuelve caracteres convertidos a minnusculas cuando
encuentra un caracter en Mayuscula ,para cualquier otro caracter, devuelve
el mismo cracter*/
