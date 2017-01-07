/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <rpagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 16:37:46 by rpagot            #+#    #+#             */
/*   Updated: 2017/01/04 17:16:36 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_process(char format, va_list *arg, unsigned short intel, int width)
{
	format == '%' ? ft_printf_escape(format, arg, intel, width):0;
	format == 's' ? ft_printf_str(format, arg, intel):0;
	return (0);
}
