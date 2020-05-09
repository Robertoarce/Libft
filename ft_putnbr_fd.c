/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 20:19:10 by rarce             #+#    #+#             */
/*   Updated: 2020/05/07 17:59:16 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	long num;

	num = n;
	if (num == -2147483648)
	{
		write(fd, "-214748364", 10);
		num = 8;
	}
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = num * -1;
	}
	while (num > 9)
	{
		ft_putnbr_fd(num / 10, fd);
		num = num % 10;
	}
	if (num < 10)
		ft_putchar_fd(num + 48, fd);
}
