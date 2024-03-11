/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacetink <sacetink@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 01:21:47 by sacetink          #+#    #+#             */
/*   Updated: 2024/02/12 01:39:37 by sacetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*samet;

	i = 0;
	samet = (char *)malloc(str_len(src) * sizeof(char) + 1);
	if (!samet)
	{
		return (0);
	}
	while (src[i])
	{
		samet[i] = src[i];
		i++;
	}
	samet[i] = '\0';
	return (samet);
}
