/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumahi <oumahi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:28:14 by oumahi            #+#    #+#             */
/*   Updated: 2025/11/09 16:13:55 by oumahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	if ((!dest || !src) && n > 0)
		return (NULL);
	d = (unsigned char *) dest;
	s = (const unsigned char *)src;
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			*(d + i) = *(s + i);
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
