/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:41:15 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/18 23:10:24 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*int main(void)
{
	t_list	*ultimo_disco;
	t_list	*disco1 = ft_lstnew("Thriller");
	t_list	*disco2 = ft_lstnew("Back in Black");
	t_list	*disco3 = ft_lstnew("The Dark side of the Moon");
	t_list	*disco4 = ft_lstnew("The Bodyguard");

	disco1->next = disco2;
	disco2->next = disco3;
	disco3->next = disco4;

    ultimo_disco = ft_lstlast(disco1);

	if (ultimo_disco)
		printf("El último disco es: %s\n", (char *)ultimo_disco->content);
	else
		printf("La lista está vacía\n");
	return (0);
}*/

/* La funcion ft_lstlast, recibe como parametro un puntero al principio de una
lista y devuelve el ultimo noodo. */
