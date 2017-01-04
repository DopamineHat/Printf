/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <rpagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 11:32:26 by rpagot            #+#    #+#             */
/*   Updated: 2017/01/04 14:47:58 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_parse.h"

char		*ft_printf_flags(char **format, unsigned short intel)
{
	if (**format == '#' || **format == '+' || **format == '-'
			|| **format == ' ' || **format == '0')
	{
		if (**format == '#')
			intel ^= 0x0001;
		else if (**format == '+')
			intel ^= 0x0002;
		else if (**format == '-')
			intel ^= 0x0004;
		else if (**format == ' ')
			intel ^= 0x0008;
		else if (**format == '0')
			intel ^= 0x0010;
		(*format)++;
		return (ft_printf_flags(format, intel));
	}
	else
		return (*format);
}

char		*ft_printf_width(char **format, va_list *arg, int width,
		unsigned short intel)
{
	int		tmp;

	while (ft_isdigit(**format) || **format == '*')
	{
		if (**format == '*')
		{
			(*format)++;
			tmp = va_arg(*arg, int);
			if (tmp < 0)
				intel ^= 0x0004;
			width = tmp < 0 ? -tmp : tmp;
			intel ^= 0x0020;
		}
		if (ft_isdigit(**format))
		{
			intel ^= 0x0020;
			width = 0;
			while (ft_isdigit(**format))
				width *= 10 + (*(*format)++ - '0');
		}
	}
	return (*format);
}

char		*ft_printf_precision(char **format, va_list *arg, int precision,
		unsigned short intel)
{
	if (**format == '.')
	{
		(*format)++;
		if (**format == '*')
		{
			(*format)++;
			if ((precision = va_arg(*arg, int) >= 0))
				intel ^= 0x0040;
			return (*format);
		}
		else
		{
			while (ft_isdigit(**format))
				precision = precision * 10 + (*(*format)++ - '0');
			intel ^= 0x0040;
			return (*format);
		}
	}
	else
		return (*format);
}

char		*ft_printf_length(char **format, unsigned short intel)
{
	if (*(*format)++ == 'h' && *(*format)++ == 'h')
	{
		intel ^= 0x0080;
		return (*format);
	}
	else if (*(*format)++ == 'l' && *(*format)++ == 'l')
	{
		intel ^= 0x0100;
		return (*format);
	}
	else if (**format == 'h' || **format == 'l' || **format == 'j'
			|| **format == 'z')
	{
		if (**format == 'h')
			intel ^= 0x0200;
		else if (**format == 'l')
			intel ^= 0x0400;
		else if (**format == 'j')
			intel ^= 0x0800;
		else if (**format == 'z')
			intel ^= 0x1000;
		return ((*format)++);
	}
	else
		return (*format);
}
