/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:14:21 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/05 02:43:37 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static char	ft_example(unsigned int i, char c)
{
	if (i % 2 != 0)
	{
		if (c >= 'a' && c <= 'z')
			return (c - ('a' - 'A'));
	}
	else
	{
		if (c >= 'A' && c <= 'Z')
			return (c + ('a' - 'A'));
	}
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*result;

	len = 0;
	while (s[len] != '\0')
		len++;
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*int main(void)
{
    // Cadena de entrada
    const char *input = "AbCdEfGhIjKl";

    printf("Input:  %s\n", input);
    // Llamada a ft_strmapi con ft_example
    char *result = ft_strmapi(input, ft_example);

    // Imprimir el resultado
    if (result != NULL)
    {
        printf("Output: %s\n", result);
        free(result); // Liberar la memoria asignada
    }
    else
    {
        printf("Error: No se pudo asignar memoria.\n");
    }

    return 0;
}*/

/*La función ft_strmapi toma una cadena de caracteres s y una función f como
argumentos. Itera sobre cada carácter de la cadena s, aplicando la función f a
cada carácter junto con su índice en la cadena. Luego, construye una nueva
cadena con los resultados de la aplicación de la función f a cada carácter de
la cadena s. Finalmente, devuelve la nueva cadena resultante. Es importante
tener en cuenta que la función f debe tomar dos argumentos: un unsigned int que
representa el índice del carácter en la cadena y un char que representa el
propio carácter.*/
