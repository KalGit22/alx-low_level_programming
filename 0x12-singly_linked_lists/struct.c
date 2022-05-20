/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list node structure for alx project
 */

{
	char *str;
	unsigned int len;
	struct list_s *next;
}
