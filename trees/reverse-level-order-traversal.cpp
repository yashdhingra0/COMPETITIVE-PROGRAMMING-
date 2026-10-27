
// Function to print reverse level order traversal of given binary tree
void reverseLevelOrderTraversal(Node* root)
{
	if (root == nullptr)
		return;

	// create an empty queue and enqueue root node
	list<Node*> queue;
	queue.push_back(root);

	// create a stack to reverse level order nodes
	stack<int> stack;

	// pointer to store current node
	Node* curr = nullptr;

	// loop till queue is empty
	while (queue.size())
	{
		// process each node in queue and enqueue their children
		curr = queue.front();
		queue.pop_front();

		// push current node to stack
		stack.push(curr->key);

		// important - process right node before left node
		if (curr->right)
		   queue.push_back(curr->right);

		if (curr->left)
		   queue.push_back(curr->left);
	}

	// pop all nodes from the stack and print them
	while (!stack.empty())
	{
		cout << stack.top() << " ";
		stack.pop();
	}
}

USING HASHING ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
// traverse the tree in pre-order fashion and store nodes into the map
// corresponding to their level
void preorder(Node *root, int level, auto &map)
{
	// base case: empty tree
	if (root == nullptr)
		return;

	// insert current node and its level into the map
	map[level].push_back(root->key);

	// recur for left and right subtree by increasing level by 1
	preorder(root->left, level + 1, map);
	preorder(root->right, level + 1, map);
}

// Recursive function to do reverse level order traversal of given binary tree
void levelOrderTraversal(Node *root)
{
	// create an empty map to store nodes between given levels
	unordered_map<int, vector<int>> map;

	// traverse the tree and insert its nodes into the map
	// corresponding to the their level
	preorder(root, 1, map);

	// iterate through the map using reverse iterator and print all nodes
	// present in very level
	for (int i = map.size(); i > 0; i--)
	{
		cout << "Level " << i << ": ";
		for (int i: map[i])
		   cout << i << " ";

		cout << endl;
	}
}












