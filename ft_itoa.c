/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:14:43 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 10:05:09 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_negative(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

static size_t	count_digits(long int n)
{
	unsigned int	digits;

	if (n == 0)
		return (1);
	digits = 0;
	while (n > 0)
	{
		digits++;
		n = n / 10;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char			*result;
	unsigned int	negative;
	long int		number;
	unsigned int	digits;

	negative = is_negative(n);
	number = n;
	if (negative == 1)
		number *= -1;
	digits = count_digits(number);
	result = (char *)malloc(negative + digits + 1);
	if (result == NULL)
		return (NULL);
	if (negative == 1)
		result[0] = '-';
	result[digits + negative] = '\0';
	while (digits > 0)
	{
		result[(digits - 1) + negative] = (number % 10) + '0';
		number /= 10;
		digits--;
	}
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
    int number = -12345;
    char *result = ft_itoa(number);
    if (result != NULL)
    {
        printf("El resultado de ft_itoa es: %s\n", result);
        free(result);
    }
    else
    {
        printf("Error: No se pudo asignar memoria para el resultado.\n");
    }
    return (0);
}
*/
/*
** La función ft_itoa convierte un entero a una cadena de caracteres.
**
** Parámetros:
** - n: el número entero a convertir.
**
** Valor de retorno:
** - Devuelve una cadena de caracteres que representa el número entero.
**   La cadena es asignada dinámicamente y debe ser liberada con free.
**
** Notas:
** - Si la asignación de memoria falla, la función devuelve NULL.
*/