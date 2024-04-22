/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:45:09 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/17 10:52:32 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	char	caracteres[] = {'\n', '5', '\0', '9', '\t', '&', '*'};
	int		i = 0;
	int		len = sizeof(caracteres) / sizeof(caracteres[i]);
	
	printf("Implementación propia ft_isprint:\n");
	while (i < len)
	{
		if (ft_isprint(caracteres[i]))
			printf("%c es un caracter imprimible.\n", caracteres[i]);
		else
			printf("%c no es un caracter imprimible.\n", caracteres[i]);
		i++;
	}
	printf("Implementación isprint original:\n");
	i = 0;
    while (i < len)
	{
		if (isprint(caracteres[i]))
			printf("%c es un caracter imprimible.\n", caracteres[i]);
		else
			printf("%c no es un caracter imprimible.\n", caracteres[i]);
		i++;
	}
	return (0);
}*/

/*La función ft_isprint determina si un valor entero dado corresponde a un 
carácter imprimible en la tabla ASCII, siguiendo la convención de la 
función isprint estándar en C.*/
