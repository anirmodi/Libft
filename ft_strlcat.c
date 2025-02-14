/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:18:06 by ridomuka          #+#    #+#             */
/*   Updated: 2024/11/12 22:30:25 by ridomuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_length;
	size_t	src_length;
	size_t	i;

	if (!dest || !src)
		return (0);
	dest_length = 0;
	src_length = 0;
	i = 0;
	while (dest[dest_length] != '\0')
		dest_length++;
	while (src[src_length] != '\0')
		src_length++;
	if (size <= dest_length)
		return (size + src_length);
	while (src[i] != '\0' && (dest_length + i) < (size - 1))
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}
