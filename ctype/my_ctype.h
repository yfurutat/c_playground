/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 09:35:26 by yuske             #+#    #+#             */
/*   Updated: 2023/01/15 11:09:16 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_CTYPE_H
# define MY_CTYPE_H

# include <stdio.h>
# include <limits.h>
# include <ctype.h>

int	my_isprint(int chr);//空白（' '）を含む表示文字（0x20～0x7e）
int	my_isgraph(int chr);//空白（' '）を除く表示文字（0x21～0x7e）
int	my_iscntrl(int chr);//制御文字（0x00～0x1f, 0x7f）
int	my_ispunct(int chr);//区切り文字（0x21～0x2f, 0x3a～0x40, 0x5b～0x60, 0x7b～0x7e）
int	my_isspace(int chr);//標準空白類文字（' ', '\f', '\n', '\r', '\t', '\v'）
int	my_isblank(int chr);//標準ブランク文字（' ', "\t"）
int	my_isxdigit(int chr);//16進数字（'0'～'9', 'A'～'F', 'a'～'f'）
int	my_isdigit(int chr);//数字（'0'～'9'）
int	my_isalnum(int chr);//英数字（'A'～'Z', 'a'～'z', '0'～'9'）
int	my_isalpha(int chr);//英文字（'A'～'Z', 'a'～'z'）
int	my_islower(int chr);//英小文字（'a'～'z'）
int	my_isupper(int chr);//英大文字（'A'～'Z'）
int	my_tolower(int chr);//文字chrが大文字の場合, 小文字に変換した値を返す.
int	my_toupper(int chr);//文字chrが小文字の場合, 大文字に変換した値を返す.

#endif