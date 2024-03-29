
#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;

	Node()
	{
		data = 0;
		next = NULL;
	}

	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

class Linkedlist
{
	Node *head;

public:
	Linkedlist() { head = NULL; }

	void insertNode(int);

	void printList();

	void deleteNode(int);
};

void Linkedlist::deleteNode(int nodeOffset)
{
	Node *temp1 = head, *temp2 = NULL;
	int ListLen = 0;

	if (head == NULL)
	{
		cout << "List empty." << endl;
		return;
	}

	while (temp1 != NULL)
	{
		temp1 = temp1->next;
		ListLen++;
	}

	if (ListLen < nodeOffset)
	{
		cout << "Index out of range"
			 << endl;
		return;
	}

	temp1 = head;

	if (nodeOffset == 1)
	{

		head = head->next;
		delete temp1;
		return;
	}

	while (nodeOffset-- > 1)
	{

		temp2 = temp1;

		temp1 = temp1->next;
	}

	temp2->next = temp1->next;

	delete temp1;
}

void Linkedlist::insertNode(int data)
{

	Node *newNode = new Node(data);

	// Assign to head
	if (head == NULL)
	{
		head = newNode;
		return;
	}

	// Traverse till end of list
	Node *temp = head;
	while (temp->next != NULL)
	{

		// Update temp
		temp = temp->next;
	}

	// Insert at the last.
	temp->next = newNode;
}

// Function to print the
// nodes of the linked list.
void Linkedlist::printList()
{
	Node *temp = head;

	// Check for empty list.
	if (head == NULL)
	{
		cout << "List empty" << endl;
		return;
	}

	// Traverse the list.
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}

// Driver Code
int main()
{
	Linkedlist list;

	// Inserting nodes
	list.insertNode(1);
	list.insertNode(2);
	list.insertNode(3);
	list.insertNode(4);

	cout << "Elements of the list are: ";

	// Print the list
	list.printList();
	cout << endl;

	list.deleteNode(2);

	cout << "Elements of the list are: ";
	list.printList();
	cout << endl;
	return 0;
}
