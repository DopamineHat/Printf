/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_escape.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <rpagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 22:37:54 by rpagot            #+#    #+#             */
/*   Updated: 2017/03/28 03:16:45 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

ssize_t		ft_printf_escape(char format, va_list *arg, unsigned short intel,
int width)
{
	if (intel & 0x0020 && intel | 0x0004)
		ft_printf_width(1, intel >> 13, intel | 0x0010 ? '0' : ' ');
	ft_putchar('%');
	if (intel & 0x024)
		//
	return;
}



