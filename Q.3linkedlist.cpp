#include<stdio.h>
#include<stdlib.h>
struct Node 
{ 
int data; 
struct Node *next; 
}; 
void push(struct Node** head_ref, int new_data) 
{ 
	/* 1. allocate node */
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 

	struct Node *last = *head_ref; /* used in step 5*/

	/* 2. put in the data */
	new_node->data = new_data; 

	/* 3. This new node is going to be the last node, so make next of 
		it as NULL*/
	new_node->next = NULL; 

	/* 4. If the Linked List is empty, then make the new node as head */
	if (*head_ref == NULL) 
	{ 
	*head_ref = new_node; 
	return; 
	} 

	/* 5. Else traverse till the last node */
	while (last->next != NULL) 
		last = last->next; 

	/* 6. Change the next of last node */
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
int a[]={9,0,4,5,6,7,0,0,6,4},n=10,i=0;
for(i=0;i<n;i++)
{
push(&head, a[i]);	
}
printf("\n Created Linked list is: "); 
creatList(head); 

return 0; 
} 
