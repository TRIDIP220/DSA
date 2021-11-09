#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

struct node *tail=NULL;

int creat() 
 {
 	int value;
  struct node *p;
   
 p = (struct node*)malloc(sizeof(struct node));
 printf("Enter the data:");
 scanf("%d",&value);
 
 if(tail == NULL)// new node is only nose
 {
 	p->data = value;
 	p->next=p;// last item should be the first item
 	tail =p;
 	
 }
 else{
 	p->data=value;
 	p->next=tail->next;
 	tail->next=p;
   	
 }
	
}


int display()
{
	
	
	if(tail == NULL)
	{
		printf("\nEmpty linklist:\n");
	}
	else{
		struct node *p;
		p =tail->next;
		do
		{
			printf("%d->",p->data);
			p=p->next;
		}while(p != tail->next);
	}
	
}



int main()
{
	creat();
	creat();
	creat();
    display();
	
}
