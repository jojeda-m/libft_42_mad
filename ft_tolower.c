/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:22:22 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/05 02:48:02 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c < 'A' || c > 'Z')
		return (c);
	return (c + 32);
}

/*int	main(void)
{
	char caracteres[] = {'A', 'B', 'C', 'a', 'b', 'c','1', '$', '\n', '\0'};
	printf("Caracteres originales y convertidos a minúsculas:\n");
	int	i = 0;
	while (caracteres[i] != '\0')
	{
		printf("Original: %c ", caracteres[i]);
		printf("Minúscula: %c\n", ft_tolower(caracteres[i]));
		i++;
	}
	return (0);
}*/

/*La funcion ft_tolower devuelve caracteres convertidos a Mayuscula cuando
encuentra un caracter en minuscula,para cualquier otro caracter, devuelve
el mismo cracter*/
