/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:16:00 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 11:29:15 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int main(void)
{
    char str[50] = "Esta es una cadena de prueba.";
    printf("Antes de memset: %s\n", str);
    ft_memset(str, '-', 7);
    printf("Después de memset: %s\n", str);
    return (0);
}
*/
/*
** ft_memset() es una función que llena los primeros 'n' bytes del área de
** memoria apuntada por 's' con el byte constante 'c'. Inicializa a 'i' en 0
** y mientras 'i' sea menor que 'n', establece el 'i'-ésimo byte de 's' a 'c'
** y luego incrementa 'i'. Al final, la función devuelve un puntero a 's'.
*/