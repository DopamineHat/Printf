/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <rpagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 11:32:26 by rpagot            #+#    #+#             */
/*   Updated: 2017/01/03 12:15:53 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_parse.h"

char		*ft_printf_flags(char **format, unsigned short flags)
{
	if (**format == '#' || **format == '+' || **format == '-' 
			|| **format == ' ' || **format == '0')
	{
		if (**format == '#')
			flags ^= 0x0001;
		else if (**format == '+')
			flags ^= 0x0002;
		else if (**format == '-')
			flags ^= 0x0004;
		else if (**format == ' ')
			flags ^= 0x0008;
		else if (**format == '0')
			flags ^= 0x0010;
		(*format)++;
		return (ft_printf_flags(format, flags));
	}
	else
		return (*format);
}



