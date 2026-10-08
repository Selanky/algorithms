/*#include<iostream>

void printArray(int arr[], int length) {
	for (int i = 0;i < length;i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
void shellSort(int arr[], int length, int step) {
	for (int i = 0;i < length;i++) {
		for (int j = 0;j < length;j += step) {
			for (int k = i;k < j;k += step) {
				if (arr[j] < arr[k]) {
					int temp = arr[j];
					for (int l = j - step;l >= k;l -= step) {
						arr[l + step] = arr[l];
					}
					arr[k] = temp;
				}
			}
		}
	}
}
int main() {
	int arr[10] = { 1,3,0,9,2,4,7,5,8,6 }, step[3] = { 5,3,1 };
	for (int i = 0;i < 3;i++) {
		shellSort(arr, 10, step[i]);
		printArray(arr, 10);
	}

	return 0;
}*/