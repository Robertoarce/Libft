/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 11:48:58 by titorium          #+#    #+#             */
/*   Updated: 2020/09/25 19:44:30 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_findc(const char *tab, char c)
{
	int counter;

	if (tab == NULL)
		return (-1);
	counter = 0;
	while (tab[counter] != '\0')
	{
		if (tab[counter] == c)
			return (counter);
		counter++;
	}
	return (-1);
}
