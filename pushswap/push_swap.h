typedef struct s_list_int
{
	int					value;
	int					index;
	struct s_list_int	*next;
}						t_list_int;


t_list_int ft_new(int value);
/*
t_list_int	*ft_lstnew(int value)
{
	t_list_int	*newnodo;

	newnodo = (t_list_int *)malloc(sizeof(t_list_int));
	if (!newnodo)
		return (NULL);
	newnodo->value = value;
	newnode->index = 0;
	newnodo->next = NULL;
	return (newnodo);
}
*/
