#include <stdio.h>

int round(float num) {
	return num < 0 ? num - 0.5 : num + 0.5;
}

int main() {
	int num;
	float a;
	float b;
	int output[100];
	
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%f %f", &a, &b);
		output[i] = round(a / b);
	}

	for (int i = 0; i < num; i++) {
		printf("%d ", output[i]);
	}

	return 0;
}
