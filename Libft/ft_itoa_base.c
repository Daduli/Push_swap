/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle <tle@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 08:51:13 by tle               #+#    #+#             */
/*   Updated: 2021/06/23 13:59:19 by tle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	int_size_base(unsigned long long n, int base)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / base;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(unsigned long long n, int base)
{
	int			size;
	char		*str;

	if (n == 0)
		return (ft_strdup("0"));
	size = int_size_base(n, base);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	size--;
	while (size >= 0)
	{
		if ((n % base) < 10)
			str[size] = '0' + (n % base);
		else
			str[size] = '7' + (n % base);
		n = (n / base);
		size--;
	}
	return (str);
}
