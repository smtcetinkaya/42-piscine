/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacetink <sacetink@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 02:56:00 by sacetink          #+#    #+#             */
/*   Updated: 2024/02/13 15:00:57 by sacetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		range;
	int		*samet;

	range = max - min;
	i = 0;
	if (min >= max)
		return (0);
	samet = (int *)malloc(range * sizeof(int));
	if (!samet)
		return (0);
	while (i < range)
	{
		samet[i] = min + i;
		i++;
	}
	return (samet);
}
