/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 12:37:24 by rarce             #+#    #+#             */
/*   Updated: 2020/05/06 17:58:57 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int8_t	ft_ispace(char str)
{
	if (str == ' ' || str == '\f' || str == '\n'
			|| str == '\r' || str == '\t' || str == '\v' || str == '+')
		return (TRUE);
	return (FALSE);
}

int				ft_atoi(char *str)
{
	int counter;
	int s;
	int nb;

	counter = 0;
	s = 1;
	while (ft_ispace(str[counter]) == TRUE)
		counter++;
	while (str[counter] == '-')
	{
		s = -1;
		counter++;
	}
	nb = str[counter++] - 48;
	while (str[counter] != '\0' && str[counter] >= '0' && str[counter] <= '9')
	{
		nb = (nb * 10) + str[counter] - 48;
		counter++;
	}
	return (nb * s);
}
