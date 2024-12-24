/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridomuka <ridomuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:36:16 by ridomuka          #+#    #+#             */
/*   Updated: 2024/11/02 12:38:13 by ridomuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;
	unsigned int	j;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	new_str = (char *)malloc(sizeof(char) * (i + 1));
	if (!new_str)
		return (NULL);
	j = 0;
	while (j < i)
	{
		new_str[j] = f(j, s[j]);
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}
