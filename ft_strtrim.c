/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:46:07 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/05 02:45:03 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j]) != NULL)
		j--;
	result = ft_substr(s1, i, (j - i) + 1);
	return (result);
}

/*int	main(void)
{
	const char *s1 = "abcdefghijk";
	const char *set = "abcijk";
	char *result = ft_strtrim(s1, set);
	
	if (result == NULL)
	{
		printf("Error: No se pudo realizar el trim de la cadena.\n");
        return (1);
	}
	printf("Cadena original: \"%s\"\n", s1);
	printf("Cadena trimmada: \"%s\"\n", result);
	free(result); // Liberamos la memoria asignada
	return (0);
}*/

/*La funcion ft_strtrim, elimina todos los caracteres de la string ’set’ desde
el principio y desde el final de ’s1’, hasta encontrar un caracter no 
perteneciente a ’set’. La string resultante se devuelve con una reserva 
de malloc(3)*/
