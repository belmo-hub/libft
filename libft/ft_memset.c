/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybelmokh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:19:15 by ybelmokh          #+#    #+#             */
/*   Updated: 2021/11/24 14:47:07 by ybelmokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*s;
	size_t			i;
	unsigned char	a;

	a = (unsigned char)c;
	s = (char *)b;
	i = 0;
	while (i < len)
	{
		s[i] = a;
		i++;
	}
	return (b);
}
