/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_ctype4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 09:54:47 by yuske             #+#    #+#             */
/*   Updated: 2023/01/15 11:03:06 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_ctype.h"

// int	main(void)
// {
// 	int	chr;

// 	chr = 0;
// 	printf("\nislower\n");
// 	while (chr < UCHAR_MAX)
// 	{
// 		if (my_islower(chr))
// 			printf("%d %c\n", chr, chr);
// 		chr += 1;
// 	}
// 	chr = 0;
// 	printf("\nisupper\n");
// 	while (chr < UCHAR_MAX)
// 	{
// 		if (my_isupper(chr))
// 			printf("%d %c\n", chr, chr);
// 		chr += 1;
// 	}
// 	return (0);
// }

// int	main(void)
// {
// 	int	chr;

// 	chr = ' ';
// 	printf("\n[tolower]\n");
// 	while (chr < CHAR_MAX + 1)
// 	{
// 		printf("%d %c\n", chr, my_tolower(chr));
// 		chr += 1;
// 	}
// 	chr = ' ';
// 	printf("\n[toupper]\n");
// 	while (chr < CHAR_MAX + 1)
// 	{
// 		printf("%d %c\n", chr, my_toupper(chr));
// 		chr += 1;
// 	}
// 	return (0);
// }
	// while (chr < UCHAR_MAX)
	// {
	// 	if (my_tolower(chr))
	// 		printf("%d %c\n", chr, chr);
	// 	chr += 1;
	// }

int	my_islower(int chr)
{
	return (chr >= 'a' && chr <= 'z');
}

int	my_isupper(int chr)
{
	return (chr >= 'A' && chr <= 'Z');
}

int	my_tolower(int chr)
{
	if (my_isupper(chr))
		chr -= ('A' - 'a');
	return (chr);
}

int	my_toupper(int chr)
{
	if (my_islower(chr))
		chr += ('A' - 'a');
	return (chr);
}
