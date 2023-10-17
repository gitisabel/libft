/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:19:24 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 15:11:54 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int unsigned	i;
	char			*new_str;

	i = 0;
	new_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
char my_func(unsigned int i, char c)
{
	return (c + i);
}

int	main(void)
{
	char *s = "Hola";
	char *result;

	result = ft_strmapi(s, my_func);
	printf("La cadena resultante es: %s\n", result);
	free(result);
	return (0);
}
*/
/*
** ft_strmapi() aplica la función 'f' a cada carácter de 's'.
** Crea 'new_str', copia 's' en 'new_str' aplicando 'f'.
** Si 'new_str' es NULL, devuelve NULL.
** Al final, añade '\0' a 'new_str'.
*/