#include "monty.h"

/**
 * f_rotl - rotates the stack to the top
 * @head: stack head
 * @counter: not used
 * Return: no return
 */
void f_rotl(stack_t **head, unsigned int counter)
{
    stack_t *temp, *last;

    (void)counter;

    if (*head == NULL || (*head)->next == NULL)
        return;

    temp = *head;
    last = *head;

    while (last->next != NULL)
        last = last->next;

    *head = temp->next;
    (*head)->prev = NULL;
    temp->next = NULL;
    temp->prev = last;
    last->next = temp;
}

