#include <iostream>

struct Node
{
	int data;
	Node* nextNode;
};

class LinkedList
{
private:
	Node* head;
	Node* tail;

public:
	LinkedList()
	{
		// head와 tail의 포인터를 초기화
		head = NULL;
		tail = NULL;
	}

	void AddFrontNode(int n);
	void AddBackNode(int n);
	void InsertNode(Node* prevNode, int n);
	void DeleteNode(Node* prevNode);

	Node* GetHead()
	{
		return head;
	}

	void Display(Node* head);
};

void LinkedList::AddFrontNode(int n)
{
	Node* temp = new Node;
	temp->data = n;

	if (head == NULL)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		temp->nextNode = head;
		head = temp;
	}
}

void LinkedList::AddBackNode(int n)
{
	Node* temp = new Node;

	temp->data = n;
	temp->nextNode = NULL;

	if (head == NULL)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		tail->nextNode = temp;
		tail = temp;
	}
}

void LinkedList::InsertNode(Node* prevNode, int n)
{
	Node* temp = new Node;

	temp->data = n;

	temp->nextNode = prevNode->nextNode;

	prevNode->nextNode = temp;
}

void LinkedList::DeleteNode(Node* prevNode)
{
	Node* temp = prevNode->nextNode;

	prevNode->nextNode = temp->nextNode;

	delete temp;
}

void LinkedList::Display(Node* head)
{
	if (head == NULL)
	{
		std::cout << "\n";
	}
	else
	{
		std::cout << head->data << " ";
		Display(head->nextNode);
	}
	std::cout << std::endl;
}

int main()
{
	LinkedList a;

	a.AddBackNode(1);
	a.AddBackNode(2);
	a.AddBackNode(3);
	a.Display(a.GetHead());

	a.AddFrontNode(0);
	a.InsertNode(a.GetHead()->nextNode->nextNode, 9);
	a.Display(a.GetHead());

	a.DeleteNode(a.GetHead()->nextNode);
	a.Display(a.GetHead());
}