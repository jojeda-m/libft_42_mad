/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:38:38 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/03/27 13:43:34 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int	main(void)
{
	char caracteres[] = {0, 127, 128, 'A', 'z', ' '};
	unsigned int i = 0;
	
	while (i < sizeof(caracteres) / sizeof(char))
	{
		if (ft_isascii(caracteres[i]))
		{
			printf("%d es un carácter ASCII válido.\n", caracteres[i]);
		}
		else
		{
			printf("%d no es un carácter ASCII válido.\n", caracteres[i]);
		}
		i++;
	}
	return (0);
}*/

/*La función ft_isascii determina si un valor entero dado está dentro del rango
de caracteres ASCII válidos (0 a 127), siguiendo la convención de la función 
isascii estándar en C.*/
