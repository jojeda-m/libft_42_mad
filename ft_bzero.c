/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:36:33 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/10 12:02:54 by jojeda-m         ###   ########.fr       */
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
	printf("Test ft_bzero \n");
	// Inicializamos un buffer de caracteres
	char buffer[20] = "Testing ft_bzero";
	// Número de bytes a establecer a cero
	size_t n = 5;
	// Imprimimos el buffer antes de aplicar ft_bzero
	printf("Buffer antes de ft_bzero: %s\n", buffer);
	// Llamamos a la función ft_bzero
	ft_bzero(buffer, n);
	// Imprimimos el buffer después de aplicar ft_bzero
	printf("Buffer después de ft_bzero: %s\n", buffer);
	printf("Test bzero original \n");
	// Inicializamos un buffer de caracteres
    char buffer1[20] = "Testing bzero";
    // Número de bytes a establecer a cero
    size_t n1 = 5;
    // Imprimimos el buffer antes de aplicar bzero
    printf("Buffer antes de bzero: %s\n", buffer1);
    // Llamamos a la función bzero
    bzero(buffer1, n1);
    // Imprimimos el buffer después de aplicar bzero
    printf("Buffer después de bzero: %s\n", buffer1);
	return (0);
}*/

/*La función ft_bzero en C (a menudo también escrita como memset) se utiliza
para establecer un bloque de memoria a cero. La función bzero es útil para
inicializar rápidamente áreas de memoria, como buffers o matrices, antes
de su uso. Es importante tener en cuenta que bzero no cambia el tamaño del 
bloque de memoria, solo establece los valores de sus bytes a cero.*/
