/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isllobre <isllobre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:16:14 by isllobre          #+#    #+#             */
/*   Updated: 2023/10/17 11:32:46 by isllobre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	char c = 'H';
	int fd = 1; // 1 es el descriptor de archivo para stdout

	ft_putchar_fd(c, fd);
	return (0);
}
*/
/*
** ft_putchar_fd() es una función que escribe el carácter 'c' en el descriptor
** de archivo dado por 'fd'. Utiliza la función write() del sistema para lograr
** esto, escribiendo exactamente 1 byte desde la dirección de 'c' al descriptor
** de archivo 'fd'.
*/
