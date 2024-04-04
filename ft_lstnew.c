/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 09:54:09 by jojeda-m          #+#    #+#             */
/*   Updated: 2024/04/02 12:26:18 by jojeda-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
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

int main(void)
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

    // Llamamos a la función print_list para imprimir la lista completa de discos
    print_list(disco1);

    // Liberamos la memoria de los nodos
    free(disco1);
    free(disco2);
    free(disco3);
    free(disco4);

    return (0);
}*/

/* La función ft_lstnew crea un nuevo nodo de una estructura tipo lista enlazada
simple, asigna el contenido proporcionado al nodo y lo devuelve. Si falla la
asignación de memoria, devuelve NULL.*/