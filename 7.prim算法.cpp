/*#include<iostream>

#define INF 99999
int n, m;
int map[10][10]{};
int prim() {
	int parent[10]{}, key[10]{};
	bool visited[10] = { false };
	for (int i = 0;i < n;i++) {
		key[i] = INF;
	}
	key[0] = 0;
	parent[0] = -1;
	for (int i = 0;i < n - 1;i++) {
		int min_key = INF, min_index = -1;
		for (int j = 0;j < n;j++) {
			if (min_key > key[j] && !visited[j]) {
				min_key = key[j];
				min_index = j;
			}
		}
		visited[min_index] = true;
		for (int j = 0;j < n;j++) {
			if (map[min_index][j] != 0 && !visited[j] && map[min_index][j] < key[j]) {
				parent[j] = min_index;
				key[j] = map[min_index][j];
			}
		}
	}
	int total = 0;
	std::cout << "Edge\tWeight" << std::endl;
	for (int i = 1;i < n;i++) {
		std::cout << parent[i] << " - " << i << "\t" << map[i][parent[i]] << std::endl;
		total += map[i][parent[i]];
	}
	std::cout << "Total weight of MST: " << total << std::endl;
	return 0;
}
int main() {
	std::cin >> n >> m;
	for (int i = 0;i < m;i++) {
		for (int j = 0;j < n;j++) {
			std::cin >> map[i][j];
		}
	}
	prim();

	return 0;
}*/