/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgolino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:57:43 by lgolino           #+#    #+#             */
/*   Updated: 2023/01/24 15:29:16 by lgolino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	j;
	const char	*begin;

	begin = str;
	j = ft_strlen(str);
	str = (str + j);
	while (*str != *begin && c != *str)
		str--;
	if (c == *str)
		return ((char *) str);
	return (0);
}
