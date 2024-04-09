/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:15:36 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/03/27 11:52:02 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*int	main(void)
{
	char	*s;
	int		out;

	s = "Colocar un Str en un FD";
	out = 1;
	ft_putstr_fd(s, out);
	return (0);
}*/

/*La función ft_putstr_fd permite escribir un string en un descriptor de
archivo especificado. En el código proporcionado, se usa para escribir la string
en la salida estándar (stdout) 1*/
