/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:20:44 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 15:20:53 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	int c = 'a';
	int result;

	result = ft_toupper(c);
	printf("El resultado es: %c\n", result);
	return (0);
}
*/
/*
** ft_toupper() convierte el carácter 'c' a mayúsculas.
** Si 'c' es una letra minúscula, la convierte a mayúscula.
** Si 'c' no es una letra minúscula, la devuelve sin cambios.
*/