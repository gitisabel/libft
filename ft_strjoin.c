/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:18:35 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 15:06:42 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	i_result;
	char	*result;

	result = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i_result = 0;
	i = 0;
	while (s1[i])
	{
		result[i_result] = s1[i];
		i++;
		i_result++;
	}
	i = 0;
	while (s2[i])
	{
		result[i_result] = s2[i];
		i++;
		i_result++;
	}
	result[i_result] = '\0';
	return (result);
}
/*
int	main(void)
{
	char *s1 = "Hola";
	char *s2 = " Mundo";
	char *result;

	result = ft_strjoin(s1, s2);
	printf("La cadena resultante es: %s\n", result);
	free(result);
	return (0);
}
*/
/*
** ft_strjoin() concatena 's1' y 's2' en una nueva cadena 'result'.
** Reserva memoria para 'result', copia 's1' y 's2' en ella.
** Si 'result' es NULL, devuelve NULL.
** Al final, añade el carácter nulo a 'result'.
*/