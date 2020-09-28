/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 11:32:17 by titorium          #+#    #+#             */
/*   Updated: 2020/09/28 17:44:55 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_intnew(int size)
{
	int	*ptr;
	int	counter;

	counter = 0;
	if (!(ptr = (int *)malloc(sizeof(int) * (size))))
		return (NULL);
	while (counter < size)
	{
		ptr[counter] = -1;
		counter++;
	}
	return (ptr);
}
