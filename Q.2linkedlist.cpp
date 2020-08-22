#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node{
	int data;
	struct node *next;
};
struct node *newnode,*head,*temp;
void create()
{
	head=0;
	int choice;
	while(choice)
	{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	head=newnode=temp;
	else
	{
		temp->next=newnode;
		temp=newnode;
	}
	printf("do you want to continue(1,0)");
	scanf("%d",&choice);
}
}
void display()
{
	temp=head;
	while(temp==0)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	
}
int main()
{
	int ch;
	printf("enter your choice \n1.create\n2.display\n3.exit\n");
	scanf("%d",ch);
	while(1){
		switch(ch)
		{
			case 1:
				create();
				break;
			case 2:
				display();
				break;
		
			case 3:
				exit(0);
				break;
			default :
				printf("wrong choice");
				break;
		}
	}
	return 0;
}

