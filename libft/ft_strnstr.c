/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybelmokh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:22:12 by ybelmokh          #+#    #+#             */
/*   Updated: 2021/11/24 14:53:48 by ybelmokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t max)
{
	char	*our_str;
	char	*needle_str;
	int		i;
	int		j;

	our_str = (char *)haystack;
	needle_str = (char *)needle;
	i = -1;
	if (!haystack || !needle)
		return (NULL);
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (our_str[++i] && i < max)
	{
		j = 0;
		if (our_str[i] == needle_str[0])
		{
			while (our_str[i + j] == needle_str[j] && our_str[i + j]
				&& needle_str[j] && i + j < max)
				j++;
			if (ft_strlen(needle_str) == j)
				return (our_str + i);
		}
	}
	return (NULL);
}
