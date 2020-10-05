/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print2d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 13:29:03 by titorium          #+#    #+#             */
/*   Updated: 2020/10/05 15:00:25 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print2d(char **tab)
{
	int counter;
	int start;

	counter = 0;
	while (tab[counter] != NULL)
		counter++;
	ft_putstr("\ncounter = ");
	ft_putnbr(counter);
	ft_putstr("\n");
	start = 0;
	while (counter > start)
	{
		ft_putstr("\n ");
		ft_putstr(tab[start]);
		ft_putstr("\n");
		start++;
	}
}
