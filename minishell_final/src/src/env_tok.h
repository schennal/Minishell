/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_tok.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:22:55 by schennal          #+#    #+#             */
/*   Updated: 2024/03/15 19:23:02 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_TOK_H
# define ENV_TOK_H
# include "env.h"

int		count(t_token *tok, bool is_div);
void	get_idx(t_token *tok, t_env *env);
#endif