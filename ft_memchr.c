/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:32:20 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/18 10:19:49 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		mem_c;
	const unsigned char	*str;

	mem_c = (unsigned char)c;
	str = s;
	i = 0;
	while (i < n)
	{
		if (str[i] == mem_c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{	char	*str;
	int		search_char;
	size_t	search_size;
	void	*result;
	
	str = "Hello, world!";
	search_char = 300;
	search_size = ft_strlen(str);
	printf("\nImplementación propia ft_memchr:\n");
	result = ft_memchr(str, search_char, search_size);
	if (result != NULL)
		printf("El caracter '%c' encontrado en la dirección de memoria: %p\n", 
				search_char, result);
	else
		printf("El caracter '%c' no encontrado.\n", search_char);
	printf("\nImplementación de la función memchr original:\n");
	result = memchr(str, search_char, search_size);
	if (result != NULL)
		printf("El caracter '%c' encontrado en la dirección de memoria: %p\n",
				search_char, result);
	else
		printf("El caracter '%c' no encontrado.\n", search_char);
	return (0);
}*/

/*La función ft_memchr proporciona una implementación de la búsqueda de un byte
dentro de una región de memoria en C, devolviendo un puntero a la primera
ocurrencia del byte o NULL si no se encuentra ninguna.*/
