/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:18:22 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 15:05:21 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void my_func(unsigned int i, char *c)
{
	*c = *c + i;
}

int	main(void)
{
	char s[] = "Hola";
	ft_striteri(s, my_func);
	printf("La cadena resultante es: %s\n", s);
	return (0);
}
*/
/*
** ft_striteri() aplica la función 'f' a cada carácter de 's'.
** El índice del carácter se pasa como primer argumento a 'f'.
** Cada carácter de 's' se pasa por referencia a 'f'.
*/