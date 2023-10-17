/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:20:32 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 15:19:41 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int	main(void)
{
	int c = 'A';
	int result;

	result = ft_tolower(c);
	printf("El resultado es: %c\n", result);
	return (0);
}
*/
/*
** ft_tolower() convierte el carácter 'c' a minúsculas.
** Si 'c' es una letra mayúscula, la convierte a minúscula.
** Si 'c' no es una letra mayúscula, la devuelve sin cambios.
*/