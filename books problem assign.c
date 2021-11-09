#include<stdio.h>
#include<stdlib.h>
struct node{
	int id;
	char b_name[100];
	char b2_name[100];
	char b3_name[100];
	struct node *next;
};
struct node *head=NULL;
struct node *tail =NULL;
 
 int creat()
 {
 	int n,i,j;
 	printf("Enter the total no of racks:");
 	scanf("%d",&j);
 	struct node *p;
 	for(i=0;i<j;i++)
 	{
 		int n;
 		p = (struct node*)malloc(sizeof(struct node));
 		printf("\nPRESS 1 IF U WANT TO FULL [%d]TH RACK OTHERWISE PRESS ANY DIGIT EXCEPT 1:\n",i+1);
 		scanf("%d",&n);
 		if(n==1)
 		{
 			
 	            printf("Enter the book ID:");
 				scanf("%d",&p->id);
 				printf("Enter the book name:");
 				scanf("%s",p->b_name);
 				printf("Enter the 2nd book name:");
 				scanf("%s",p->b2_name);
 				printf("Enter the 3rd book name:");
 				scanf("%s",p->b3_name);
 				p->next=NULL;
 			}
 			else{
			 
 				printf("\nEMPTY RACK\n");
	          }
 		
 		
 		
 		if(head == NULL)
		 {
		  head = tail =p;
		 }
		 else{
		 	tail->next=p;
		 	tail =p;
		 
		 }
	 	
 }
}
int insert()
{
	struct node *p;
	int pos;
	printf("\nEnter the position where u want to insert:\n");
	scanf("%d",&pos);
	p= (struct node *)malloc(sizeof(struct node));
	printf("Enter the id for insert perpous:");
	scanf("%d",&p->id);
	printf("\nNAME OF THE BOOK:\n");
	scanf("%s",p->b_name);
	printf("\nNAME OF THE 2nd BOOK:\n");
	scanf("%s",p->b2_name);
	printf("\nNAME OF THE 3rd BOOK:\n");
	scanf("%s",p->b3_name);
	if(pos ==1)
	{
		p->next=head;
		head =p;
		
	}
	else{
		struct node *t =head;
		int i=1;
		
		while(i<pos-1)
		{
			t = t->next;
			i++;
		}
		if(t == tail)
		  tail = p;
		  
			p->next =t->next;
			t->next =p;
		
	}
	
}
 void search()
 {
 	int data;
 	printf("\nEnter the data which u want to search:\n");
 	scanf("%d",&data);
 	
 	int f=0;
 	struct node *p=head;
 	while(p !=NULL)
 	{
 		if(p->id==data)
 		{
 			f=1;
 			break;
		 }
		 p=p->next;
 		
 		
	 }
	 if(f==1)
	 {
	 	printf("ID is present:");
	 }
	 else{
	 	printf("Id is not present:");
	 }
 			
 }
 int del_pos()
 {
 	int pos;
 	printf("\nENTER THE POSITION WHERE U WANT TO DELETE:\n");
 	scanf("%d",&pos);
 	struct node *p,*t;
 	int i=1;
 	if(head!=NULL)
 	{
 		if(pos==1)
 		{
 			t=head;
 			head=head->next;
 			free(t);
		 }
		 else{
		 	struct node *p=head;
		 	while(i<pos-1)
		 	{
		 		p=p->next;
		 		i++;
			 }
			 t=p->next;
			 p->next=p->next->next;
			 free(t);
			 if(p->next == NULL)
			 {
			 	tail =p;
			 }
		 }
 		
 		
 		
 		
 		
 		
 		
	 }
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }

 int print()
 {
 	struct node *p;
 	p= head;
 	if(head == NULL)
 	{
 		printf("Memory allocation is not possible");
	 }
	 else{
	 	while(p !=NULL)
	 	{
	 		printf("%d->",p->id);
	 		printf("%s->",p->b_name);
	 		printf("%s->",p->b2_name);
	 		printf("%s->",p->b3_name);
	 		p=p->next;
		 }
	 }
	
 }
 int main()
 {
 	
 	creat();
 	insert();
 	print();
 	search();
 	
 	print();
 	del_pos();
 	print();
 	
 	
 }
