/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:52:35 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/18 12:18:50 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	else
		ft_bzero(ptr, count * size);
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
	
	printf("\nImplementación propia ft_calloc:\n");
	int_array = (int *)ft_calloc(num_elements, nb_ele_size);
	if (int_array != NULL)
	{
		i = 0;
		printf("Array de numeros después de ft_calloc:\n");
		while (i++ < num_elements)
			printf("%d ", int_array[i]);
		printf("\n");
		free(int_array);
	} 
	else
		printf("Error: la asignación de memoria ha fallado.\n");
	
	char_array = (char *)ft_calloc(num_elements, ch_ele_size);
	if (char_array)
	{
		i = 0;
		printf("Array de caracteres despues de ft_calloc:\n");
		while (i++ < num_elements)
			printf("%d ", char_array[i]);
		char_array[i] = '\0';
		printf("\n");
        free(char_array);
	}
	
	printf("\nImplementación de la función original calloc:\n");
    int_array = (int *)calloc(num_elements, nb_ele_size);
    if (int_array != NULL)
    {
        i = 0;
        printf("Array de numeros después de calloc:\n");
        while (i++ < num_elements)
            printf("%d ", int_array[i]);
        printf("\n");
        free(int_array);
    }
    else
        printf("Error: la asignación de memoria ha fallado.\n");

    char_array = (char *)calloc(num_elements, ch_ele_size);
    if (char_array)
    {
        i = 0;
        printf("Array de caracteres despues de calloc:\n");
        while (i++ < num_elements)
            printf("%d ", char_array[i]);
        char_array[i] = '\0';
        printf("\n");
        free(char_array);
    }
	return (0);
}*/

/*La función ft_calloc es una función en C que se utiliza para asignar y limpiar
un bloque de memoria para un número especificado de elementos, cada uno de un
tamaño especificado. Es similar a la función ft_malloc, pero la memoria
asignada se inicializa con ceros. Esta función es útil cuando se necesita
asegurarse de que la memoria asignada esté inicializada en un estado conocido.*/
