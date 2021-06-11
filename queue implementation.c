#include<stdio.h>
#include<stdlib.h>
#define size 5
struct queue {
	int ary[size];
	int rear;
	int front;
}q;
void enqueue(struct queue *q,int num){
	if(q->rear==size-1){
		printf("\n queue is full");		
}
else{
	q->rear=q->rear+1;
	q->ary[q->rear]=num;
}
}
void dequeue(struct queue *q){
	int dt;
	if(q->rear<q->front){
	printf("\n queue is empty");	
	}
	else{
		dt=q->ary[q->front];
		q->front=q->front+1;
		printf("\n deleted item is %d ",dt);
	}
}
void display(struct queue *q){
	int i;
	if(q->rear<q->front){
		printf("\nqueue is empty");
	}
	else{
	printf("\n content of queue :\n");
	for(i=q->front;i<=q->rear;i++){
		printf(" |%d|\t",q->ary[i]);
			
	}
	}
	
}

int  main(){
	int choice,num;
q.rear=-1;
q.front=0;	
printf("\n1.insert\n2.delete\n3.display\n4.exit\n");
while(1){
	printf("\n enter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\n enter the number you want to insert to queue :\t");
			scanf("%d",&num);
			enqueue(&q,num);
			break;
		case 2:
			dequeue(&q);
			break;
		case 3:
		display(&q);
		break;
		case 4:
		exit(0);	
	}
}
return 0;

}
