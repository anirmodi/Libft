/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridomuka <ridomuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 08:41:24 by ridomuka          #+#    #+#             */
/*   Updated: 2024/11/12 22:59:28 by ridomuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*allocate_substring(size_t actual_len)
{
	char	*substring;

	substring = (char *)malloc((actual_len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	substring[actual_len] = '\0';
	return (substring);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	size_t	actual_len;
	char	*substring;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (allocate_substring(0));
	actual_len = str_len - start;
	if (actual_len > len)
		actual_len = len;
	substring = allocate_substring(actual_len);
	if (!substring)
		return (NULL);
	while (i < actual_len && s[start + i] != '\0')
	{
		substring[i] = s[start + i];
		i++;
	}
	return (substring);
}
