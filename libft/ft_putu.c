/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortova <kfortova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:09:39 by kfortova          #+#    #+#             */
/*   Updated: 2023/07/18 17:46:19 by kfortova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putu(unsigned int n, int *len)
{
	if (n >= 10)
	{
		ft_putu(n / 10, len);
		ft_putchar(n % 10 + '0', len);
	}
	else
		ft_putchar(n + '0', len);
}
