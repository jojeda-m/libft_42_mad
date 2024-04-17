/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:37:50 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/17 10:39:11 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*int	main(void)
{
	char	caracteres[] = {'a', '5', '\0', '9', 'Z', '&', '*'};
	int		i = 0;
	int		len = sizeof(caracteres) / sizeof(caracteres[i]);
	
	printf("Implementación propia ft_isalnum:\n");
	while (i < len)
	{
		if (ft_isalnum(caracteres[i]))
			printf("%c es un caracter alfanumérico.\n", caracteres[i]);
		else
			printf("%c no es un caracter alfanumérico.\n", caracteres[i]);
		i++;
	}
	printf("Implementación isalnum original:\n");
	i = 0;
    while (i < len)
	{
		if (isalnum(caracteres[i]))
			printf("%c es un caracter alfanumérico.\n", caracteres[i]);
		else
			printf("%c no es un caracter alfanumérico.\n", caracteres[i]);
		i++;
	}
	return (0);
}*/
/*La función ft_isalnum determina si un carácter dado es alfanumérico o no,
siguiendo la convención de la función isalnum estándar en C.*/
