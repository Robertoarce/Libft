/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 19:02:51 by titorium          #+#    #+#             */
/*   Updated: 2020/07/24 19:04:34 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr(int n)
{
	long num;

	num = n;
	if (num == -2147483648)
	{
		write(1, "-214748364", 10);
		num = 8;
	}
	if (num < 0)
	{
		ft_putchar('-');
		num = num * -1;
	}
	while (num > 9)
	{
		ft_putnbr(num / 10);
		num = num % 10;
	}
	if (num < 10)
		ft_putchar(num + 48);
}
