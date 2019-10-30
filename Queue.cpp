#include "Queue.h"
#define Front 0

void Queue::enqueue(const char* value)
{
	queue.prepend(value);
}

void Queue::dequeue()
{
	queue.remove(queue.length() - 1);
}

const char* Queue::front() const
{
	return queue.at(Front);
}

bool Queue::isEmpty() const
{
	return queue.isEmpty();
}

void Queue::print() const
{
	queue.print();
}