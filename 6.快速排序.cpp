/*#include<iostream>

void printArray(int arr[], int length) {
	for (int i = 0;i < length;i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
int partition(int arr[], int i, int j) {
	int x = arr[i];
	while (i < j) {
		while (i < j && arr[j] >= x) {
			j--;
		}
		if (i < j) {
			arr[i] = arr[j];
			i++;
		}
		while (i < j && arr[i] < x) {
			i++;
		}
		if (i < j) {
			arr[j] = arr[i];
			j--;
		}
	}
	arr[i] = x;
	return i;
}
void quickSort(int arr[], int i, int j) {
	if (i < j) {
		int index = partition(arr, i, j);
		printArray(arr, 10);
		quickSort(arr, i, index - 1);
		quickSort(arr, index + 1, j);
	}
}
int main() {
	int arr[10] = { 9,1,5,2,0,8,6,3,7,4 };
	quickSort(arr, 0, 9);
	printArray(arr, 10);

	return 0;
}*/