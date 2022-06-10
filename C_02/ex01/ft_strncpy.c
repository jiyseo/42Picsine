/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:36:09 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/18 20:32:23 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*p;

	p = dest;
	while (n)
	{
		*p++ = *src;
		if (*src)
			src++;
		n --;
	}
	return (dest);
}
