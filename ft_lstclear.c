/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:49:54 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/09 10:25:50 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst && del)
	{
		while (*lst)
		{
			temp = *lst;
			del(temp->content);
			*lst = (*lst)-> next;
			free(temp);
		}
	}
}

/*int	main(void)
{
	// Creamos los nodos con ft_lstnew y les asignamos un valor de ejemplo
	t_list *disco1 = ft_lstnew("Thriller");
	t_list *disco2 = ft_lstnew("Back in Black");
	t_list *disco3 = ft_lstnew("The Dark side of the Moon");
	t_list *disco4 = ft_lstnew("The Bodyguard");

    // Conectamos manualmente los nodos
    disco1->next = disco2;
    disco2->next = disco3;
    disco3->next = disco4;

    // Liberamos la memoria de la lista
    ft_lstclear(&disco1, free);

    return (0);
}*/
