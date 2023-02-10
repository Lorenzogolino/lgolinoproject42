/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgolino <lgolino@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:22:12 by lgolino           #+#    #+#             */
/*   Updated: 2023/02/10 18:35:36 by lgolino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int	ft_putchar(int p)
{
	return (write(1, &p, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	d;
	int		i;

	i = 0;
	va_start(d, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (s[i + 1] == 'c')
				ft_putchar(va_arg(d, int));
			else if (s[i + 1] == 's')
				
			i++;
		}
		else
			write(1, &s[i], 1);
		i++;
	}
	va_end(d);
	return (0);
}

int	main(int argc, char const *argv[])
{
	ft_printf("%c %s %i", 'g', "bro", 7);
	return (0);
}
