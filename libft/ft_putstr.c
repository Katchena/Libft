/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortova <kfortova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:45:07 by kfortova          #+#    #+#             */
/*   Updated: 2023/07/18 17:46:19 by kfortova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *args, int *len)
{
	size_t	i;

	i = 0;
	if (args == NULL)
	{
		write(1, "(null)", 6);
		(*len) = (*len) + 6;
		return ;
	}
	while (args[i] != '\0')
	{
		ft_putchar(args[i], len);
		i++;
	}
}
