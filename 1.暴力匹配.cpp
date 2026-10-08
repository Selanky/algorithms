#include<stdio.h>
#include<string.h>

int BF(const char* S, const char* T) {
	if (S == NULL || T == NULL) {
		return -1;
	}
	int lenstr = strlen(S);
	int lensub = strlen(T);
	int i = 0, j = 0;
	while (i < lenstr && j < lenstr) {
		if (S[i] == T[j]) {
			i++;
			j++;
		}
		else{
			i = i - j + 1;
			j = 0;
		}
	}
	if (j >= lensub) {
		return i - j;
	}
	else {
		return -1;
	}
}
int main() {
	printf("%d\n", BF("abcabcd", "abcd"));
	printf("%d\n", BF("abcabcd", "adc"));

	return 0;
}