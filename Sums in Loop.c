#include <stdio.h>

int main() {
	int pairs;
	int a;
	int sum = 0;
	int output[100];
	
	scanf("%d", &pairs);

	for (int i = 0; i < pairs; i++) {
		scanf("%d %d", &a, &sum);
		sum += a;
		output[i] = sum;
	}

	for (int i = 0; i < pairs; i++) {
		printf("%d ", output[i]);
	}

	return 0;
}
