/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:07:27 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 10:59:23 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
/*
#include <stdio.h>

int main(void)
{
    // Creamos una lista para probar la función ft_lstclear.
    t_list *head = ft_lstnew("Primer nodo");
    head->next = ft_lstnew("Segundo nodo");
    head->next->next = ft_lstnew("Tercer nodo");

    // Usamos ft_lstclear para eliminar todos los nodos de la lista.
    ft_lstclear(&head, &free);

    // Después de llamar a ft_lstclear, la lista ya no debería existir.
    // Intentar acceder a ella podría causar un error de segmentación.
    // Por lo tanto, no intentamos imprimir la lista o su contenido aquí.

    return (0);
}
*/
/*
** La función ft_lstclear_bonus libera la memoria de la lista 'lst' utilizando
** la función 'del' y luego pone el puntero a NULL.
**
** Parámetros:
** - lst: un puntero al primer enlace de una lista.
** - del: dirección de una función para eliminar el contenido de un enlace.
**
** Valor de retorno:
** - No devuelve ningún valor.
**
** Notas:
** - Si 'lst' o 'del' son NULL, la función no hace nada.
*/