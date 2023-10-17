/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:14:15 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 10:01:21 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    int c = '5';
    if (ft_isdigit(c))
        printf("El caracter '%c' es un dígito.\n", c);
    else
        printf("El caracter '%c' no es un dígito.\n", c);
    return (0);
}
*/
/*
** La función ft_isdigit comprueba si el carácter pasado como parámetro
** es un dígito numérico (0 a 9).
**
** Parámetros:
** - c: el carácter a comprobar.
**
** Valor de retorno:
** - Devuelve 1 si el carácter es un dígito, y 0 en caso contrario.
*/