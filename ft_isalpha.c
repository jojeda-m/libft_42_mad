/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:35:29 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/17 10:32:14 by jojeda-m         ###   ########.fr       */
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
	char	caracteres[] = {'a', '5', '\0', '9', 'Z'};
	int		i = 0;
	int		len = sizeof(caracteres) / sizeof(caracteres[i]);
	
	printf("Implementación propia ft_isalpha:\n");
	while (i < len)
	{
		if (ft_isalpha(caracteres[i]))
			printf("%c es una letra.\n", caracteres[i]);
		else
			printf("%c no es una letra.\n", caracteres[i]);
		i++;
	}
	printf("Implementación isalpha original:\n");
	i = 0;
    while (i < len)
	{
		if (isalpha(caracteres[i]))
			printf("%c es una letra.\n", caracteres[i]);
		else
			printf("%c no es una letra.\n", caracteres[i]);
		i++;
	}
	return (0);
}*/

/*La función ft_isalpha determina si un carácter dado es una letra del alfabeto
(inglés) o no, siguiendo la convención de la función isalpha estándar en C.*/
