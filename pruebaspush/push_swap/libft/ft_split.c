/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrujill <atrujill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:59:11 by atrujill          #+#    #+#             */
/*   Updated: 2022/05/12 11:00:40 by atrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nwords(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count);
}

static int	ft_wordlength(char const *s, char c, int i)
{
	int	len;

	len = i;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len - i);
}

static char	*ft_newword(char const *s, char c, int idx)
{
	char	*word;
	int		i;
	int		j;

	i = 0;
	j = ft_wordlength(s, c, idx);
	word = (char *)malloc((j + 1) * sizeof(char));
	if (!word)
	{
		free(word);
		return (0);
	}
	while (s[idx] != '\0' && i < j)
	{
		word[i] = s[idx];
		i++;
		idx++;
	}
	word[i] = '\0';
	return (word);
}

void	bucle(char const *s, char c, char **str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		if (s[j] != '\0')
		{
			str[i] = ft_newword(s, c, j);
			i++;
		}
		while (s[j] != '\0' && s[j] != c)
			j++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (0);
	str = (char **)ft_calloc((ft_nwords(s, c) + 1), sizeof(char *));
	if (!str)
	{
		free(str);
		return (0);
	}
	bucle(s, c, str);
	return (str);
}
