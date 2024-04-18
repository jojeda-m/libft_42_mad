/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:03:13 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/18 14:15:49 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (start > ft_strlen(s) || s == NULL)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s[start], len + 1);
	return (result);
}

/*int	main(void)
{
	char			cadena[] = "Esto es una cadena de ejemplo";
	unsigned int	start = 8;
	size_t			len = 10;
   	char 			*subcadena;
	
	subcadena = ft_substr(cadena, start, len);

	if (subcadena == NULL)
	{
		printf("Error: No se pudo crear la subcadena.\n");
		return (1);
	}
	printf("\nCadena original: %s\n", cadena);
	printf("Posición en la cadena original dende comienza la subcadena: %d\n",
		   start);	
	printf("Subcadena: %s\n", subcadena);
	printf("Cantidad de caracteres copiados: %zu\n", ft_strlen(subcadena));
	
	free(subcadena);
	return (0);
}*/

/*La funcion ft_substr, reserva (con malloc(3)) y devuelve una substring
de la string ’s’.La substring empieza desde el índice ’start’ y tiene 
una longitud máxima ’len’. Si start es mayor que la longitud de s, o s apunta a
NULL, la funcion devuelve un puntero a una cadena vacia*/
