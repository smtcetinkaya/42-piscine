/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacetink <sacetink@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:38:46 by sacetink          #+#    #+#             */
/*   Updated: 2024/02/04 13:43:31 by sacetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	**solve(char *str)
{
	char	**a;
	int		i;

	i = 0;
	a = (char **)malloc(4 * sizeof(4));
	control_4(str, a);
	control_1(str, a);
	control_1_2(str, a);
	return (a);
}

char	**control_4(char *str, char **a)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '4' && i < 4)
			a[0][i] = '1';
		else if (str[i] == '4' && 4 <= i && i < 8)
			a[3][i % 4] = '1';
		else if (str[i] == '4' && i <= 8 && i < 12)
			a[i % 4][0] = '1';
		else if (str[i] == '4' && i <= 12 && i < 16)
			a[i % 4][3] = '1';
		i++;
	}
	return (a);
}

char	**control_1(char *str, char **a)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '1' && i < 4)
			a[0][i] = '4';
		else if (str[i] == '1' && 4 <= i && i < 8)
			a[3][i % 4] = '4';
		else if (str[i] == '1' && i <= 8 && i < 12)
			a[i % 4][0] = '4';
		else if (str[i] == '1' && i <= 12 && i < 16)
			a[i % 4][3] = '4';
		i++;
	}
	return (a);
}

char	**control_1_2(char *str, char **a)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '2' && str[i + 4] == '1' && i < 4)
			a[1][i] = '3';
		if (str[i] == '1' && str[i + 4] == '2' && i < 4)
			a[3][i % 4] = '3';
		if (str[i] == '2' && str[i + 4] == '1' && 8 <= i && i < 12)
			a[i % 4][0] = '3';
		if (str[i] == '1' && str[i + 4] == '2' && 8 <= i && i < 12)
			a[i % 4][3] = '3';
		i++;
	}
	return (a);
}

char **control_1_4(char *str, char **a)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '4' && str[i + 4] == '1' && i < 4)
			control_write_col_up(i, a);
		if (str[i] == '1' && str[i + 4] == '4' && i < 4)
			a[3][i % 4] = '3';
		if (str[i] == '2' && str[i + 4] == '1' && 8 <= i && i < 12)
			a[i % 4][0] = '3';
		if (str[i] == '1' && str[i + 4] == '2' && 4 <= i && i < 8)
			a[i % 4][3] = '3';
		i++;
	}
	return (a);
}

char **control_write_col_up(int i, char **a)
{
	int		j;
	char	c;

	j = 0;
	c = '1';
	while (j < 4)
	{
		a[i][j] = c;
		j++;
		c++;
	}
}

char **control_write_col_down(int i, char **a)
{
	int		j;
	char	c;

	j = 3;
	c = '4';
	while (0 <= j)
	{
		a[i % 4][j] = c;
		j--;
		c--;
	}
}