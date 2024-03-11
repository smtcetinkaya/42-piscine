/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sacetink <sacetink@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:24:01 by sacetink          #+#    #+#             */
/*   Updated: 2024/02/07 20:12:03 by sacetink         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		r;

	r = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		r *= nb;
		nb--;
	}
	return (r);
}
