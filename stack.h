#pragma once
#include "LinkedList.h"
class Stack {
public:
	/**
	 * Create an empty stack.
	 */
	Stack() :stack() {};
	/**
	* Remove all values from the stack.
	*/
	~Stack() {};
	/**
	* Get the value from the top of the stack.
	*/
	const char* top() const;
	/**
	* Remove the value from the top of the stack.
	*/
	void pop();
	/**
	* Place a new value at the top of the stack.
	*
	* @param data The data to be inserted.
	*/
	void push(const char* data);
	/**
	* Whether or not the current stack contains values.
	*
	* @return True if at least one value exists.
	*/
	bool isEmpty() const;
	/**
	* Print the contents of the stack.
	*/
	void print() const;



private:
	LinkedList stack;

};
