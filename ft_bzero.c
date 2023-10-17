/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:12:49 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 09:50:40 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char s[10] = "1234567890";
	ft_bzero(s, 5);
	printf("%s\n", s);
	return (0);
}
*/
/*
** La función ft_bzero pone a cero (bytes con valor '\0') los primeros 'n' bytes
** del área de memoria apuntada por 's'.
**
** Parámetros:
** - s: un puntero a la zona de memoria a poner a cero.
** - n: el número de bytes a poner a cero.
**
** Valor de retorno:
** - No devuelve ningún valor.
**
** Notas:
** - Si 'n' es cero, la función no hace nada.
*/