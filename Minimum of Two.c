#include <stdio.h>

int main() {
	int pairs;
	int a;
	int b;
	int output[100];
	
	scanf("%d", &pairs);

	for (int i = 0; i < pairs; i++) {
		scanf("%d %d", &a, &b);
		if (a > b) {
			output[i] = b;
		}
		else
		{
			output[i] = a;
		}
	}

	for (int i = 0; i < pairs; i++) {
		printf("%d ", output[i]);
	}

	return 0;
}
