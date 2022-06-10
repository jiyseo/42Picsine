/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:38:36 by jiyseo            #+#    #+#             */
/*   Updated: 2021/12/13 21:51:04 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (src[len])
		len++;
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	int	src_len;

	src_len = ft_strlen(src);
	if (n)
	{
		while (--n && *src)
		{
			*dest++ = *src++;
		}
		*dest = '\0';
	}
	return (src_len);
}
