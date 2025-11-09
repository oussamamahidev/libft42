/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumahi <oumahi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 21:30:02 by oumahi            #+#    #+#             */
/*   Updated: 2025/11/08 23:43:33 by oumahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ss;
	size_t	sd;
	size_t	i;

	ss = ft_strlen(src);
	sd = ft_strlen(dst);
	if (size <= sd)
	{
		return (ss + size);
	}
	i = 0;
	while(src[i] && i + sd < size - 1)
	{
		dst[i + sd ] = src[i];
		i++;
	}
	dst[i + sd] ='\0';
	return (sd +ss);
}
