#include <iostream>

struct Node
{
	int count = 0;
	Node* child[26];

	Node()
	{
		for (int i = 0; i < 26; ++i)
		{
			this->child[i] = NULL;
		}
	}
};

Node* head = new Node;

void Init(void)
{
}

void insert(char in[])
{
	Node* cur = head;

	for (int i = 0; in[i] != NULL; ++i)
	{
		Node* new_node = new Node;

		if (cur->child[in[i] - 'a'] == NULL)
		{
			cur->child[in[i] - 'a'] = new_node;
		}

		cur = cur->child[in[i] - 'a'];
	}

	++(cur->count);
}

int search(char in[])
{
	Node* cur = head;

	for (int i = 0; in[i] != NULL; ++i)
	{
		if (cur->child[in[i] - 'a'] == NULL)
		{
			std::cout << "count : " << "zero" << std::endl;
			return 0;
		}

		cur = cur->child[in[i] - 'a'];
	}

	std::cout << "count : " << cur->count << std::endl;
	return cur->count;
}

void remove(char in[])
{
	Node* cur = head;

	for (int i = 0; in[i] != NULL; ++i)
	{
		if (cur->child[in[i] - 'a'] == NULL)
		{
			return;
		}

		cur = cur->child[in[i] - 'a'];
	}

	cur->count = 0;
}

int main(void)
{
	char val1[] = "abe";
	char val2[] = "bcd";
	char val3[] = "ab";

	insert(val1);
	insert(val1);
	search(val1); // 2

	insert(val1);
	search(val1); // 3

	search(val2); // 0

	search(val3); // 0

	remove(val1);
	search(val1); // 0

	return 0;
}