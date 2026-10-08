/*#include<iostream>

void printArray(int arr[], int length) {
	for (int i = 0;i < length;i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
void bubbleSort(int arr[], int length) {
	for (int i = 0;i < length - 1;i++) {
		for (int j = 0;j < length - 1 - i;j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main() {
	int arr[10] = { 1,3,0,9,2,8,5,7,4,6 };
	printArray(arr, 10);
	bubbleSort(arr, 10);
	printArray(arr, 10);

	return 0;
}*/