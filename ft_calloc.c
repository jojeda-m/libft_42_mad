/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:52:35 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/05 08:03:01 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;
	char	*ini_ptr;
	char	*end_ptr;

	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr != NULL)
	{
		ini_ptr = (char *)ptr;
		end_ptr = ini_ptr + total_size;
		while (ini_ptr < end_ptr)
		{
			*ini_ptr = 0;
			ini_ptr++;
		}
	}
	return (ptr);
}

/*int	main(void)
{
	size_t num_elements = 5;
	size_t element_size = sizeof(int);
	
	int *array = (int *)ft_calloc(num_elements, element_size);
	if (array != NULL)
	{
		// Imprimir los elementos del array
		printf("Array después de ft_calloc:\n");
		for (size_t i = 0; i < num_elements; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");
		
		// Liberar la memoria asignada
		free(array);
	} else
	{
		printf("Error: la asignación de memoria ha fallado.\n");
	}
	return (0);
}*/

/*La función ft_calloc es una función en C que se utiliza para asignar y limpiar
un bloque de memoria para un número especificado de elementos, cada uno de un
tamaño especificado. Es similar a la función ft_malloc, pero la memoria
asignada se inicializa con ceros. Esta función es útil cuando se necesita
asegurarse de que la memoria asignada esté inicializada en un estado conocido.*/
