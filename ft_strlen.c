/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:55:14 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/03/21 10:29:02 by jojeda-m         ###   ########.fr       */
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
	
	// Obtener la longitud de la cadena usando ft_strlen
	size_t length = ft_strlen(str);
	// Imprimir la longitud de la cadena
	printf("Longitud de la cadena: %zu\n", length);
    return (0);
}*/

/* la función ft_strlen cuenta la cantidad de caracteres en la cadena s hasta 
encontrar el carácter nulo final y devuelve este valor como la longitud 
de la cadena.*/
