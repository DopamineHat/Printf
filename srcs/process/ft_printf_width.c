/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <rpagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 22:38:14 by rpagot            #+#    #+#             */
/*   Updated: 2017/03/28 03:20:03 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Libft_github/includes/libft.h"

void	ft_printf_width(int len, int width, char widthpad)
{
	while (len < width)
	{
		ft_putchar(widthpad);
		++len;
	}
}
