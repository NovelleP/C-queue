/*
 ============================================================================
 Name        : Queue.c
 Author      : Alberto Novelle
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

Queue* initQueue() {
	Queue* q = malloc(sizeof(Queue));
	q->front = NULL;
	q->rear = NULL;
	q->size = 0;

	return q;
}

NodeQ* createNode(int data) {
	NodeQ* node = malloc(sizeof(NodeQ));
	node->data = data;
	node->prev = NULL;

	return node;
}

void enqueue(Queue* q, int data) {
	NodeQ* n = createNode(data);
	if(q->front == NULL)
		q->front = q->rear = n;
	else{
		q->rear->prev = n;
		q->rear = n;
	}
	q->size++;
}

NodeQ* dequeue(Queue* q) {
	if(q->front == NULL) //empty queue
		return NULL;

	NodeQ* n = q->front;
	if(q->front == q->rear) //queue only has 1 node => rear = NULL
		q->rear = q->front->prev;
	q->front = q->front->prev;
	q->size--;

	return n;
}

void reversingQueue(Queue* q) {
	if(q->front != NULL) {
		NodeQ* aux = dequeue(q);
		if(q->front != NULL)
			reversingQueue(q);
		enqueue(q, aux->data);
		free(aux);
	}
}
