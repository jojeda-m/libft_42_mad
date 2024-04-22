/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:15:13 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/03/27 11:40:51 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
	char	c;
	int		out;

	c = 'J';
	out = 1;
	ft_putchar_fd(c, out);
	return (0);
}*/

/*La función ft_putchar_fd permite escribir un solo carácter en un descriptor de
archivo especificado. En el código proporcionado, se usa para escribir el
carácter 'J' en la salida estándar (stdout) 1 (Pantalla)*/
