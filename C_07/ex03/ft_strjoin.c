/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:39:07 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/29 15:03:25 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char	*join, char	*src)
{
	int	i;
	int	j;

	i = ft_strlen(join);
	j = 0;
	while (src[j])
	{
		join[i + j] = src[j];
		j++;
	}
	join[i + j] = '\0';
	return (join);
}

int	ft_strcnt(char **strs, char *sep, int	size)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (i < size)
	{
		cnt += ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		cnt += ft_strlen(sep);
		i++;
	}
	return (cnt);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	 int	i;

	if (size == 0)
	{
		join = malloc(sizeof(char));
		*join = 0;
		return (join);
	}
	join = malloc(sizeof(char) * (ft_strcnt(strs, sep, size) + 1));
	if (!(join))
		return (NULL);
	*join = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(join, strs[i]);
		if (i < size - 1)
			ft_strcat(join, sep);
		i++;
	}
	return (join);
}
