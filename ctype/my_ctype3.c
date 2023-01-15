/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_ctype3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 09:54:39 by yuske             #+#    #+#             */
/*   Updated: 2023/01/15 12:35:08 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_ctype.h"

// int	main(void)
// {
// 	int	chr;

// 	chr = 0;
// 	printf("\n[isxdigit]\n");
// 	while (chr < UCHAR_MAX)
// 	{
// 		if (isxdigit(chr))
// 			printf("%d %c\n", chr, chr);
// 		if (my_isxdigit(chr))
// 			printf("%d %c\n", chr, chr);
// 		chr += 1;
// 	}
// 	chr = 0;
// 	printf("\n[isdigit]\n");
// 	while (chr < UCHAR_MAX)
// 	{
// 		if (isdigit(chr))
// 			printf("%d %c\n", chr, chr);
// 		if (my_isdigit(chr))
// 			printf("%d %c\n", chr, chr);
// 		chr += 1;
// 	}
// 	return (0);
// }

// int	main(void)
// {
// 	int	chr;

// 	chr = 0;
// 	printf("\n[isalpha]\n");
// 	while (chr < UCHAR_MAX)
// 	{
// 		if (isalpha(chr))
// 			printf("%d %c\n", chr, chr);
// 		if (my_isalpha(chr))
// 			printf("%d %c\n", chr, chr);
// 		chr += 1;
// 	}
// 	chr = 0;
// 	printf("\n[isalnum]\n");
// 	while (chr < UCHAR_MAX)
// 	{
// 		if (isalnum(chr))
// 			printf("%d %c\n", chr, chr);
// 		if (my_isalnum(chr))
// 			printf("%d %c\n", chr, chr);
// 		chr += 1;
// 	}
// 	return (0);
// }

int	my_isxdigit(int chr)
{
	return ((chr >= '0' && chr <= '9') || (chr >= 'a' && chr <= 'f')
		|| (chr >= 'A' && chr <= 'F'));
}

int	my_isdigit(int chr)
{
	return (chr >= '0' && chr <= '9');
}

int	my_isalnum(int chr)
{
	return (my_isdigit(chr) || my_isalpha(chr));
}

int	my_isalpha(int chr)
{
	return (my_islower(chr) || my_isupper(chr));
}
