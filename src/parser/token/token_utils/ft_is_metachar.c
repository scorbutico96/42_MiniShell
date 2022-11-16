/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_metachar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm & mc <jmartini & mcrisari>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 23:49:11 by jm & mc           #+#    #+#             */
/*   Updated: 2021/11/07 23:49:12 by jm & mc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int
	ft_is_metachar(char c)
{
	if (c == '\\' || c == '&' || c == ';'
		|| c == '(' || c == ')')
		return (1);
	return (0);
}