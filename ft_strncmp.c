/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:25:37 by ridomuka          #+#    #+#             */
/*   Updated: 2024/11/12 22:59:14 by ridomuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *str1, size_t n)
{
	size_t	i;

	if (!str || !str1)
		return (0);
	i = 0;
	if (n == 0)
		return (0);
	while (i < (size_t)n && str[i] && str1[i])
	{
		if ((unsigned char)str[i] != (unsigned char)str1[i])
			return ((unsigned char)str[i] - (unsigned char)str1[i]);
		i++;
	}
	if (i < (size_t)n)
		return ((unsigned char)str[i] - (unsigned char)str1[i]);
	return (0);
}
