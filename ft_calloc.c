/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:13:07 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 09:54:12 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	n_bytes;

	if (!nmemb || !size)
		return (malloc(0));
	n_bytes = nmemb * size;
	if (n_bytes / nmemb != size)
		return (NULL);
	ptr = malloc(n_bytes);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n_bytes);
	return (ptr);
}
/*
int	main(void)
{
	char *ptr;
	ptr = (char *)ft_calloc(10, sizeof(char));
	if (!ptr)
	{
		printf("Error al reservar memoria\n");
		return (1);
	}
	printf("%s\n", ptr);
	free(ptr);
	return (0);
}
*/
/*
** La función ft_calloc reserva memoria para un array de 'nmemb' elementos,
** cada uno de 'size' bytes, y devuelve un puntero a la memoria asignada.
** La memoria asignada se llena con bytes de valor cero.
**
** Parámetros:
** - nmemb: número de elementos a reservar.
** - size: tamaño de cada elemento.
**
** Valor de retorno:
** - Un puntero a la memoria asignada, o NULL si la asignación falla o si
**   'nmemb' o 'size' son cero.
**
** Notas:
** - Si 'nmemb' o 'size' son cero, la función devuelve un puntero a una zona
**   de memoria que puede ser liberada con free, pero no se puede utilizar
**   para acceder a contenido.
** - Si la multiplicación de 'nmemb' y 'size' resulta en overflow, la función
**   devuelve NULL.
*/