/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:13:20 by ridomuka          #+#    #+#             */
/*   Updated: 2024/11/12 22:39:46 by ridomuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*last_occurrence;

	if (!str)
		return (NULL);
	last_occurrence = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			last_occurrence = (char *)&str[i];
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (last_occurrence);
}
