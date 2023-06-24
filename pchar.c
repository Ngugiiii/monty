#include "monty.h"

/**
 * f_pchar - prints the character at the top of the stack
 * @head: stack head
 * @counter: not used
 * Return: no return
 */
void f_pchar(stack_t **head, unsigned int counter)
{
    if (*head == NULL)
    {
        fprintf(stderr, "L%u: can't pchar, stack empty\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    if ((*head)->n < 0 || (*head)->n > 127)
    {
        fprintf(stderr, "L%u: can't pchar, value out of range\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    printf("%c\n", (*head)->n);
}

