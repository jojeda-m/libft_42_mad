/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:16:16 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/05 08:11:39 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	str[12];
	int		i;

	i = 0;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n == 0)
		write(fd, "0", 1);
	else
	{
		if (n < 0)
		{
			n = -n;
			write(fd, "-", 1);
		}
		while (n != 0)
		{
			str[i++] = n % 10 + '0';
			n /= 10;
		}
	}
	while (i > 0)
		write(fd, &str[--i], 1);
}

/*int	main(void)
{
	int	n;
	int	fd;

	n = -2147483647;
	fd = 1;
	ft_putnbr_fd(n, fd);
	return (0);
}*/

/*La función ft_putnbr_fd toma un entero n y un descriptor de archivo fd, y
escribe la representación de cadena del entero en el descriptor de archivo dado.
Si n es igual a -2147483648, escribe "-2147483648". Si n es igual a 0, escribe
"0". En otros casos, convierte el entero en una cadena de caracteres y la
escribe en el descriptor de archivo. Si el entero es negativo, precede la cadena
con un signo "-" antes de escribirlo.*/
