/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumahi <oumahi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:52:10 by oumahi            #+#    #+#             */
/*   Updated: 2025/11/08 23:23:36 by oumahi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h> 
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ss;
	unsigned char	cc;
	size_t	i;

	i = 0;
	ss = (unsigned char *)s;
	cc = (unsigned char)c;
	while (i < n)
	{
		ss[i] = cc;
		i++;
	}
	return (s);
}
/*
#include<stdio.h>
int main()
{
	//0000000000000000000000000000000010000000000000000000000000000000
	//11111111|11111111|11111111|11111111|10000000|00000000|00000000|00000000
	long arr;//-2147483648
	//ft_memset(&arr, 0, sizeof(arr));  // set all bytes to 0
	ft_memset((unsigned char *)&arr, 0 ,3);
	ft_memset((unsigned char *)&arr + 3 ,0x80,1);
	ft_memset((unsigned char *)&arr + 4,0xFF, 4);
        printf("%ld ", arr);
}*/

