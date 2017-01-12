/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_escape.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <rpagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 22:37:54 by rpagot            #+#    #+#             */
/*   Updated: 2017/01/12 01:42:24 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

ssize_t		ft_printf_escape(char format, va_list *arg, unsigned short intel,
int width)
{
	if (intel & 0x020 && intel | 0x004)
		//
	ft_putchar('%');
	if (intel & 0x024)
		//
	return;
}



