/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubourge <gubourge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 17:05:58 by gubourge          #+#    #+#             */
/*   Updated: 2016/03/25 14:57:20 by daugier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_square(t_tetri *tetris, int size)
{
	int		i;
	int		j;
	int		dec_bit;
	char	count;

	i = -1;
	while (++i < size)
	{
		dec_bit = -1;
		while (++dec_bit < size)
		{
			count = 1;
			j = -1;
			while (++j < tetris->nb_tetris)
				if ((tetris->tetris[j].tetris[i] >> dec_bit) & 1)
				{
					count = 0;
					write(1, &tetris->tetris[j].carac, 1);
				}
			if (count)
				write(1, ".", 1);
		}
		write(1, "\n", 1);
	}
}
