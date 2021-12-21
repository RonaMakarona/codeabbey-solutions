#include <stdio.h>

int round(float num) {
	return num < 0 ? num - 0.5 : num + 0.5;
}

int main() {
	int num;
	int a;
	int output[100];
	
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &a);
		output[i] = round(((float) (((a + 40) / 1.8)-40 )));
	}

	for (int i = 0; i < num; i++) {
		printf("%d ", output[i]);
	}

	return 0;
}
