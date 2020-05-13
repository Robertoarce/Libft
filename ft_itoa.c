/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 10:32:46 by rarce             #+#    #+#             */
/*   Updated: 2020/05/13 16:51:52 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numsize(long num)
{
	size_t	size;
	long	n;

	n = num;
	size = 0;
	if (n < 0)
	{
		n = n * -1;
		size++;
	}
	if (n == 0)
		size++;
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char			*ft_itoa(int n)
{
	char	*number;
	size_t	nb_len;
	size_t	start;
	long	num;

	num = n;
	nb_len = ft_numsize(num);
	number = NULL;
	if ((number = ft_calloc(sizeof(char), nb_len + 1)) == NULL)
		return (number);
	start = 0;
	number[nb_len + 1] = '\0';
	number[nb_len] = '\0';
	if (num < 0)
	{
		number[0] = '-';
		start++;
		num = num * -1;
	}
	while (nb_len-- > start)
	{
		number[nb_len] = (num % 10) + 48;
		num = num / 10;
	}
	return (number);
}
