/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:55:14 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/17 11:03:31 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/*int	main(void)
{
	const char *str = "Hello, world!";
	size_t len;
	
	len = ft_strlen(str);
	printf("Longitud de la cadenacon ft_strlen: %zu\n", len);

	len = strlen(str);
	printf("Longitud de la cadena con strlen: %zu\n", len);
	return (0);
}*/

/*La función ft_strlen cuenta la cantidad de caracteres en la cadena s hasta 
encontrar el carácter nulo final y devuelve este valor como la longitud 
de la cadena.*/
