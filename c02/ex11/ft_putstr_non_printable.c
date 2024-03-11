/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacetink <sacetink@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:25:50 by sacetink          #+#    #+#             */
/*   Updated: 2024/02/01 14:36:02 by sacetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	printable(char a)
{
	if (32 <= a && a <= 126)
	{
		return (1);
	}
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*code;

	i = 0;
	code = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (1 == printable(str[i]))
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar(code [str[i] / 16]);
			ft_putchar(code [str[i] % 16]);
		}
		i++;
	}
}
