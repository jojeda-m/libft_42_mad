/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:36:33 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/03/21 10:39:38 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr_s;

	ptr_s = (char *)s;
	while (n > 0)
	{
		*ptr_s = 0;
		ptr_s++;
		n--;
	}
}

/*int main(void) 
{
	// Inicializamos un buffer de caracteres
	char buffer[10] = "Testing";
	// Número de bytes a establecer a cero
	size_t n = 5;
	// Imprimimos el buffer antes de aplicar ft_bzero
	printf("Buffer antes de ft_bzero: %s\n", buffer);
	// Llamamos a la función ft_bzero
	ft_bzero(buffer, n);
	// Imprimimos el buffer después de aplicar ft_bzero
	printf("Buffer después de ft_bzero: %s\n", buffer);
	return (0);
}*/

/*La función ft_bzero en C (a menudo también escrita como memset) se utiliza
para establecer un bloque de memoria a cero. La función bzero es útil para
inicializar rápidamente áreas de memoria, como buffers o matrices, antes
de su uso. Es importante tener en cuenta que bzero no cambia el tamaño del 
bloque de memoria, solo establece los valores de sus bytes a cero.*/
