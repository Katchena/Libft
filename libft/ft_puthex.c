/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortova <kfortova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:13:47 by kfortova          #+#    #+#             */
/*   Updated: 2023/07/18 17:46:19 by kfortova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex(unsigned int n, int *len)
{
	char	s[8];
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 0;
	if (n == 0)
	{
		ft_putchar('0', len);
		return ;
	}
	while (n != 0)
	{
		s[i] = base [n % 16];
		n = n / 16;
		i++;
	}
	while (i--)
		ft_putchar(s[i], len);
}
