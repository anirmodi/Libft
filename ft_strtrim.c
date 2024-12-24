/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridomuka <ridomuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:30:32 by ridomuka          #+#    #+#             */
/*   Updated: 2024/11/12 23:30:34 by ridomuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*allocate_empty_str(void)
{
	char	*str;

	str = (char *)malloc(1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	if (end == 0)
		return (allocate_empty_str());
	end--;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end >= start && ft_strchr(set, s1[end]))
		end--;
	trimmed = (char *)malloc(end - start + 2);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, end - start + 2);
	return (trimmed);
}
