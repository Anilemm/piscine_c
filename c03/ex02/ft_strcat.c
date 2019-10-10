/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 19:14:25 by adda-sil          #+#    #+#             */
/*   Updated: 2019/07/08 23:54:13 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *dest_ptr;

	dest_ptr = dest;
	while (*dest)
		dest++;
	while ((*dest++ = *src++))
		;
	return (dest_ptr);
}