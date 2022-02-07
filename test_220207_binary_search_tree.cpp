// https://www.studytonight.com/data-structures/binary-search-tree
#include <iostream>

struct tree_node
{
	int data;
	tree_node* left, * right;
};

class BST
{
	tree_node* root;
	void insert(tree_node*, int);
	bool search(int, tree_node*);
	void inorder(tree_node*);
	void preorder(tree_node*);
	void postorder(tree_node*);

public:
	BST()
	{
		root = NULL;
	}
	void insert(int);
	bool search(int key);
	void inorder();
	void preorder();
	void postorder();
};

void BST::insert(tree_node* node, int d)
{
	// element to be inserted is lesser than node’s data
	if (d < node->data)
	{
		// if left subtree is present
		if (node->left != NULL)
			insert(node->left, d);

		// create new node
		else
		{
			node->left = new tree_node;
			node->left->data = d;
			node->left->left = NULL;
			node->left->right = NULL;
		}
	}

	// element to be inserted is greater than node’s data
	else if (d >= node->data)
	{
		// if left subtree is present
		if (node->right != NULL)
			insert(node->right, d);

		// create new node
		else
		{
			node->right = new tree_node;
			node->right->data = d;
			node->right->left = NULL;
			node->right->right = NULL;
		}
	}

}

void BST::insert(int d)
{
	if (root != NULL)
		insert(root, d);
	else
	{
		root = new tree_node;
		root->data = d;
		root->left = NULL;
		root->right = NULL;
	}
}
bool BST::search(int d, tree_node* node)
{
	bool ans = false;

	// node is not present
	if (node == NULL)
		return false;

	// Node’s data is equal to value searched
	if (d == node->data)
		return true;

	// Node’s data is greater than value searched
	else if (d < node->data)
		ans = search(d, node->left);

	// Node’s data is lesser than value searched
	else
		ans = search(d, node->right);

	return ans;
}

bool BST::search(int d)
{
	if (root == NULL)
		return false;
	else
		return  search(d, root);
}

void BST::preorder(tree_node* node)
{
	if (node != NULL)
	{
		// std::cout << node->data << std::endl;
		std::cout << node->data << " ";
		preorder(node->left);
		preorder(node->right);
	}
}

void BST::postorder(tree_node* node)
{
	if (node != NULL)
	{
		postorder(node->left);
		postorder(node->right);
		// std::cout << node->data << std::endl;
		std::cout << node->data << " ";
	}
}

void BST::inorder(tree_node* node)
{
	if (node != NULL)
	{
		inorder(node->left);
		// std::cout << node->data << std::endl;
		std::cout << node->data << " ";
		inorder(node->right);
	}
}

void BST::preorder()
{
	if (root == NULL)
		std::cout << "TREE IS  EMPTY\n";
	else
		preorder(root);
}

void BST::postorder()
{
	if (root == NULL)
		std::cout << "TREE IS  EMPTY\n";
	else
		postorder(root);
}

void BST::inorder()
{
	if (root == NULL)
		std::cout << "TREE IS EMPTY\n";
	else
		inorder(root);
}

int main(void)
{
	BST bst;

	bst.insert(20);

	bst.insert(10);
	bst.insert(30);

	bst.insert(5);
	bst.insert(25);
	bst.insert(35);

	if (bst.search(10))
		std::cout << "111" << std::endl;
	else
		std::cout << "222" << std::endl;

	if (bst.search(11))
		std::cout << "333" << std::endl;
	else
		std::cout << "444" << std::endl;

	bst.preorder();
	std::cout << std::endl;

	bst.postorder();
	std::cout << std::endl;

	return 0;
}

// output :
// 111
// 444
// 20 10 5 30 25 35
// 5 10 25 35 30 20