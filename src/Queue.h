/*
 ============================================================================
 Name        : Queue.h
 Author      : Alberto Novelle
 ============================================================================
 */

#ifndef QUEUE_H_
#define QUEUE_H_

typedef struct nodeQueue_t {
	int data;
	struct NodeQ* prev;
}NodeQ;


typedef struct queue_t{
	NodeQ* front;
	NodeQ* rear;
	unsigned size;
}Queue;

Queue* initQueue();

NodeQ* createNode(int data);

void enqueue(Queue* q, int data);

NodeQ* dequeue(Queue* q);

void reversingQueue(Queue* q);

#endif /* QUEUE_H_ */
