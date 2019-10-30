#pragma once
#include <iostream>
#include <sstream>
#include "Node.h"
using namespace std;

#ifndef CPP_LINKEDLIST_H
#define CPP_LINKEDLIST_H



class LinkedList {
private:

	/**LinkedList
	 * Points to the beginning of the list.
	 */
	Node* head;

	/**
	 * Points to the end of the list.
	 *
	 * @since Lab4
	 */
	Node* tail;

	/**
	 * Maintains the length of the list.
	 *
	 * @since Lab4
	 */
	unsigned int size;

	/**
	 * Alias of the node constructor, will also increment the list size.
	 *
	 * @param data  The data value stored in the current node.
	 * @param next  The address of the next node.
	 * @since Lab4
	 */
	Node* createNode(const char* data = nullptr, Node* next = nullptr);


	/**
	 * Get a node at a given index.
	 *
	 * @param index     The index to retrieve.
	 * @since Lab4
	 */
	Node* get(int index) const;

public:
	/**
	 * Create an empty list.
	 */
	LinkedList();

	/**
	 * Copy an existing list by reference.
	 *
	 * @param other		The existing list to copy.
	 * @since Lab3
	 */
	LinkedList(const LinkedList& other);


	/**
	 * Remove all node from the list.
	 */
	~LinkedList() ;

	/**
	 * Add a new node to the beginning of the list.
	 *
	 * @param data  The data value stored in the new node.
	 */
	void prepend(const char* data);

	/**
	 * Add a new node to the end of the list.
	 *
	 * @param data  The data value stored in the new node.
	 */
	void append(const char* data);

	/**
	 * Insert a new node at the given index.
	 *
	 * @param data  The data value stored in the new node.
	 * @param index The index at which the new node should be stored.
	 */
	void insert(const char* data, int index);

	/**
	 * Remove the node at the given index.
	 *
	 * @param index The index at which the node should be removed.
	 */
	void remove(int index);

	/**
	 * Whether or not the list contains a given value.
	 *
	 * @param value The value to search for in the list.
	 * @return      True if the value was found.
	 */
	bool contains(const char* value) const;

	/**
	 * Whether or not the current list contains nodes.
	 *
	 * @return      True if at least one node exists.
	 */
	bool isEmpty() const;

	/**
	 * Get the length of the list.
	 *
	 * @return      The amount of nodes in the list.
	 */
	unsigned length() const { return size; };

	/**
	 * Print the contents of the list.
	 */
	void print() const;

	/**
	 * Get the value of a node at a given index.
	 *
	 * @param index     The index to retrieve.
	 * @since Lab4
	 */
	const char* at(int index) const;

	/**
	 * Compare two lists to see if they contain the same values.
	 *
	 * @param other     The object to compare to.
	 * @since Lab4
	 */
	bool operator==(const LinkedList& other) const;



};

#endif