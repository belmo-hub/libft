/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybelmokh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 09:56:32 by ybelmokh          #+#    #+#             */
/*   Updated: 2021/11/24 14:48:20 by ybelmokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(const char *s, char c)
{
	int	i;
	int	j;
	int	cp;

	i = 0;
	cp = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && j == 0)
		{
			cp++;
			j = 1;
		}
		else if (s[i] == c && j == 1)
		{
			j = 0;
		}
		i++;
	}
	return (cp);
}

int	count_char(const char *s, char c)
{
	int	i;
	int	cp;

	i = 0;
	cp = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			cp++;
		}
		else
			return (cp);
		i++;
	}
	return (cp);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	int		i;
	char	**p;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	len = count_word(s, c);
	p = (char **)malloc(sizeof(char *) * (len + 1));
	if (!p)
		return (NULL);
	while (i < len)
	{
		while (*s == c)
			s++;
		j = count_char(s, c);
		p[i] = ft_substr(s, 0, j);
		s = s + j;
		i++;
	}
	p[i] = NULL;
	return (p);
}
