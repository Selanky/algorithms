/*#include<iostream>

void get_next(char S[], int next[]) {
	int len = 0;
	int i = 0, j = -1;
	next[0] = -1;
	len = strlen(S);
	while (i < len) {
		if (j == -1 || S[i] == S[j]) {
			i++;
			j++;
			next[i] = j;
		}
		else {
			j = next[j];
		}
	}
}
int KMP(char M[], char S[], int next[]) {
	int i = 0, j = 0;
	int Mlen = strlen(M), Slen = strlen(S);
	while (i < Mlen && j < Slen) {
		if (j == -1 || M[i] == S[j]) {
			i++;
			j++;
		}
		else {
			j = next[j];
		}
	}
	if (j >= Slen) {
		return i - Slen + 1;
	}
	else {
		return 0;
	}
}
int main() {
	int i = 0, next[1000];
	char M[] = "abcd", S[] = "ab";
	std::cout << M << std::endl;
	std::cout << S << std::endl;
	get_next(S, next);
	i = KMP(M, S, next);
	std::cout << i << std::endl;

	return 0;
}*/