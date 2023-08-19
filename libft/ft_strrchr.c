/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortova <kfortova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:02:13 by kfortova          #+#    #+#             */
/*   Updated: 2023/02/05 11:32:12 by kfortova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ptr;

	i = ft_strlen(s);
	ptr = (char)c;
	while (i > 0)
	{
		if (s[i] == ptr)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == ptr)
		return ((char *)&s[i]);
	return (NULL);
}
