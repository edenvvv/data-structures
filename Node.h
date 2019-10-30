#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;




class Node
{
private:
	char* data;
	Node* next;
public:
	Node() { data = '\0', next = '\0'; };
	Node(const char* m_data, Node* m_next);
	Node(const Node &copy);
	void set_data(const char* m_data);
	void print_data() { cout << data << endl; };
	void set_next(Node* m_next) { next = m_next; };
	const char* get_data() const { return data; };
	Node* get_next() { return next; };
	~Node();
};