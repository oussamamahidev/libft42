/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumahi <oumahi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 23:54:07 by oumahi            #+#    #+#             */
/*   Updated: 2025/11/09 00:20:36 by oumahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while(s[i])
	{
		if(s[i] == (char)c)
			return (char *)(s + i);
		i++;
	}
	if((char)c == '\0')
		return (char *)(s + i);
	return NULL;
}
