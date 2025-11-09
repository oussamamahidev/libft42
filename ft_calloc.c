/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumahi <oumahi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:40:09 by oumahi            #+#    #+#             */
/*   Updated: 2025/11/09 16:14:46 by oumahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb == 0 || size == 0)
	{
		p = malloc(0);
		if (!p)
			return (NULL);
	}
	else
	{
		if (((nmemb * size) / size) != nmemb)
			return (NULL);
		p = malloc(size * nmemb);
		if (!p)
			return (NULL);
		ft_bzero(p, nmemb * size);
	}
	return (p);
}
