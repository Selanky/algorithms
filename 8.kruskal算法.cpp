/*#include<iostream>

#define MAX_VER 10
#define MAX_EDGE 50
typedef struct Edge {
	int start, end, weight;
}Edge;
int n, m, map[MAX_VER][MAX_VER];
Edge edge[MAX_EDGE];
int parent[MAX_VER];
int find(int i) {
	if (parent[i] != i) {
		parent[i] = find(parent[i]);
	}
	return parent[i];
}
void Union(int x, int y) {
	int root_x = find(x);
	int root_y = find(y);
	parent[root_y] = root_x;
}
int compare(const void* a, const void* b) {
	return ((Edge*)a)->weight - ((Edge*)b)->weight;
}
void kruskal() {
	qsort(edge, m, sizeof(Edge), compare);
	for (int i = 0;i < n;i++) {
		parent[i] = i;
	}
	int total_weight = 0;
	for (int i = 0;i < m;i++) {
		Edge current = edge[i];
		int x = find(current.start);
		int y = find(current.end);
		if (x != y) {
			std::cout << "(" << current.start << "," << current.end << ")->" << current.weight << std::endl;
			total_weight += current.weight;
			Union(x, y);
		}
	}
	std::cout << total_weight << std::endl;
}
int main() {
	std::cin >> n >> m;
	for (int i = 0;i < m;i++) {
		for (int j = 0;j < n;j++) {
			std::cin >> map[i][j];
			if (map[i][j] != 0) {
				edge[i].start = i;
				edge[i].end = j;
				edge[i].weight = map[i][j];
			}
		}
	}
	kruskal();

	return 0;
}*/