/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:09:32 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 11:04:01 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
#include <stdio.h>

int main(void)
{
    // Creamos una lista para probar la función ft_lstlast.
    t_list *head = ft_lstnew("Primer nodo");
    head->next = ft_lstnew("Segundo nodo");
    head->next->next = ft_lstnew("Tercer nodo");

    // Usamos ft_lstlast para obtener el último nodo de la lista.
    t_list *last_node = ft_lstlast(head);

    // Imprimimos el contenido del último nodo.
    if (last_node != NULL)
        printf("El contenido del último nodo es: %s\n", 
               (char *)last_node->content);

    // No olvides liberar la memoria de la lista después de usarla.
    ft_lstclear(&head, &free);
    return (0);
}
*/
/*
** La función ft_lstlast_bonus devuelve el último enlace de la lista 'lst'.
**
** Parámetros:
** - lst: el inicio de la lista.
**
** Valor de retorno:
** - El último enlace de la lista.
**
** Notas:
** - Si 'lst' es NULL, la función devuelve NULL.
*/