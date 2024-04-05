/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:20:38 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/05 08:05:13 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int   main(void)
{
    char    caracteres[] = {'a', '5', ' ', '9', 'Z'};
    int i = 0;

    while (caracteres[i] != '\0')
    {
        if (ft_isdigit(caracteres[i]))
        {
            printf("%c es un dígito.\n", caracteres[i]);
        }
        else
        {
            printf("%c no es un dígito.\n", caracteres[i]);
        }
        i++;
    }
    return (0);
}*/

/*La función ft_isdigit determina si un carácter dado es un dígito numérico
o no, siguiendo la convención de la función isdigit estándar en C.*/
