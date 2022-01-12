#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int size;
	int num;
	int a;

	scanf("%d %d\n", &size, &num);
	
	int* solution = calloc(num, sizeof(int));
	
	for (int i = 0; i < size; i++) {
		scanf("%d", &a);
		solution[a - 1]++;
	}

	for (int i = 0; i < num; i++) {
		printf("%d ", solution[i]);
	}

	return 0;
}
