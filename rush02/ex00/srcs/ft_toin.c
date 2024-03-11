/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:30:29 by utaydin           #+#    #+#             */
/*   Updated: 2024/02/11 22:20:50 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"


char 	*read_buf(char *dictionary)
{
char *buf;
buf = ft_read_dict(dictionary);
return (buf);
}


