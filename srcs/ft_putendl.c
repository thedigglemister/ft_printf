/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 11:02:46 by biremong          #+#    #+#             */
/*   Updated: 2017/01/31 18:49:15 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putendl(char const *s)
{
	if (!s)
		return ;
	ft_putstr(s);
	write(1, "\n", 1);
}
