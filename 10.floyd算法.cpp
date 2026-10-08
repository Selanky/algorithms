/*#include<iostream>
#include<climits>

#define V 100
int map[V][V], dist[V][V], n;
void floyd() {
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			dist[i][j] = map[i][j];
		}
	}
	for (int k = 0;k < n;k++) {
		for (int i = 0;i < n;i++) {
			for (int j = 0;j < n;j++) {
				if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX && dist[i][k] + dist[k][j] < dist[i][k]) {
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (dist[i][j] == INT_MAX) {
				std::cout << "INF\t";
			}
			else {
				std::cout << dist[i][j] << "\t";
			}
		}
		std::cout << std::endl;
	}
}
int main() {
	std::cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			std::cin >> map[i][j];
			if (map[i][j] == -1) {
				map[i][j] = INT_MAX;
			}
		}
	}
	floyd();

	return 0;
}*/