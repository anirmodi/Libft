/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:38:49 by ridomuka          #+#    #+#             */
/*   Updated: 2024/11/12 22:58:43 by ridomuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_split(char **split, int count)
{
	while (count > 0)
	{
		count--;
		free(split[count]);
	}
	free(split);
	return (NULL);
}

static int	count_words(const char *s, char c)
{
	int	words;
	int	in_word;

	words = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			words++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (words);
}

static const char	*get_next_word(const char *s, char c, size_t *len)
{
	while (*s == c && *s != '\0')
		s++;
	*len = 0;
	while (s[*len] != '\0' && s[*len] != c)
		(*len)++;
	return (s);
}

static char	*copy_word(const char *s, size_t len)
{
	char	*word;

	word = ft_substr(s, 0, len);
	if (!word)
		return (NULL);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char		**split;
	int			num_words;
	int			i;
	size_t		len;
	const char	*word_start;

	i = 0;
	if (!s)
		return (NULL);
	num_words = count_words(s, c);
	split = ft_calloc(num_words + 1, sizeof(char *));
	if (!split)
		return (NULL);
	while (i < num_words)
	{
		word_start = get_next_word(s, c, &len);
		split[i] = copy_word(word_start, len);
		if (!split[i])
			return (free_split(split, i));
		s = word_start + len;
		i++;
	}
	split[i] = NULL;
	return (split);
}
