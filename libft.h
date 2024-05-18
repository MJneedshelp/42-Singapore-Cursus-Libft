/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:37:26 by mintan            #+#    #+#             */
/*   Updated: 2024/05/18 13:50:38 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<string.h>
#include<stdio.h>

#ifndef LIBFT_H
# define LIBFT_H

/* Validation Functions*/
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

/* String Characteristic Functions */
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);

/* String Manipulation Functions */
int	ft_toupper(int c);
int	ft_tolower(int c);

#endif
