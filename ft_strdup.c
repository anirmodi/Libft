/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridomuka <ridomuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 03:29:02 by ridomuka          #+#    #+#             */
/*   Updated: 2024/11/12 22:27:38 by ridomuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	size_t	len;
	char	*dup;
	char	*start_dup;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
		return (0);
	start_dup = dup;
	while (*src != '\0')
		*dup++ = *src++;
	*dup = '\0';
	return (start_dup);
}
