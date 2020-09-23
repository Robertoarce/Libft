/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 12:37:24 by rarce             #+#    #+#             */
/*   Updated: 2020/08/26 15:07:00 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int8_t	ft_ispace(char str)
{
	if (str == ' ' || str == '\f' || str == '\n'
			|| str == '\r' || str == '\t' || str == '\v')
		return (TRUE);
	return (FALSE);
}

int				ft_atoi2(char *str)
{
	int			counter;
	int			s;
	long int	nb;

	counter = 0;
	s = 1;
	nb = 0;
	while (ft_ispace(str[counter]) == TRUE)
		counter++;
	if (str[counter] == '-')
		s = -1;
	if (str[counter] == '-' || str[counter] == '+')
		counter++;
	while (str[counter] != '\0' && str[counter] >= '0' && str[counter] <= '9')
	{
		if (nb > 2147483647 && s == 1)
			return (-1);
		if (nb > 2147483648 && s == -1)
			return (0);
		nb = (nb * 10) + (str[counter] - 48);
		counter++;
	}
	free(str);
	return ((int)(nb * s));
}
