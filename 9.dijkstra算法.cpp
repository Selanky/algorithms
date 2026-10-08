/*#include<iostream>
#include<climits>

#define MAX_VER 100
int map[MAX_VER][MAX_VER];
int dist[MAX_VER];
int visited[MAX_VER];
int n;
void dijkstra(int start) {
	for (int i = 0;i < n;i++) {
		dist[i] = map[start][i];
		visited[i] = 0;
	}
	visited[start] = 1;
	dist[start] = 0;
	for (int i = 0;i < n - 1;i++) {
		int min = INT_MAX;
		int u = -1;
		for (int j = 0;j < n;j++) {
			if (!visited[j] && dist[j] < min) {
				min = dist[j];
				u = j;
			}
		}
		if (u == -1) {
			break;
		}
		visited[u] = 1;
		for (int j = 0;j < n;j++) {
			if (!visited[j] && map[u][j] < INT_MAX && dist[u] + map[u][j] < dist[j]) {
				dist[j] = dist[u] + map[u][j];
			}
		}
	}
}
int main() {
	std::cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			std::cin >> map[i][j];
			if (map[i][j] == 0) {
				map[i][j] = INT_MAX;
			}
		}
	}
	int start;
	std::cin >> start;
	dijkstra(start);
	for (int i = 0;i < n;i++) {
		if (dist[i] == INT_MAX) {
			std::cout << i << ":Infinity" << std::endl;
		}
		else {
			std::cout << i << ":" << dist[i] << std::endl;
		}
	}

	return 0;
}*/