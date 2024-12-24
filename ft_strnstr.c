/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridomuka <ridomuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:27:46 by ridomuka          #+#    #+#             */
/*   Updated: 2024/11/12 22:37:28 by ridomuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	size_t	i;
	size_t	j;

	if (!str || !sub)
		return (NULL);
	if (*sub == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (sub[j] != '\0' && (i + j) < len && str[i + j] == sub[j])
			j++;
		if (sub[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
