#include "lists.h"

/**
 * _strlen - length of a string
 * @s: a pointer to an int that will be updated
 *
 * Return: void
 */

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0') /* Count character of a string*/
		i++;
	
	return (i);
}

/**
 * add_node_end - add a new node at end of list
 * @head: pointer
 * @str: string
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	/*using malloc*/
	new_node = malloc(sizeof(list_t));


	if (new_node == NULL)
		return (NULL);

	new_node->str = strup(str); /*Assessing data*/
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;
		
		last_node->next = new_node;
	}

	return (*head);
}
