#include <iostream>
#include <queue>

using namespace std;

class Node {

public:

	int data;
	Node* left;
	Node* right;

	Node(const int d) : data{d}, left{}, right{} { }

};

class Solution {

public:

	static Node* insert(Node* root, const int data) {

		if (!root) {

			return new Node(data);

		}
		else {

			Node* cur;

			if (data <= root->data) {

				cur = insert(root->left, data);

				root->left = cur;

			}
			else {

				cur = insert(root->right, data);

				root->right = cur;

			}

			return root;

		}
	}

	static void levelOrder(const Node* root) {

		if (!root) return;

		printf("%d ", root->data);

		queue<const Node*> lq{}, rq{};

		if (root->left) lq.emplace(root->left);
		
		if (root->right) rq.emplace(root->right);

		while (!lq.empty() || !rq.empty()) {
            
            const auto lq_size = lq.size();

			for (size_t i{}; i < lq_size; i++) {

				const Node* current = lq.front();
				
				lq.pop();

				printf("%d ", current->data);

				if (current->left) lq.emplace(current->left);

				if (current->right) lq.emplace(current->right);

			}
            
            const auto rq_size = rq.size();

			for (size_t i{}; i < rq_size; i++) {

				const Node* current = rq.front();

				rq.pop();

				printf("%d ", current->data);

				if (current->left) rq.emplace(current->left);

				if (current->right) rq.emplace(current->right);

			}

		}

	}

};

int main() {

	Solution myTree{};

	Node* root{};

	size_t t{}, data{};
	
	cin >> t;

	while (t > 0) {

		cin >> data;

		root = myTree.insert(root, data);

		t--;
	}

	myTree.levelOrder(root);

	return 0;
}
