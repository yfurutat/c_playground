/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_ctype2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 09:53:39 by yuske             #+#    #+#             */
/*   Updated: 2023/01/15 11:19:10 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_ctype.h"

// int	main(void)
// {
// 	int	chr;

// 	chr = 0;
// 	printf("\n[isblank]\n");
// 	while (chr < UCHAR_MAX)
// 	{
// 		if (isblank(chr))
// 			printf("%d %c\n", chr, chr);
// 		if (my_isblank(chr))
// 			printf("%d %c\n", chr, chr);
// 		chr += 1;
// 	}
// 	chr = 0;
// 	printf("\n[isspace]\n");
// 	while (chr < UCHAR_MAX)
// 	{
// 		if (isspace(chr))
// 			printf("%d %c\n", chr, chr);
// 		if (my_isspace(chr))
// 			printf("%d %c\n", chr, chr);
// 		chr += 1;
// 	}
// 	return (0);
// }

int	main(void)
{
	int	chr;

	chr = 0;
	printf("\n[ispunct]\n");
	while (chr < UCHAR_MAX)
	{
		if (ispunct(chr))
			printf("%d %c\n", chr, chr);
		if (my_ispunct(chr))
			printf("%d %c\n", chr, chr);
		chr += 1;
	}
	return (0);
}

int	my_isblank(int chr)
{
	return (chr == '\t' || chr == ' ');
}

int	my_isspace(int chr)
{
	return ((chr >= '\t' && chr <= '\r') || chr == ' ');
}

int	my_ispunct(int chr)
{
	return ((chr >= '!' && chr <= '/') || (chr >= ':' && chr <= '@')
		|| (chr >= '[' && chr <= '`') || (chr >= '{' && chr <= '~'));
}
