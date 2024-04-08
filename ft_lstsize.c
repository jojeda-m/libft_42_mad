/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:47:51 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/08 11:37:30 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lst_size;

	lst_size = 0;
	while (lst)
	{
		lst_size++;
		lst = lst -> next;
	}
	return (lst_size);
}

/*int	main(void)
{
// Creamos los nodos utilizando ft_lstnew y les asignamos un valor de ejemplo
	t_list *disco1 = ft_lstnew("Thriller");
	t_list *disco2 = ft_lstnew("Back in Black");
	t_list *disco3 = ft_lstnew("The Dark side of the Moon");
	t_list *disco4 = ft_lstnew("The Bodyguard");
	
	// Conectamos manualmente los nodos
	disco1->next = disco2;
	disco2->next = disco3;
	disco3->next = disco4;

	printf("La lista tiene: %d discos\n", ft_lstsize(disco1));

	return (0);
}*/

/* La función ft_lstsize recibe como parametro una lista, y retorna un entero
que representa el número de noodos que contiene dicha lista*/
