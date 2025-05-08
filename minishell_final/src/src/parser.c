/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:43:11 by pamone            #+#    #+#             */
/*   Updated: 2024/03/15 18:43:13 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

static int	ct_exe_size(t_minishell *m)
{
	int		ct;
	t_token	*now;

	ct = 1;
	now = m->t_head->next;
	while (now)
	{
		if (now->type == TYPE_PIPE)
			ct++;
		now = now->next;
	}
	return (ct);
}

static bool	parse_init(t_minishell *m)
{
	int	i;

	m->exe_size = ct_exe_size(m);
	m->exe = ft_malloc(sizeof(t_exe) * m->exe_size, m->mem);
	if (!m->exe)
		return (1);
	i = 0;
	while (i < m->exe_size)
	{
		m->exe[i].args = NULL;
		i++;
	}
	return (0);
}

bool	parse(t_minishell *m)
{
	if (parse_init(m))
		return (1);
	if (parse_cmd(m))
		return (1);
	if (parse_redir(m))
		return (1);
	return (0);
}
