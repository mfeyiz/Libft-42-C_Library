/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugunes <mugunes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:31:14 by mugunes           #+#    #+#             */
/*   Updated: 2024/11/16 15:27:10 by mugunes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*newstr;
	size_t	len;

	len = ft_strlen(s1) + 1;
	newstr = (char *)malloc(len * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	return ((char *)ft_memcpy(newstr, s1, len));
}
