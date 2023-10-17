/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:19:36 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 15:13:23 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	u1;
	unsigned char	u2;

	while (n > 0)
	{
		u1 = (unsigned char) *s1;
		u2 = (unsigned char) *s2;
		s1++;
		s2++;
		if (u1 != u2)
			return (u1 - u2);
		if (u1 == '\0')
			return (0);
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	char *s1 = "Hola";
	char *s2 = "Hola Mundo";
	size_t n = 4;
	int result;

	result = ft_strncmp(s1, s2, n);
	printf("El resultado de la comparación es: %d\n", result);
	return (0);
}
*/
/*
** ft_strncmp() compara 's1' y 's2' hasta 'n' caracteres.
** Convierte 's1' y 's2' a unsigned char para la comparación.
** Si 'u1' y 'u2' son diferentes, devuelve la diferencia.
** Si encuentra '\0', devuelve 0.
** Continúa mientras 'n' sea mayor que 0.
*/