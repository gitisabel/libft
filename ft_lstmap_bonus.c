/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:10:50 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 11:06:06 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clear_and_exit(t_list **lst, void (*del)(void *), void *content)
{
	del(content);
	ft_lstclear(lst, del);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;
	void	*new_content;

	new_lst = NULL;
	if (lst == NULL || f == NULL)
		return (NULL);
	while (lst != NULL)
	{
		new_content = f(lst->content);
		new_elem = ft_lstnew(new_content);
		if (new_elem == NULL)
		{
			clear_and_exit(&new_lst, del, new_content);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}
/*
#include <stdio.h>
#include <stdlib.h>

// Supongamos que tenemos una función para duplicar una cadena.
char *duplicate_string(void *content)
{
    char *original = (char *)content;
    char *copy = malloc(strlen(original) + 1);
    if (copy != NULL)
        strcpy(copy, original);
    return copy;
}

int main(void)
{
    // Creamos una lista para probar la función ft_lstmap.
    t_list *head = ft_lstnew("Primer nodo");
    head->next = ft_lstnew("Segundo nodo");
    head->next->next = ft_lstnew("Tercer nodo");

    // Usamos ft_lstmap para crear una nueva lista con el contenido duplicado.
    t_list *new_list = ft_lstmap(head, &duplicate_string, &free);

    // Imprimimos el contenido de la nueva lista.
    t_list *current = new_list;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // No olvidar liberar la memoria de las listas después de usarlas.
    ft_lstclear(&head, &free);
    ft_lstclear(&new_list, &free);
    return (0);
}
*/
/*
** La función ft_lstmap_bonus itera la lista 'lst' y aplica la función 'f'
** al contenido de cada enlace para crear una nueva lista. Esta nueva lista
** es creada gracias a la función 'ft_lstnew'. Si una asignación falla,
** la función 'del' se usa para borrar el contenido de un enlace.
**
** Parámetros:
** - lst: el inicio de la lista.
** - f: la función a aplicar a cada enlace de la lista.
** - del: la función para borrar el contenido de un enlace.
**
** Valor de retorno:
** - La nueva lista. NULL si la asignación falla.
**
** Notas:
** - Si 'lst' o 'f' son NULL, la función devuelve NULL.
*/