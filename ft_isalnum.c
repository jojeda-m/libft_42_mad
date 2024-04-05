/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:37:50 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/05 02:31:12 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*int	main(void)
{
	char caracteres[] = {'a', '5', ' ', '9', 'Z', '$'};
	int i = 0;
	
	while (caracteres[i] != '\0')
	{
		if (ft_isalnum(caracteres[i]))
		{
			printf("%c es alfanumérico.\n", caracteres[i]);
        }
		else
		{
			printf("%c no es alfanumérico.\n", caracteres[i]);
		}
		i++;
	}
	return (0);
}*/

/*La función ft_isalnum determina si un carácter dado es alfanumérico o no,
siguiendo la convención de la función isalnum estándar en C.*/
