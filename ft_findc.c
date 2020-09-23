/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 11:48:58 by titorium          #+#    #+#             */
/*   Updated: 2020/07/27 20:45:05 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_findc(const char *tab, char c)
{
	int counter;

	counter = 0;
	while (tab[counter] && tab[counter + 1] && tab)
	{
		if (tab[counter] == c)
			return (counter);
		counter++;
	}
	return (-1);
}
