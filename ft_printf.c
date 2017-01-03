/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <rpagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 07:43:45 by rpagot            #+#    #+#             */
/*   Updated: 2017/01/03 08:22:12 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/includes/libft.h"
#include <stdarg.h>

static int		ft_printf2(const char *format, va_list *arg, size_t len)
{
	char	*get_next_arg;

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
}



int		ft_printf(const char *format, ...)
{
	va_list arg;
	int		val;

	va_start(arg, format);
	val = ft_printf2(format, &arg, 0);
	va_end(arg);
	return (val);
}

