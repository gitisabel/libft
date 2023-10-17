/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:12:36 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 09:47:38 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = 1 - 2 * (str[i] == '-');
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = 10 * result + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	char *cadena = "42";
	int numero;

	numero = ft_atoi(cadena);
	printf("El número es: %d\n", numero);
	return (0);
}
*/
/*
** La función ft_atoi convierte la cadena de caracteres inicial apuntada por str
** en un entero representado en base 10.
**
** Parámetros:
** - str: una cadena de caracteres que representa un número entero.
**
** Valor de retorno:
** - El número entero representado por la cadena de entrada.
**
** Notas:
** - La función ignora los espacios en blanco iniciales.
** - Acepta un signo opcional '+' o '-' al inicio de la cadena.
** - Si la cadena inicial no tiene una representación válida de un número entero,
**   el comportamiento es indefinido.
*/