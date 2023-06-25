#include "monty.h"
/**
  *f_sub-A sustration
  *@head:this is a stack head
  *@counter:a line_number
  *Return: nothing return
 */
void f_sub(stack_t **head, unsigned int counter)

	stack_t *aux;
	int s, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	s = aux->next->n - aux->n;
	aux->next->n = s;
	*head = aux->next;
	free(aux);

