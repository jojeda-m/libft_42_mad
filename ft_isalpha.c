/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:35:29 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/05 08:04:06 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*int	main(void)
{
	char caracteres[] = {'a', '5', ' ', '9', 'Z'};
	int i = 0;
	
	while (caracteres[i] != '\0')
	{
		if (ft_isalpha(caracteres[i]))
		{
			printf("%c es una letra.\n", caracteres[i]);
		}
		else
		{
			printf("%c no es una letra.\n", caracteres[i]);
		}
		i++;
	}
	return (0);
}*/

/*La función ft_isalpha determina si un carácter dado es una letra del alfabeto
o no, siguiendo la convención de la función isalpha estándar en C.*/
