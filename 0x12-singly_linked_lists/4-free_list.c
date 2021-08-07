#include "lists.h"

/**
 * r_free_list - a func that frees malloc'ed memory recursively
 * @ptr: pointer to the linked list
 **/

void r_free_list(list_t *ptr)
{
if (ptr->next != NULL)
r_free_list(ptr->next);
free(ptr->str);
free(ptr);
}

/**
 * free_list - frees all malloc'ed memory associated with a linked list
 * @head: pointer to head of linked list
 */

void free_list(list_t *head)
{
if (head == NULL)
return;
r_free_list(head);
}
