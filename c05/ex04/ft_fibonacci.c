/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacetink <sacetink@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:42:57 by sacetink          #+#    #+#             */
/*   Updated: 2024/02/06 21:29:59 by sacetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
