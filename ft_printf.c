/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <rpagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 07:43:45 by rpagot            #+#    #+#             */
/*   Updated: 2017/01/03 12:22:23 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft_github/includes/libft.h"
#include "includes/ft_parse.h"
#include <stdarg.h>

int				ft_printf_do_stuff(char **format, va_list *arg, int flags)
{
	if (ft_printf_flags(format, flags) == NULL)
		return (-1);
	
	return (-1);
}

static int		ft_printf2(const char *format, va_list *arg, size_t len,
		unsigned short flags)
{
	char		*get_next_arg;
	int			tmp;

	get_next_arg = ft_strchr(format, '%');
	if (*format == '\0')
		return (len);
	if (get_next_arg == NULL)
	{
		ft_putstr(format);
		return (len + ft_strlen(format));
	}
	else if (get_next_arg > format)
	{
		ft_putnstr(format, get_next_arg - format);
		return (ft_printf2(get_next_arg, arg, len + get_next_arg - format,
					flags));
	}
	else
	{
		flags = 0;
		return (tmp = ft_printf_do_stuff((char **)&format, arg, flags) == -1
				? -1 : ft_printf2(format, arg, len + tmp, flags));
	}
}

int		ft_printf(const char *format, ...)
{
	va_list arg;
	int		val;

	va_start(arg, format);
	val = ft_printf2(format, &arg, 0, 0);
	va_end(arg);
	return (val);
}
