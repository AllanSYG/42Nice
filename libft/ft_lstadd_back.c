#include "libft.h"
#include <stdlib.h>

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp;

    if (lst && new)
    {
        if (*lst == NULL)
        {
            *lst = new;
        }
        else
        {
            temp = *lst;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = new;
        }
    }
}