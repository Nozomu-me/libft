/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 12:21:10 by amouassi          #+#    #+#             */
/*   Updated: 2019/11/04 19:21:15 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dt;
	unsigned char	*sc;
	size_t			i;

	if (dst == 0 && src == 0)
		return (NULL);
	if (ft_memcmp(dst, src, n) == 0)
		return (dst);
	dt = (unsigned char *)dst;
	sc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dt[i] = sc[i];
		i++;
	}
	return ((void *)dst);
}
