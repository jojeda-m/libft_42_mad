/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:46:20 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/18 12:28:22 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*dup;
	size_t	len;

	dup = NULL;
	len = ft_strlen((char *)s1);
	dup = (char *)malloc(len + 1);
	if (dup)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			dup[i] = s1[i];
			i++;
		}
		dup[i] = '\0';
	}
	return (dup);
}

/*int	main(void)
	{
		const char	*original = "Parte 1 terminada!!!";
		char		*duplicado;
		
		printf("\nImplementación propia ft_strdup:\n");
		duplicado = ft_strdup(original);
		if (duplicado != NULL)
		{
			printf("Cadena original: %s\n", original);
			printf("Cadena duplicada: %s\n", duplicado);
			free(duplicado);
		}
		else
			printf("Error: No se pudo duplicar la cadena.\n");
		
		printf("\nImplementación de la función original strdup:\n");
		duplicado = strdup(original);
		if (duplicado != NULL)
		{
			printf("Cadena original: %s\n", original);
			printf("Cadena duplicada: %s\n", duplicado);
			free(duplicado);
		}
		else
			printf("Error: No se pudo duplicar la cadena.\n");
		return (0);
}*/

/*La función ft_strdup() es una función que se utiliza para duplicar una cadena
de caracteres en la memoria dinámica. Su nombre es una abreviatura de
"string duplicate" (duplicar cadena)*/
