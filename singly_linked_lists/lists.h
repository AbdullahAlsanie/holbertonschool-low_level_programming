#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * size_t print_list - print all the elemnts of a list_t
 * @h: the list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h);

/**
 * list_len - count the number of elements in a linked list_t list.
 * @h: pointer to the head
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h);

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: addres to the head of list_t
 * @str: the string of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str);
#endif
