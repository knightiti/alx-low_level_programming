#include "lists.h"

/**
 * r_free_list - frees malloc'ed memory recursively - from tail to head
 * @ptr: pointer that works its way through the list
 **/
void r_free_list(listint_t *ptr)
{
if (ptr->next != NULL)
r_free_list(ptr->next);
free(ptr);
}

/**
 * free_listint - helper function for recursive list memory freer, r_free_list
 * @head: pointer to head of linked list
 **/
void free_listint(listint_t *head)
{
listint_t *tmp;

if (head == NULL)
return;
tmp = head;
r_free_list(tmp);
}
