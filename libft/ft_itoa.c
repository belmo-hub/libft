/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybelmokh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:01:30 by ybelmokh          #+#    #+#             */
/*   Updated: 2021/11/24 14:45:00 by ybelmokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(long n)
{
	long	len;

	len = 0;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	if (n >= 0 && n <= 9)
	{
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		leen;
	long	nb;

	nb = n;
	leen = ft_len(nb);
	p = (char *) malloc (leen + 1);
	if (!p)
		return (NULL);
	p[leen] = '\0';
	leen--;
	if (nb < 0)
	{
		p[0] = '-';
		nb = nb * -1;
	}
	while (nb > 9)
	{
		p[leen] = nb % 10 + '0';
		nb = nb / 10;
		leen--;
	}
	if (nb >= 0 && nb <= 9)
		p[leen] = nb + '0';
	return (p);
}
