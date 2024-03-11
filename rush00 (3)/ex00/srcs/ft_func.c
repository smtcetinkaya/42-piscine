/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:36:48 by utaydin           #+#    #+#             */
/*   Updated: 2024/02/11 23:19:12 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int str_len2(char *str, int i, int len )
{	 
	int j;
	
	j = 0;
	while (i <= 1000)
	{
		while(str[i] >= '0' && str[i] <= '9')
		{	
			j++;
			i++;
		}
		if(j == len)
			return (i);
		else
		j = 0;
		i++;	
	}
	return (0);
}

void	write_words(char *str, int i)
{
	while(!(str[i] >= 'a' && str[i] <= 'z'))
		i++;
	while (!(str[i] <= '9' && str[i] >= '0'))
	{
		if(str[i] > 32 && str[i] < 127)
			write(1, &str[i], 1);
		i++;
	}
	return ;
}

void find_number(char *buf, int number)
{
	int i;
	
	i = 0;
	while (number != (buf[i] - '0') )
		i++;
	write_words(buf, i);
	return ;
} 

int		ft_is_number(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		else
			i++;
	}
	return (1);
}
void two_digits(int nbr)
{
	if (nbr == 2)
		write(1, "twenty", 6);
	if (nbr == 3)
		write(1, "thirty", 6);
	if (nbr == 4)
		write(1, "forty", 5);
	if (nbr == 5)
		write(1, "fifty", 5);
	if (nbr == 6)
		write(1, "sixty", 5);
	if (nbr == 7)
		write(1, "seventy", 7);
	if (nbr == 8)
		write(1, "eighty", 6);
	if (nbr == 9)
		write(1, "ninety", 6);
}

