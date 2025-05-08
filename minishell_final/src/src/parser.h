/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamone <pamone@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:42:22 by pamone            #+#    #+#             */
/*   Updated: 2024/03/15 18:42:26 by pamone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H
# include "minishell.h"

bool	parse_redir(t_minishell *m);
bool	parse_fd(t_minishell *m);
bool	parse_cmd(t_minishell *m);
t_token	*next_pipe(t_token *now);
bool	rdr_malloc(t_minishell *m, int idx);
void	fill_rdr_nfd(t_exe *exe, int idx, t_token *type, t_token *fn);
void	fill_rdr_fd(t_exe *exe, int idx, t_token *fd, t_token *fn);
#endif