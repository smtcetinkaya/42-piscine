/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacetink <sacetink@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 07:33:09 by sacetink          #+#    #+#             */
/*   Updated: 2024/02/13 14:57:28 by sacetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_allsize(int size, char **strs, char *sep)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (i < size)
	{
		sum = sum + ft_strlen(strs[i]);
		i++;
	}
	sum = sum + ft_strlen(sep) * i;
	return (sum + 1);
}

char	*ft_combine(char *arr, int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		a;

	i = 0;
	j = 0;
	a = 0;
	while (i < size)
	{
		while (strs[i][j])
			arr[a++] = strs[i][j++];
		j = 0;
		while (i < size - 1 && sep[j])
			arr[a++] = sep[j++];
		j = 0;
		i++;
	}
	arr[a] = '\0';
	return (arr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ws;
	char	*str;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		*str = '\0';
		return (str);
	}
	ws = (char *)malloc(ft_allsize(size, strs, sep) * sizeof(char));
	if (!ws)
		return (NULL);
	ws = ft_combine(ws, size, strs, sep);
	return (ws);
}
