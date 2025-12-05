/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugunes <mugunes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:42:07 by mugunes           #+#    #+#             */
/*   Updated: 2024/11/16 15:21:08 by mugunes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	length;

	length = 0;
	if (src < dst)
	{
		length = len;
		while (length > 0)
		{
			length--;
			((unsigned char *)dst)[length] = ((unsigned char *)src)[length];
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
