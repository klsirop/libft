/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volyvar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 18:23:03 by volyvar-          #+#    #+#             */
/*   Updated: 2018/12/13 22:08:37 by volyvar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isblank(int c)
{
	if ((c == 9) || (c == 32))
		return (1);
	else
		return (0);
}
