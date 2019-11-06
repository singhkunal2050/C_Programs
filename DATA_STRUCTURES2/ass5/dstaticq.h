/*DOUBLY STATIC QUEUE*/

#include<stdio.h>
#include<stdlib.h>
#define MAXSZ 10

struct queue
{
	int data[MAXSZ];
 	int front,rear;
}

void init(queue *q)
{
	q->front=q->rear=MAXSZ-1;
}

void addr(queue *q,int num)
{
	q->rear=(q->rear+1)%MAXSZ;
	q->data[q->rear]=num;
}

void addl(queue *q, int num)
{
	q->data[q->front]=num;
	q->front=(q->front+MAXSZ-1)%MAXSZ;
}


int remover(queue *q)
{
	int num;
	q->rear=(q->rear+MAXSZ+1)%MAXSZ;
	num=q->data[q->rear];
	return num;
}

int removel(queue *q)
{
	int num;
	q->front=(q->front+MAXSZ+1)%MAXSZ;
	num=q->data[q->rear];
	return num;
}

int isEmpty(queue *q)
{
	return q->rear==q->front==MAXSZ-1;
}

