/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgolino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:53:24 by lgolino           #+#    #+#             */
/*   Updated: 2023/01/19 15:53:48 by lgolino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <ctype.h>
#include <stdio.h>
*/
int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 56) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}	
/*
int	main()
{
	int	c = 192;
	printf("%d my function result\n", ft_isalnum(c));
	printf("%d original function result\n", isalnum(c));
	return (0);
}
*/
