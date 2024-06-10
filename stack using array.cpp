#include<stdio.h>
#define size 10
void push(int);
void pop();
void display();
int stack[size],top=-1;
int main()
{
	int value,choice,exit;
	while(1){
		printf("\n\n**MENU**\n");
		printf("1.Push\n2.Pop\n3.Display\n4.Exit");
		scanf("%d",&choice);
		switch(choice){
			case 1:
		  	printf("Enter the value to be insert");
			scanf("%d",&value);
			push(value);
			 break;
			 case 2: 
			 pop();
			 break;
			 case 3:
			 display();
			 break;
			default:
			printf("\n Wrong selection!!Try again");	 	
		}
	}
}
void push(int value){
	if(top==size-1){
		printf("\n Stack is full!! Insertion is not possible");
	}
	else{
		top++;
		stack[top]=value;
		printf("\n Insertion successful");
	}
}
void pop()
{
	if(top==-1){
		printf("\n Stack is empty Deletion not possible");
	}else{
		printf("Deleted: %d",stack[top]);
		top--;
	}
}
void display()
{
	
	if(top==-1){
		printf("\n Stack is empty");
	}
	else{
		int i;
		printf("Stack elements are:\n");
		for(i=top; i>=0; i--)
		printf("%d\n",stack[i]);
	}
}
