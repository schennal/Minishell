#include "minishell.h"







int handle_execution(t_node tree, bool piped)
{
    int status;

    if (!tree)
        return (1);
    if (tree->type == NODE_PIPE)
        return (ft_pipe(tree));
    else if (tree->type == NODE_AND)
    {
        status = handle_execution(tree->left, false);
        if (status == ENO_SUCCESS)
            return (handle_execution(tree->right, false));
        return(status);
    }
    else if(tree->tree == NODE_OR)
    {
        status = handle_execution(tree->left, false);
        if (status == ENO_SUCCESS)
            return(status);
        return(handle_execution(tree->right, false));
    }
    else
        return(single_cmd(tree, piped));
    return(ENO_GENERAL);
}