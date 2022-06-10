/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 12:38:28 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/26 13:01:14 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 1;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char	*src)
{
	 int	i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(int) * ft_strlen(src));
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
