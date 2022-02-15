// https://www.studytonight.com/data-structures/doubly-linked-list
#include <iostream>

struct node
{
	int data;
	node* prev;
	node* next;
};

class DoublyLinkedList
{
public:
	node* front;  	// points to first node of list
	node* end;   	// points to first las of list

	DoublyLinkedList()
	{
		front = NULL;
		end = NULL;
	}
	void add_front(int);
	void add_after(node*, int);
	void add_before(node*, int);
	void add_end(int);
	void delete_node(node*);
	void display_forward();
	void display_backward();

	void display();
	void display(node* head);
};

void DoublyLinkedList::add_front(int d)
{
	// Creating new node
	node* temp;
	temp = new node();
	temp->data = d;
	temp->prev = NULL;
	temp->next = front;

	// List is empty
	if (front == NULL)
		end = temp;

	else
		front->prev = temp;

	front = temp;
}

void DoublyLinkedList::add_before(node* n, int d)
{
	node* temp;
	temp = new node();
	temp->data = d;
	temp->next = n;
	temp->prev = n->prev;
	n->prev = temp;

	//if node is to be inserted before first node
	if (n->prev == NULL)
		front = temp;
}

void DoublyLinkedList::add_after(node* n, int d)
{
	node* temp;
	temp = new node();
	temp->data = d;
	temp->prev = n;
	temp->next = n->next;
	n->next = temp;

	//if node is to be inserted after last node
	if (n->next == NULL)
		end = temp;

}

void DoublyLinkedList::add_end(int d)
{
	// create new node
	node* temp;
	temp = new node();
	temp->data = d;
	temp->prev = end;
	temp->next = NULL;

	// if list is empty
	if (end == NULL)
		front = temp;
	else
		end->next = temp;
	end = temp;
}

void DoublyLinkedList::delete_node(node* n)
{
	// if node to be deleted is first node of list
	if (n->prev == NULL)
	{
		front = n->next; //the next node will be front of list
		front->prev = NULL;
	}
	// if node to be deleted is last node of list
	else if (n->next == NULL)
	{
		end = n->prev;   // the previous node will be last of list
		end->next = NULL;
	}
	else
	{
		//previous node's next will point to current node's next
		n->prev->next = n->next;
		//next node's prev will point to current node's prev
		n->next->prev = n->prev;
	}
	//delete node
	delete(n);
}

void DoublyLinkedList::display_forward()
{
	node* trav;
	trav = front;
	while (trav != NULL)
	{
		std::cout << trav->data << std::endl;
		trav = trav->next;
	}
}

void DoublyLinkedList::display_backward()
{
	node* trav;
	trav = end;
	while (trav != NULL)
	{
		std::cout << trav->data << std::endl;
		trav = trav->prev;
	}
}

void DoublyLinkedList::display()
{
	display(front);
}

void DoublyLinkedList::display(node* head)
{
	if (head == NULL)
	{
		std::cout << "\n";
	}
	else
	{
		std::cout << head->data << " ";
		display(head->next);
	}
	//std::cout << std::endl;
}

int main(void)
{
	DoublyLinkedList* list = new DoublyLinkedList;

	list->add_end(10);
	list->add_end(20);
	list->add_front(30);

	//list->display();
	//list->display_forward();
	list->display_backward();

	return 0;
}