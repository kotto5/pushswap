/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakiba <kotto555555@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 21:05:05 by kakiba            #+#    #+#             */
/*   Updated: 2022/12/30 21:05:52 by kakiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	dlist_size(t_dlist *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		++i;
	}
	return (i);
}