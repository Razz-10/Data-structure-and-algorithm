// program to implement of stack
#include<stdio.h>
#include<stdlib.h>
#define size 5

	struct stack{
		int item[size];
		int top;
	}s;
	void push(struct stack *s,int num){
 	if(s->top==size-1){
 		printf("\n stack overflow");
	 }
	 else{
 	s->top=s->top+1;
	 s->item[s->top]=num;
} 
}	

void pop(struct stack *s){
	int dt;
	if(s->top==-1){
	printf("\n stack is empty");
	}
	else{
		dt=s->item[s->top];
		s->top=s->top-1;
		printf("\n poped element is %d",dt);
		
	}
}
void display( struct stack *s){
	int i;
	if(s->top==-1){
		printf("\n stack is empty");
	}
	else{
		printf("\n content of stack  :\n");
		for(i=s->top;i>=0;i--){
			printf("\n |%d|\n",s->item[i]);
		}
	}
}
int main(){
int choice,num;
s.top=-1;
printf("1.push\n2.pop\n3.display\n4.Exit");
while(1){
	printf("\n enter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\n enter the number you want to push:\n");
			scanf("\t %d",&num);
			push(&s,num);
			break;
			case 2:
			pop(&s);
			break;
			case 3:
			display(&s);
			break;
			case 4:
			exit(0);
	}
	}
	return 0;
}

