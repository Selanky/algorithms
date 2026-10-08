/*#include<iostream>

#define NUM 10
typedef struct Hash {
	int num;
	char* data;
}Hash;
Hash* initHash() {
	Hash* H = (Hash*)malloc(sizeof(Hash));
	H->num = 0;
	H->data = (char*)malloc(sizeof(char) * NUM);
	for (int i = 0;i < NUM;i++) {
		H->data[i] = 0;
	}
	return H;
}
int hash(int data) {
	return data % NUM;
}
void put(Hash* H, char data) {
	int index = hash(data);
	if (H->data[index] != 0) {
		int count = 1;
		while (H->data[index] != 0) {
			index = hash(hash(data) + count);
			count++;
		}
	}
	H->data[index] = data;
	H->num++;
}
int main() {
	Hash* H = initHash();
	put(H, 'A');
	put(H, 'K');
	std::cout << H->data[0] << std::endl;
	std::cout << H->data[1] << std::endl;

	return 0;
}*/