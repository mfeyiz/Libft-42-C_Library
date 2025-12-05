/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugunes <mugunes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:48:07 by mugunes           #+#    #+#             */
/*   Updated: 2024/11/18 10:03:29 by mugunes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	length;

	length = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static void	convert_num(char *str, unsigned int n, int len)
{
	while (len--)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	int				len;
	char			*str;

	if (n < 0)
		num = -n;
	else
		num = n;
	len = num_len(num) + (n < 0);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	convert_num(str + (n < 0), num, len - (n < 0));
	return (str);
}
