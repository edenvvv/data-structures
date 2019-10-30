#include "Node.h"

void Node::set_data(const char* m_data)
{
	data = new char[strlen(m_data) + 1];
	strcpy(data, m_data);
}

Node::Node(const char* m_data, Node* m_next)
{
	data = new char[strlen(m_data) + 1];
	strcpy(data, m_data);
	next = m_next;
}

Node::Node(const Node &copy)
{
	data = new char[strlen(copy.data) + 1];
	strcpy(data, copy.data);
	next = copy.next;
}

Node::~Node()
{
	delete[] data;
}