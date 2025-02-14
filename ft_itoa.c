/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:50:18 by ridomuka          #+#    #+#             */
/*   Updated: 2024/11/13 16:10:07 by ridomuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digit_count(long num)
{
	int	count;

	count = 0;
	if (num <= 0)
		count = 1;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

static char	*fill_str(char *str, long num, int len)
{
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	else if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0 && len > 0)
	{
		str[--len] = '0' + (num % 10);
		num /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*str;

	num = (long)n;
	len = get_digit_count(num);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	return (fill_str(str, num, len));
}
