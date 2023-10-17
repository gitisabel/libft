/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:08:19 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 11:02:40 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
/*
#include <stdio.h>

// Supongamos que tenemos una función para imprimir una cadena.
void print_string(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    // Creamos una lista para probar la función ft_lstiter.
    t_list *head = ft_lstnew("Primer nodo");
    head->next = ft_lstnew("Segundo nodo");
    head->next->next = ft_lstnew("Tercer nodo");

    // Usamos ft_lstiter para imprimir el contenido de cada nodo.
    ft_lstiter(head, &print_string);

    // No olvidar liberar la memoria de la lista después de usarla.
    ft_lstclear(&head, &free);
    return (0);
}
*/
/*
** La función ft_lstiter_bonus itera la lista 'lst' y aplica la función 'f'
** al contenido de cada enlace.
**
** Parámetros:
** - lst: el inicio de la lista.
** - f: la función a aplicar a cada enlace de la lista.
**
** Valor de retorno:
** - No devuelve ningún valor.
**
** Notas:
** - Si 'lst' o 'f' son NULL, la función no hace nada.
*/