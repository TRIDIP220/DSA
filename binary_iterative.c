#include<stdio.h>
#include<stdlib.h>
int i_b(int a[],int s,int e,int ele)
{
	int middle;
	while(s<=e)              
	{
		middle= (s+e)/2 ;
		if(a[middle] == ele)  
		{
			return middle;
		}
		if(a[middle] < ele)
		{
			s = middle +1; 
		}
		else if(a[middle] > ele) 
		{
			e = middle -1;
		}
		
	}
	return -1;
		
}


int recurs(int a[],int s,int e,int ele)
{
	int middle;
	if(s<=e)               
	{
		middle= (s+e)/2 ;
		if(a[middle] == ele)  
		{
			return middle;
		}
		if(a[middle] < ele)
		{
			return recurs(a, s, middle -1 , ele);
				
		}
		
		else if(a[middle] > ele) 
		{
			return recurs(a, s, middle -1 , ele);
		}
		
	}
	else{
		return -1;
		
	}
		
}

int main()
{
	
  	int a[10];                             
	int n,i,element;
	printf("\n Enter the value of n:\n");
	scanf("%d",&n);
	
	for(i=0 ; i< n ;i++)
	{
	    printf("\n Enter the element: \n ");
		scanf("%d",&a[i]);
	}
	printf("\n Enter the element which u want to find\n");
	scanf("%d",&element);  
	while(1) 
	{
		int choice,c;
		printf("\n Enter the choice 1= iterative , 2= recursive \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				 
	             c=recurs(a,0,n-1,element); 
				if(c <0) 
				{
					printf("\n Not found \n");
				}
				else{
					
				
	             printf("Found at %d",c);
	         }
	             break;
	         
	        case 2:
	        	
	        	c = i_b(a,0,n-1,element); 
				if(c <0 )
				{ printf("\n Not found \n");
			       }
			       else{
				   
				              
                 printf("\n Element found at index: %d" , c);
             }
                 break;
            case 3:
            	exit(0);
	
		}
		
	
	

}
	

}
