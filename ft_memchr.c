/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:15:08 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 11:12:31 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    char s[50] = "Esta es una cadena de prueba.";
    char *result = ft_memchr(s, 'u', 50);
    if (result != NULL)
        printf("El caracter 'u' se encontró en la posición: %ld\n", result - s);
    else
        printf("El caracter 'u' no se encontró en la cadena.\n");
    return (0);
}
*/
/*
** La función ft_memchr busca la primera ocurrencia del carácter 'c' 
** (convertido a un unsigned char) en la cadena 's' durante 'n' bytes.
**
** Parámetros:
** - s: la cadena en la que buscar.
** - c: el carácter a buscar.
** - n: el número de bytes a analizar.
**
** Valor de retorno:
** - Si el carácter 'c' se encuentra en 's', devuelve un puntero al carácter.
**   Si no se encuentra, la función devuelve NULL.
*/