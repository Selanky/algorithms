/*#include<iostream>

void printArray(int arr[], int length) {
	for (int i = 0;i < length;i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
void insertSort(int arr[], int length) {
	for (int i = 0;i < length;i++) {
		for (int j = 0;j < i;j++) {
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				for (int k = i - 1;k >= j;k--) {
					arr[k + 1] = arr[k];
				}
				arr[j] = temp;
			}
		}
		printArray(arr, length);
	}
}
int main() {
	int arr[10] = { 1,4,0,8,5,9,6,3,7,2 };
	printArray(arr, 10);
	insertSort(arr, 10);
	printArray(arr, 10);

	return 0;
}*/