/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridomuka <ridomuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 02:29:28 by ridomuka          #+#    #+#             */
/*   Updated: 2024/11/09 21:05:45 by ridomuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t num, size_t size)
{
	size_t			total_size;
	void			*ptr;
	unsigned char	*byte_ptr;
	size_t			i;

	total_size = num * size;
	if (num != 0 && total_size / num != size)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	byte_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < total_size)
	{
		byte_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
