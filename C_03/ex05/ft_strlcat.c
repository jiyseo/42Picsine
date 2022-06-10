/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:09:21 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/27 16:04:33 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	cnt;

	cnt = 0;
	while (*str++ != '\0')
		cnt++;
	return (cnt);
}

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	n;
	        char	*p;

	p = dest;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (src_len + size);
	n = size - dest_len - 1;
	while (*p)
	{
		p++;
	}
	while (*src != '\0' && n)
	{
		*p++ = *src++;
		n--;
	}
	*p = '\0';
	return (dest_len + src_len);
}
