#include "stack.h"

#define TOP 1

const char* Stack::top() const
{
	return stack.at(TOP);
}

void Stack::pop()
{
	stack.remove(TOP);
}

void Stack::push(const char* data)
{
	stack.prepend(data);
}

bool Stack::isEmpty() const
{
	return stack.isEmpty();
}

void Stack::print() const
{
	stack.print();
}