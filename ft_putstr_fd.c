/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:16:51 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 14:58:56 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char *s = "Hola Mundo";
	int fd = 1; // 1 es el descriptor de archivo para stdout

	ft_putstr_fd(s, fd);
	return (0);
}
*/
/*
** ft_putstr_fd() escribe la cadena 's' en el descriptor 'fd'.
** Recorre cada carácter de 's' y lo escribe en 'fd'.
*/