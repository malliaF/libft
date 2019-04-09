#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*map;
	t_list	*head;

	if (!lst || !f)
		return (NULL);
	map = f(lst);
	head = map;
	lst = lst->next;
	while (lst)
	{
		map->next = f(lst);
		map = map->next;
		lst = lst->next;
	}
	return (head);
}