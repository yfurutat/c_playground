/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_ctype1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 09:03:00 by yuske             #+#    #+#             */
/*   Updated: 2023/01/15 12:21:08 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_ctype.h"

int	main(void)
{
	int	chr;

	chr = 0;
	printf("\n[iscntrl]\n");
	while (chr < UCHAR_MAX)
	{
		if (iscntrl(chr))
			printf("%d %c\n", chr, chr);
		if (my_iscntrl(chr))
			printf("%d %c\n", chr, chr);
		chr += 1;
	}
	return (0);
}

int	my_isprint(int chr)
{
	return (chr >= ' ' && chr <= '~');
}

int	my_isgraph(int chr)
{
	return (chr >= '!' && chr <= '~');
}

int	my_iscntrl(int chr)
{
	return ((chr >= 0 && chr <= 31) || chr == 127);
}
