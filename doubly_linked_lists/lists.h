#ifndef LISTS_H
#define LISTS_H

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/**
 * print_dlistint - prints length and elements
 * @h: head of list
 * Return: size_t value
 */
size_t print_dlistint(const dlistint_t *h);

/**
 * dlistint_len - length of linked list
 * @h: head of list
 * Return: size_t value
 */
size_t dlistint_len(const dlistint_t *h);

/**
 * add_dnodeint - adds node at top
 * @head: address of head linked lst
 * @n: number
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/**
 * add_dnodeint_end - adds node at end
 * @head: head address of linked list
 * @n: number of new value for new node
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/**
 * free_dlistint - frees list
 * @head: head of list to free
 */
void free_dlistint(dlistint_t *head);

/**
 * get_dnodeint_at_index - inserts node at index
 * @head: head address of linked list
 * @index: index of list to go
 * Return: address of new node inserted or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/**
 * sum_dlistint - sums up values of linked list
 * @head: head of address to get sum
 * Return: sum value
 */
int sum_dlistint(dlistint_t *head);

/**
 * insert_dnodeint_at_index - insert node at index?
 * @h: address of linked list
 * @idx: index to place list
 * @n: value of n
 * Return: return new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/**
 * delete_dnodeint_at_index - deletes node in list
 * @head: head of address
 * @index: index to delete
 * Return: success or fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
