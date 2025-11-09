/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumahi <oumahi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:49:17 by oumahi            #+#    #+#             */
/*   Updated: 2025/11/09 15:08:26 by oumahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t	i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		if(*p == (unsigned char)c)
			return (p);
		p++;
		i++;
	}
	return (NULL);
}
