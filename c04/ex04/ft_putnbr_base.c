/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacetink <sacetink@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:08:10 by sacetink          #+#    #+#             */
/*   Updated: 2024/02/07 11:32:03 by sacetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	str_len(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	error_check(char *base)
{
	int		i;
	int		j;
	int		x;

	i = 0;
	x = str_len(base);
	if (base[i] == '\0' || x == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		error;
	long	n;
	int		len;

	error = error_check(base);
	len = str_len(base);
	n = nbr;
	if (error == 1)
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = n * -1;
		}
		if (n < len)
			ft_putchar(base[n]);
		if (len <= n)
		{
			ft_putnbr_base(n / len, base);
			ft_putnbr_base(n % len, base);
		}
	}
}
