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

void Insert(char in[])
{
	Node* cur = head;

	for (int i = 0; in[i] != NULL; ++i)
	{
		if (cur->child[in[i] - 'a'] == NULL)
		{
			Node* new_node = new Node;
			cur->child[in[i] - 'a'] = new_node;
		}

		cur = cur->child[in[i] - 'a'];
	}

	++(cur->count);
}

int Search(char in[])
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

void Remove(char in[])
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

	Insert(val1);
	Insert(val1);
	Search(val1); // 2

	Insert(val1);
	Search(val1); // 3

	Search(val2); // 0

	Search(val3); // 0

	Remove(val1);
	Search(val1); // 0

	return 0;
}