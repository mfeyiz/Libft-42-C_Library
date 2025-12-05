/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugunes <mugunes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:49:05 by mugunes           #+#    #+#             */
/*   Updated: 2024/11/18 10:01:42 by mugunes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_result(char **result, size_t i)
{
	while (i > 0)
		free(result[--i]);
	free(result);
	return (NULL);
}

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*allocate_word(const char *start, size_t len)
{
	char	*word;

	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	word[len] = '\0';
	while (len--)
		word[len] = start[len];
	return (word);
}

static char	*extract_word(const char **s, char c)
{
	size_t		len;
	const char	*start;

	len = 0;
	start = *s;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	*s += len;
	return (allocate_word(start, len));
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**result;
	size_t	i;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			result[i] = extract_word(&s, c);
			if (!result[i])
				return (free_result(result, i));
			i++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
