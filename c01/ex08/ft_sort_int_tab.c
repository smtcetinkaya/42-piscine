/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacetink <sacetink@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:57:48 by sacetink          #+#    #+#             */
/*   Updated: 2024/01/29 19:07:58 by sacetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		swap;
	int		r;

	i = 0;
	r = 0;
	while (r < size - 1)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = swap;
			}
			i++;
		}
		r++;
		i = 0;
	}
}
