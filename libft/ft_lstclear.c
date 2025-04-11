#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list	*temp;

    if (lst && del)
    {
        while (*lst != NULL)
        {
            temp = (*lst)->next;
            ft_lstdelone(*lst, del);
            *lst = temp;
        }
        *lst = NULL;
    }
}