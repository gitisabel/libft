/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:19:57 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 15:15:35 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*last_occ;

	len = ft_strlen(s);
	last_occ = (char *)(s + len);
	while (*last_occ != (unsigned char)c && len)
	{
		last_occ--;
		len--;
	}
	if (*last_occ == (unsigned char)c)
		return (last_occ);
	return (0);
}
/*
int	main(void)
{
	char *s = "Hola Mundo";
	int c = 'o';
	char *result;

	result = ft_strrchr(s, c);
	printf("La última ocurrencia del carácter es: %s\n", result);
	return (0);
}
*/
/*
** ft_strrchr() busca la última ocurrencia de 'c' en 's'.
** Comienza desde el final de 's' y se mueve hacia atrás.
** Si encuentra 'c', devuelve un puntero a su ubicación.
** Si no, devuelve NULL.
*/