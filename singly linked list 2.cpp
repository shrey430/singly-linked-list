#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node*next;
}*start=NULL;
int main()
{ 
int add_beg(int );
int add_end(int );
int del_beg();
int del_end();
int display();
int choice;
	while(1)
	{
		printf("enter preffered choice:\n1.add from begining\n2.add from end\n3.del from beginning\n4.del from end\n5.display\n");
		scanf("%d",choice);
		switch(choice)
		{
			case 1:
					add_beg(10);
					break;
			case 2:
				    add_end(11);
					break;
			case 3:	
				    del_beg();
					break;
			case 4:
				    del_end();
				    break;
		    case 5:
		    	    display();
		    	    break;
			case 6:
				     exit(1);
					 break;
					 default:;
				     printf("choice is wrong");
			 
		}
		
    }
}
int add_beg(int data)
{
	struct node*newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=data;
	newnode->next=start;
	start=newnode;
}
int add_end(int data)
{
	struct node*newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=data;
	newnode->next=NULL;
	temp=start;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
}
int del_beg()
{
	struct node*temp;
	temp=start;
	start=start->next;
	free(temp);
}
int del_end()
{
	struct node*temp,*ptr;
	temp=start;
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	ptr=temp->next;
	temp->next=NULL;
	free(ptr);
}
void display()
{
	struct node*temp;
	temp=start;
	printf("{");
	while(temp!=NULL)
	{
		printf("%d",temp->info);
		temp=temp->next;
	}
	printf("}\n");
}

