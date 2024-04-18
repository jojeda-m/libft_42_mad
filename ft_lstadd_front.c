/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:31:48 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/18 22:51:17 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new -> next = *lst;
		*lst = new;
	}
}

/*void	print_list(t_list *list)
{
	t_list	*temp;

	printf("Contenido de la lista:\n");
	temp = list;
	while (temp != NULL)
	{
		printf("Titulo de disco: %s\n", (char *)temp->content);
		temp = temp->next;
	}
}

int	main(void)
{
	t_list *disco1 = ft_lstnew("Thriller");
	t_list *disco2 = ft_lstnew("Back in Black");
	t_list *disco3 = ft_lstnew("The Dark side of the Moon");

	t_list *lista = disco1;
	disco1->next = disco2;
	disco2->next = disco3;

	printf("Lista antes de agregar el cuarto disco:\n");
	print_list(lista);

	t_list *disco4 = ft_lstnew("The Bodyguard");

	ft_lstadd_front(&lista, disco4);

	printf("\nLista después de agregar el cuarto disco:\n");
	print_list(lista);

	free(disco1);
	free(disco2);
	free(disco3);
	free(disco4);
	
	return (0);
}*/

/*La función ft_lstadd_front agrega un nuevo nodo al frente de una lista
enlazada. Primero, conecta el nuevo nodo al nodo actual al frente de la lista y
luego actualiza el puntero al inicio de la lista para que apunte al nuevo nodo,
de modo que este se convierte en el primer elemento de la lista.*/
