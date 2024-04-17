/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:36:33 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/17 13:51:50 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr_s;

	ptr_s = (char *)s;
	while (n-- > 0)
		*ptr_s++ = 0;
}

/*int	main(void)
{
	char	buffer[] = "Testing ft_bzero";
	size_t	n = sizeof(buffer);
	size_t	i = 0;
	
	printf("Buffer original: %s\n", buffer);
	ft_bzero(buffer, n);
	printf("Buffer después de ft_bzero: ");
	while (i++ < n)
		if (buffer[i] == 0)
			printf("0 ");
	printf("\n");

	char	buffer1[] = "Testing bzero original";
	
	n = sizeof(buffer1);
	i = 0;
    printf("Buffer original: %s\n", buffer1);
    bzero(buffer1, n);
    printf("Buffer después de bzero: ");
    while (i++ < n)
        if (buffer1[i] == 0)
            printf("0 ");
	printf("\n");
	return (0);
}*/

/*La función ft_bzero en C (a menudo también escrita como memset) se utiliza
para establecer un bloque de memoria a cero. La función bzero es útil para
inicializar rápidamente áreas de memoria, como buffers o matrices, antes
de su uso. Es importante tener en cuenta que bzero no cambia el tamaño del 
bloque de memoria, solo establece los valores de sus bytes a cero.*/
