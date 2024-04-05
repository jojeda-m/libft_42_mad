/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:15:57 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/05 08:11:02 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	new_line;

	i = 0;
	new_line = '\n';
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &new_line, 1);
}

/*int	main(void)
{
	char	*s;
	int		out;

	s = "Colocar un Str en un FD seguido de salto de linea";
	out = 1;
	ft_putendl_fd(s, out);
	return (0);
}*/

/*La función ft_putstr_fd permite escribir un string en un descriptor de
archivo especificado. En el código proporcionado, se usa para escribir la string
en la salida estándar (stdout) 1, seguido de un salto de línea.*/
