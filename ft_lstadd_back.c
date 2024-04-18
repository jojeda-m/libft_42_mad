/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:11:55 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/18 23:19:53 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst)
	{
		last = ft_lstlast(*lst);
		last -> next = new;
	}
	else
		*lst = new;
}

/*int main(void)
{
	t_list	*nuevo_disco;
	t_list	*disco1 = ft_lstnew("Thriller");
	t_list	*disco2 = ft_lstnew("Back in Black");
	t_list	*disco3 = ft_lstnew("The Dark side of the Moon");

	disco1->next = disco2;
	disco2->next = disco3;

    nuevo_disco = ft_lstnew("The Bodyguard");

	ft_lstadd_back(&disco1, nuevo_disco);

	t_list *temp = disco1;
	
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	return (0);
}*/

/* La función ft_lstadd_back Añade el nodo ’new’ al final de la lista ’lst’.*/
