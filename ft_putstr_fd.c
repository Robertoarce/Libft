/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 19:47:30 by rarce             #+#    #+#             */
/*   Updated: 2020/05/13 17:19:51 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstr_fd(char *s, int fd)
{
	int counter;

	counter = 0;
	while (s && s[counter] != '\0')
	{
		ft_putchar_fd(s[counter], fd);
		counter++;
	}
}
