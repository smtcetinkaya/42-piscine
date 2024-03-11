/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacetink <sacetink@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:16:15 by sacetink          #+#    #+#             */
/*   Updated: 2024/02/06 20:11:00 by sacetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		s;
	int		num;

	s = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = s * -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		num = num * 10;
		num = num + (str[i] - '0');
		i++;
	}
	num = num * s;
	return (num);
}
