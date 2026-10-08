/*#include<iostream>

#define MAX 10
int map[MAX][MAX], inDegree[MAX], n;
void topologicalSort() {
	int S[MAX];
	int top = -1;
	for (int i = 0;i < n;i++) {
		if (inDegree[i] == 0) {
			S[++top] = i;
		}
	}
	while (top != -1) {
		int node = S[top--];
		std::cout << node << " ";
		for (int i = 0;i < n;i++) {
			if (map[node][i] == 1) {
				inDegree[i]--;
				if (inDegree[i] == 0) {
					S[++top] = i;
				}
			}
		}
	}
	std::cout << std::endl;
}
int main() {
	std::cin >> n;
	for (int i = 0;i < n;i++) {
		inDegree[i] = 0;
		for (int j = 0;j < n;j++) {
			std::cin >> map[i][j];
			if (map[i][j] == 1) {
				inDegree[j]++;
			}
		}
	}
	topologicalSort();

	return 0;
}*/