/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumahi <oumahi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 03:02:28 by oumahi            #+#    #+#             */
/*   Updated: 2025/11/09 16:22:48 by oumahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s)
{
	int		len_s;
	int		i;
	char	*p;

	len_s = ft_strlen(s);
	p = malloc(len_s + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (s[i])
	{
		p[i] = (char)s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
