/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:38:38 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/17 10:47:48 by jojeda-m         ###   ########.fr       */
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
	char	caracteres[] = {'\n', 'a', 128, '\0', '9', 'Z', 164, 42};
	int		i = 0;
	int		len = sizeof(caracteres) / sizeof(char);
	
	printf("Implementación propia ft_isascii:\n");
	while (i < len)
	{
		if (ft_isascii(caracteres[i]))
			printf("%c es un caracter ascii std.\n", caracteres[i]);
		else
			printf("%c no es un caracter ascii std.\n", caracteres[i]);
		i++;
	}
	printf("Implementación isascii original:\n");
	i = 0;
    while (i < len)
	{
		if (isascii(caracteres[i]))
			printf("%c es un caracter ascii std.\n", caracteres[i]);
		else
			printf("%c no es un caracter ascii  std.\n", caracteres[i]);
		i++;
	}
	return (0);
}*/

/*La función ft_isascii determina si un valor entero dado está dentro del rango
de caracteres ASCII válidos (0 a 127), siguiendo la convención de la función 
isascii estándar en C.*/
