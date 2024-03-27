/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:03:13 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/03/27 13:55:06 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*sub;

	i = 0;
	while (i < start && s[i] != '\0')
		i++;
	sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	j = 0;
	while (j < len && s[i] != '\0')
	{
		sub[j] = s[i];
		j++;
		i++;
	}
	sub[j] = '\0';
	return (sub);
}

/*int	main(void)
{
	char			cadena[] = "Esto es una cadena de ejemplo";
	unsigned int	start = 8; // Comenzar desde el índice 8
	size_t			len = 10; // Longitud de la subcadena

    char *subcadena = ft_substr(cadena, start, len);

	if (subcadena == NULL)
	{
		printf("Error: No se pudo crear la subcadena.\n");
		return (1);
	}
	printf("Subcadena: %s\n", subcadena);
	
	// Liberar la memoria asignada a la subcadena
	free(subcadena);
	return (0);
}*/

/*La funcion ft_substr, reserva (con malloc(3)) y devuelve una substring
de la string ’s’.La substring empieza desde el índice ’start’ y tiene 
una longitud máxima ’len’.*/
