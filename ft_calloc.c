/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:52:35 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/10 14:20:45 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	char	*ini_ptr;
	char	*end_ptr;

	ptr = malloc(count * size);
	if (ptr != NULL)
	{
		ini_ptr = (char *)ptr;
		end_ptr = ini_ptr + (count * size);
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
	size_t	num_elements;
	size_t	ch_ele_size;
	size_t	nb_ele_size;
	int		*int_array;
	char	*char_array;
	size_t	i;

	num_elements = 5;
	nb_ele_size = sizeof(int);
	ch_ele_size = sizeof(char);
	int_array = (int *)ft_calloc(num_elements, nb_ele_size);
	if (int_array != NULL)
	{
		i = 0;
		// Imprimir los elementos del array de números
		printf("Array de numeros después de ft_calloc:\n");
		while (i < num_elements)
		{
			printf("%d ", int_array[i]);
			i++;
		}
		printf("\n");
		
		// Liberar la memoria asignada
		free(int_array);
	} else
		printf("Error: la asignación de memoria ha fallado.\n");
	
	// Imprimir los elementos del array de caracteres o string
	char_array = (char *)ft_calloc(num_elements, ch_ele_size);
	if (char_array)
	{
		i = 0;
		// Imprimir los ellementos de un array tipo char
		printf("Array de caracteres despues de ft_calloc:\n");
		while (i < num_elements)
		{
			printf("%d ", char_array[i]);
			i++;
		}
		char_array[i] = '\0';
		printf("\n");
		
		// Liberar la memoria asignada
        free(char_array);

	}
	return (0);
}*/

/*La función ft_calloc es una función en C que se utiliza para asignar y limpiar
un bloque de memoria para un número especificado de elementos, cada uno de un
tamaño especificado. Es similar a la función ft_malloc, pero la memoria
asignada se inicializa con ceros. Esta función es útil cuando se necesita
asegurarse de que la memoria asignada esté inicializada en un estado conocido.*/
