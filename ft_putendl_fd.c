/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 20:04:49 by rarce             #+#    #+#             */
/*   Updated: 2020/05/13 17:20:38 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putendl_fd(char *s, int fd)
{
	int counter;

	counter = 0;
	while (s && s[counter] != '\0')
	{
		ft_putchar_fd(s[counter], fd);
		counter++;
	}
	write(fd, "\n", 1);
}
