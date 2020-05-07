/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 10:32:46 by rarce             #+#    #+#             */
/*   Updated: 2020/05/07 17:01:14 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_numsize(long num)
{
	unsigned int	size;
	long			n;
	
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

char		*ft_itoa(int n)
{
	unsigned int	counter;
	unsigned int	start;
	char			*number;

	counter = ft_numsize(n);
	number = (char *)malloc(sizeof(char) * counter + 1);
	if (number == NULL)
		return (NULL);
	start = 0;
	number[counter + 1] = '\0';
	if (n < 0)
	{
		number[0] = '-';
		start++;
		n = n * -1;
	}
	while (counter-- > start)
	{
		number[counter] = (n % 10) + 48;
		n = n / 10;
	}
	return ((char *)number);
} 
