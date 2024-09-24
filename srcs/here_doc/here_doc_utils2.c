/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   here_doc_utils2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geibo <geibo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:58:23 by geibo             #+#    #+#             */
/*   Updated: 2024/09/16 14:06:00 by geibo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	copy_n_paste(char **another, char **temp, int *i)
{
	while (temp[*i])
	{
		another[*i] = ft_strdup(temp[*i]);
		(*i)++;
	}
}