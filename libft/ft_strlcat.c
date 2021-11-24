/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybelmokh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:13:00 by ybelmokh          #+#    #+#             */
/*   Updated: 2021/11/24 14:51:31 by ybelmokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	sz;

	i = 0;
	j = 0;
	sz = 0;
	while (dest[j])
		j++;
	while (src[i])
		i++;
	if (j >= dstsize)
		sz = i + dstsize;
	else
		sz = i + j;
	i = 0;
	while (src[i] && (j + 1) < dstsize)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (sz);
}
