/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: titorium <rarce@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 19:21:57 by titorium          #+#    #+#             */
/*   Updated: 2020/07/27 20:37:56 by titorium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstrn(char *s, int size)
{
	int counter;

	counter = 0;
	while (s && s[counter] != '\0' && size--)
	{
		ft_putchar(s[counter]);
		counter++;
	}
}
