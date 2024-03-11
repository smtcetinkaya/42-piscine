/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacetink <sacetink@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 04:50:47 by sacetink          #+#    #+#             */
/*   Updated: 2024/02/13 15:42:14 by sacetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		bound;
	int		i;
	int		*samet;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min;
	samet = malloc(bound * sizeof(int));
	if (!samet)
	{
		*range = 0;
		return (-1);
	}
	*range = samet;
	i = 0;
	while (i < bound)
	{
		samet[i] = min + i;
		i++;
	}
	return (bound);
}
