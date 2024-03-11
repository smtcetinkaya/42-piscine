/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacetink <sacetink@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:28:50 by sacetink          #+#    #+#             */
/*   Updated: 2024/02/08 12:56:30 by sacetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ag, char **argv)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (ag > 0)
	{
		while (i < ag)
		{
			while (argv[i][j])
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			j = 0;
			i++;
			ft_putchar('\n');
		}
	}
}
