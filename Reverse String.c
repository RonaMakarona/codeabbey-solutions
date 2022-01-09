#include <stdio.h>
#include <string.h>
#include <math.h>

int find_len(char* str) {
	int num = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		num++;
	}
	return num;
}

int main() {
	char solution[300];
	int num;
	char passer;
	gets(solution);

	num = find_len(solution);

	for (int i = 0; i < num/2; i++) {
		passer = solution[i];
		solution[i] = solution[num-1-i];
		solution[num-1-i] = passer;
	}

		printf("%s", solution);

	return 0;
}
