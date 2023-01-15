/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:17:24 by yuske             #+#    #+#             */
/*   Updated: 2023/01/15 12:30:03 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_ctype.h"

// int	main(void)
// {
// 	int	chr;

// 	chr = 0;
// 	printf("\n[iscntrl]\n");
// 	while (chr < UCHAR_MAX)
// 	{
// 		if (iscntrl(chr))
// 			printf("%d %c\n", chr, chr);
// 		if (my_iscntrl(chr))
// 			printf("%d %c\n", chr, chr);
// 		chr += 1;
// 	}
// 	return (0);
// }

// int	main(void)
// {
// 	int	chr;

// 	chr = 0;
// 	printf("\n[isgraph]\n");
// 	while (chr < UCHAR_MAX)
// 	{
// 		if (isgraph(chr))
// 			printf("%d %c\n", chr, chr);
// 		if (my_isgraph(chr))
// 			printf("%d %c\n", chr, chr);
// 		chr += 1;
// 	}
// 	chr = 0;
// 	printf("\n[isprint]\n");
// 	while (chr < UCHAR_MAX)
// 	{
// 		if (isprint(chr))
// 			printf("%d %c\n", chr, chr);
// 		if (my_isprint(chr))
// 			printf("%d %c\n", chr, chr);
// 		chr += 1;
// 	}
// 	return (0);
// }

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

// int	main(void)
// {
// 	int	chr;

// 	chr = 0;
// 	printf("\n[ispunct]\n");
// 	while (chr < UCHAR_MAX)
// 	{
// 		if (ispunct(chr))
// 			printf("%d %c\n", chr, chr);
// 		if (my_ispunct(chr))
// 			printf("%d %c\n", chr, chr);
// 		chr += 1;
// 	}
// 	return (0);
// }

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

int	main(void)
{
	int	chr;

	chr = ' ';
	printf("\n[tolower]\n");
	while (chr < CHAR_MAX + 1)
	{
		printf("%d %c\n", chr, my_tolower(chr));
		chr += 1;
	}
	chr = ' ';
	printf("\n[toupper]\n");
	while (chr < CHAR_MAX + 1)
	{
		printf("%d %c\n", chr, my_toupper(chr));
		chr += 1;
	}
	return (0);
}
	// while (chr < UCHAR_MAX)
	// {
	// 	if (my_tolower(chr))
	// 		printf("%d %c\n", chr, chr);
	// 	chr += 1;
	// }
