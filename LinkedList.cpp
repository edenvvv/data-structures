#include "LinkedList.h"
#include "Node.h"



Node* LinkedList::createNode(const char* data, Node* next)
{
	Node* unit = new Node(data, next);
	++size;
	return unit;
}

Node* LinkedList::get(int index) const
{
	Node* Node_num;
	if (index > size || index < 0)
	{
		return nullptr;
	}
	Node_num = head;//Gets the address the head points to
	for (int i = 1; i < index; ++i)
	{
		Node_num = Node_num->get_next();//Directs the node to the next node
	}
	return Node_num;
}

LinkedList::~LinkedList()
{
	Node* temp;
	for (int i = size; i > 0; --i)
	{
		temp = get(i);
		temp->~Node();
	}

}


LinkedList::LinkedList()
{
	head = nullptr;
	tail = nullptr;
	size = 0;
}

LinkedList::LinkedList(const LinkedList& other)
{
	LinkedList copy;
	for (int i = 0; i < other.size; i++)
	{
		copy.createNode(other.get(i)->get_data(), other.get(i)->get_next());
	}


}

void LinkedList::prepend(const char* data)
{
	
	Node* temp = createNode(data);
	temp->set_next(head);
	head = temp;

}
void LinkedList::append(const char* data)
{
	
	Node* temp = createNode(data);
	tail->set_next(temp);
	tail = temp;
}

void LinkedList::insert(const char* data, int index)
{
	if ((index<0)||(index>size))
	{
		return;
	}
	if (index==0)
	{
		prepend(data);
		return;

	}
	Node *add_node = createNode(data);
	Node *runner = get(index);
	
	add_node->set_next(runner->get_next());
	runner->set_next(add_node);

}

void LinkedList::remove(int index)
{
	Node* temp, *before, *next;

	if (index == 1)
	{
		temp = head;
		head = get(index+1);
		delete temp;
	}
	if (index == size)
	{
		before = get(index - 1);
		before = nullptr;
		delete tail;
		tail = before;

	}
	if ((index > 1) && (index < size))
	{
		before = get(index - 1);
		temp = get(index);
		next = get(index + 1);
		delete temp;
		before->set_next(next);
	}
	--size;
}
bool LinkedList::isEmpty() const
{
	if (head=='\0')
	{
		return true;
	}
	return false;
}
void LinkedList::print() const
{


	Node* Node_num;
	Node_num = head;//Gets the address the head points to
	while (Node_num)
	{
		cout << Node_num->get_data() << endl;
		Node_num = Node_num->get_next();//Directs the node to the next node
	}

	

}
const char* LinkedList::at(int index) const
{
	Node* temp = get(index);
	return temp->get_data();
}
bool LinkedList::operator==(const LinkedList& other) const
{
	LinkedList current_list;
	if (current_list.size != other.size)
	{
		return false;
	}
	for (unsigned int i = 0; i < size; ++i)
	{
		if (current_list.get(i)->get_data() != other.get(i)->get_data())
		{
			return false;
		}
	}
	return true;

}

bool LinkedList::contains(const char* value) const
{
	Node* Node_num;
	Node_num = head;//Gets the address the head points to
	if (Node_num->get_data() == value)//Checks whether the value is at the head
	{
		return true;
	}
	for (unsigned int i = 1; i < size; ++i)
	{
		if (Node_num->get_data() == value)//Checks whether the value is at the Nodes
		{
			return true;
		}
		Node_num = Node_num->get_next();//Directs the node to the next node

	}
	return false;

}