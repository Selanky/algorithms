/*#include<iostream>

typedef struct Node {
	int index, data;
	struct Node* next;
}Node;
Node* initList() {
	Node* L = (Node*)malloc(sizeof(Node));
	L->index = -1;
	L->data = -1;
	L->next = NULL;
	return L;
}
Node* insertList(Node* L, int data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	node->index = L->data + 1;
	Node* tail = L;
	while (tail->next) {
		tail = tail->next;
	}
	tail->next = node;
	L->data++;
	return L;
}
int search(Node* L, int key) {
	Node* left = L->next;
	Node* right = NULL;
	Node* current = L->next;
	while (current != NULL) {
		right = current;
		current = current->next;
	}
	while (left <= right) {
		Node* mid = left + (right - left) / 2;
		if (mid->data == key) {
			return mid->index;
		}
		else if (mid->data < key) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return -1;
}
int main() {
	Node* L = initList();
	int n, key;
	std::cin >> n >> key;
	for (int i = 0;i < n;i++) {
		insertList(L, i);
	}
	int res = search(L, key);
	if (res != -1) {
		std::cout << res << std::endl;
	}
	else {
		std::cout << "Not found!" << std::endl;
	}

	return 0;
}*/