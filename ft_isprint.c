/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:14:28 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 10:02:48 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    int c = 'A';
    if (ft_isprint(c))
        printf("El caracter '%c' es imprimible.\n", c);
    else
        printf("El caracter '%c' no es imprimible.\n", c);
    return (0);
}
*/
/*
** La función ft_isprint comprueba si el carácter pasado como parámetro
** es un carácter imprimible, incluyendo el espacio.
**
** Parámetros:
** - c: el carácter a comprobar.
**
** Valor de retorno:
** - Devuelve 1 si el carácter es imprimible, y 0 en caso contrario.
**
** Notas:
** - Los caracteres imprimibles son aquellos que están en el rango de 32 a 126.
*/