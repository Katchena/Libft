/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortova <kfortova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:46:18 by kfortova          #+#    #+#             */
/*   Updated: 2023/02/02 16:42:23 by kfortova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	if (len == 0)
		return (0);
	i = 0;
	while (big[i] && i < len && len > 0)
	{
		j = 0;
		while (little[j] && (little[j] == big[i + j] && i + j < len))
			j++;
		if (little[j] == 0)
			return (&((char *)big)[i]);
		i++;
	}
	return (0);
}
