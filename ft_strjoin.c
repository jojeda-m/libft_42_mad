/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:02:15 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/03/21 11:37:45 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	str = malloc((ft_strlen(s1)) + (ft_strlen(s2)) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (*s2 != '\0')
	{
		str[i] = *s2;
		i++;
		s2++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	const char 	*s1 = "Hello, ";
	const char 	*s2 = "world!";
	char 		*result = ft_strjoin(s1, s2);

    if (result == NULL)
	{
		printf("Error: No se pudo concatenar las cadenas.\n");
		return (1);
	}
	printf("La cadena concatenada es: %s\n", result);
	free(result); // Liberamos la memoria asignada
	return (0);
}*/

/*Reserva (con malloc(3)) y devuelve una nueva string, formada por la
concatenación de ’s1’ y ’s2’. Si la asignaciión de memoria falla,
devuelve NULL*/
