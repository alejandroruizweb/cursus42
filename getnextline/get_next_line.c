/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:32:01 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/12/13 14:03:21 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_update_memo(char *memo)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (memo[i] != '\0' && memo[i] != '\n')
		i++;
	if (!memo[i])
	{
		free(memo);
		return (0);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(memo) - i + 1));
	if (!str)
	{
		free(str);
		return (0);
	}
	i++;
	while (memo[i])
		str[j++] = memo[i++];
	str[j] = '\0';
	free(memo);
	return (str);
}

char	*ft_return_line(char *memo)
{
	int		i;
	char	*str;

	i = 0;
	if (!memo[i])
		return (0);
	while (memo[i] && memo[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (0);
	i = 0;
	while (memo[i] && memo[i] != '\n')
	{
		str[i] = memo[i];
		i++;
	}
	if (memo[i] && memo[i] == '\n')
	{
		str[i] = '\n';
		i++;
	}
	str [i] = '\0';
	return (str);
}

char	*ft_memo_read(int fd, char *memo)
{
	char	*store;
	int		byte_nbr;

	byte_nbr = 1;
	store = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!store)
		return (0);
	while (byte_nbr > 0)
	{
		byte_nbr = read(fd, store, BUFFER_SIZE);
		if (byte_nbr == -1)
		{
			free(store);
			free(memo);
			return (0);
		}
		store[byte_nbr] = '\0';
		memo = ft_strjoin(memo, store);
		if (ft_strchr(store, '\n'))
			break ;
	}
	free(store);
	return (memo);
}

char	*get_next_line(int fd)
{
	static char	*memo;
	char		*return_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	memo = ft_memo_read(fd, memo);
	if (!memo)
		return (0);
	return_line = ft_return_line(memo);
	memo = ft_update_memo(memo);
	return (return_line);
}
