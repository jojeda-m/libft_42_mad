/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:46:20 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/03/21 11:10:30 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size_s1;
	char	*dup;
	char	*dup_ini;

	if (s1 == NULL)
		return (NULL);
	size_s1 = ft_strlen(s1);
	dup = malloc(size_s1 + 1);
	dup_ini = dup;
	if (dup == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		*dup = *s1;
		dup++;
		s1++;
	}
	*dup = '\0';
	return (dup_ini);
}

/*int	main(void)
	{
		const char *original = "Parte 1 terminada!!!";
		char *duplicado = ft_strdup(original);
		
		if (duplicado != NULL)
		{
			printf("Cadena original: %s\n", original);
			printf("Cadena duplicada: %s\n", duplicado);
			free(duplicado); // Liberar la memoria asignada por ft_strdup
		}
		else
		{
			printf("Error: No se pudo duplicar la cadena.\n");
		}
		return (0);
}*/

/*La función ft_strdup() es una función que se utiliza para duplicar una cadena
de caracteres en la memoria dinámica. Su nombre es una abreviatura de
"string duplicate" (duplicar cadena)*/
