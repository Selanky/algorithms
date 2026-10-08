/*#include<iostream>

typedef struct Task {
	int id, duration, early_start, early_end, late_start, late_end;
}Task;
void calculateEarly(Task* T, int n) {
	for (int i = 0;i < n;i++) {
		T[i].early_end = T[i].early_start + T[i].duration;
		for (int j = i + 1;j < n;j++) {
			if (T[j].early_start < T[i].early_end) {
				T[j].early_start = T[i].early_end;
			}
		}
	}
}
void calculateLate(Task* T, int n) {
	T[n - 1].late_end = T[n - 1].early_end;
	T[n - 1].late_start = T[n - 1].late_end - T[n - 1].duration;
	for (int i = n - 2;i >= 0;i--) {
		T[i].late_end = T[n - 1].late_start;
		T[i].late_start = T[i].late_end - T[i].duration;
	}
}
int main() {
	int n;
	std::cin >> n;
	Task* T = (Task*)malloc(sizeof(Task) * n);
	for (int i = 0;i < n;i++) {
		T[i].id = i + 1;
		std::cin >> T[i].duration;
	}
	T[0].early_start = 0;
	calculateEarly(T, n);
	calculateLate(T, n);
	for (int i = 0;i < n;i++) {
		std::cout << T[i].id << "\t" << T[i].early_start << "\t" << T[i].early_end << "\t" << T[i].late_start << "\t" << T[i].late_end << std::endl;
	}
	free(T);

	return 0;
}*/