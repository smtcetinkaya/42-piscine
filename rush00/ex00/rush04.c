/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacetink <sacetink@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:08:51 by splatin           #+#    #+#             */
/*   Updated: 2024/01/30 15:50:38 by sacetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern	void	ft_putchar(char b);

int	check(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return (2);
	}
	else
	{
		return (0);
	}
}

void	control(int x, int y, int i, int j)
{
	if ((i == 1 && j == 1) || ((i == x && j == y) && (x > 1 && y > 1)))
	{
		ft_putchar('A');
	}
	else if ((j == 1 || j == y) && (i > 1 && i < x))
	{
		ft_putchar('B');
	}
	else if ((i == 1 || i == x) && (j > 1 && j < y))
	{
		ft_putchar('B');
	}
	else if ((i == x && j == 1) || (j == y && i == 1))
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int		i;
	int		j;

	i = 1;
	j = 1;
	if (0 == check(x, y))
	{
		while (j <= y)
		{
			while (i <= x)
			{
				control (x, y, i, j);
				i++;
			}
			j++;
			i = 1;
			ft_putchar('\n');
		}
	}
	else
		write(1, &"please enter positive inputs !", 31);
}
