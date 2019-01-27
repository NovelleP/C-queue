/*
 ============================================================================
 Name        : Example.c
 Author      : Alberto Novelle
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

int main() {
	Queue* q = initQueue(); //initialize empty queue
	enqueue(q, 5); //add element to queue
	NodeQ* aux = dequeue(q); //remove element from queue and save it in aux variable
	reversingQueue(q); //invert elements of queue

	return 0;
}
