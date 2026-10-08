/*#include<iostream>

typedef struct Node {
	int index, data;
	struct Node* next;
}Node;
Node* initList() {
	Node* L = (Node*)malloc(sizeof(Node));
	L->index = 0;
	L->data = 0;
	L->next = NULL;
	return L;
}
Node* insertList(Node* L, int data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->index = L->index + 1;
	node->data = data;
	node->next = L->next;
	L->next = node;
	L->index++;
	return L;
}
int search(Node* L, int key) {
	Node* current = L;
	int index = 0;
	while (current != NULL) {
		if (current->data == key) {
			return index;
		}
		current = current->next;
		index++;
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