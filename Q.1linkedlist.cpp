#include<stdio.h>
#include<stdlib.h>
struct Node 
{ 
int data; 
struct Node *next; 
}; 
void push(struct Node** head, int new_data) 
{ 
	
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 

	struct Node *last = *head; 
	new_node->data = new_data; 


	new_node->next = NULL; 

	if (*head == NULL) 
	{ 
	*head = new_node; 
	return; 
	} 
	while (last->next != NULL) 
		last = last->next; 
	last->next = new_node; 
	return; 
} 

void creatList(struct Node *node) 
{ 
while (node != NULL) 
{ 
	printf(" %d ", node->data); 
	node = node->next; 
} 
} 
 int main() 
{ 

struct Node* head = NULL; 
push(&head, 3); 
push(&head, 7); 
push(&head, 1); 
push(&head, 4); 
push(&head, 5); 
push(&head, 9);
printf("\n Created Linked list is: "); 
creatList(head); 

return 0; 
} 
