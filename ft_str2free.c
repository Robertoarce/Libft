/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 10:15:16 by titorium          #+#    #+#             */
/*   Updated: 2020/10/05 14:59:53 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strfree(char **tab)
{
	int counter;

	counter = 0;
	while (tab[counter] != NULL)
		counter++;
	while (counter)
	{
		free(tab[counter]);
		counter--;
	}
	free(tab[counter]);
	free(tab);
}
