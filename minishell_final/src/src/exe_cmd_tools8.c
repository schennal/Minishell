/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exe_cmd_tools8.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:26:57 by schennal          #+#    #+#             */
/*   Updated: 2024/03/15 19:27:07 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exe.h"

void	b_cd_home(t_minishell *m, int idx)
{
	if (chdir(getenv("HOME")) != 0)
		cd_error(m, idx);
	mod_env_cd(m, getenv("PWD"));
}
