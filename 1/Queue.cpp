#include "Queue.h"

void initQueue(Queue* q, unsigned int size) // initialize
{
	q->_array = new unsigned int[size];
	q->_size = size; 
	q->_count = 0; 
	q->_head = 0; 
}

void cleanQueue(Queue* q) // q is a pointer to the queue
{
	delete[] q->_array; 
	q->_array = nullptr; 
	q->_count = 0; 
	q->_head = 0; 
}

bool isEmpty(Queue* s) // s is a pointer to the queue
{
	return s->_count == 0;
}

bool isFull(Queue* s)
{
	return s->_count == s->_size;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (isFull(q))
	{
		return;
	}

	unsigned int tail = (q->_head + q->_count) % q->_size; // calculate the index of the tail of the queue
	q->_array[tail] = newValue;
	q->_count++;
}

int dequeue(Queue* q)
{
	if (isEmpty(q))
	{
		return -1;
	}

	int value = q->_array[q->_head];
	q->_head = (q->_head + 1) % q->_size; // move the head to the next element in a circular manner
	q->_count--;

	return value;
}