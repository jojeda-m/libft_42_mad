/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:20:38 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/17 10:32:54 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int	main(void)
{
	char    caracteres[] = {'a', '5', '\0', '9', 'Z'};
	int     i = 0;
	int     len = sizeof(caracteres) / sizeof(caracteres[i]);
	
	printf("Implementación propia ft_isdigit:\n");
	while (i < len)
	{
		if (ft_isdigit(caracteres[i]))
			printf("%c es un dígito.\n", caracteres[i]);
		else
			printf("%c no es una dígito.\n", caracteres[i]);
		i++;
	}
	printf("Implementación isdigit original:\n");
	i = 0;
	while (i < len)
	{
		if (isdigit(caracteres[i]))
			printf("%c es un dígito.\n", caracteres[i]);
		else
			printf("%c no es una dígito.\n", caracteres[i]);
		i++;
	}
	return (0);
}*/

/*La función ft_isdigit determina si un carácter dado es un dígito numérico
o no, siguiendo la convención de la función isdigit estándar en C.*/
