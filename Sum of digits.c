#include <stdio.h>

int main() {
	int num;
	int sum = 0;
	int eq = 0;
	int a;
	int b;
	int c;
	int solution[100] = { 0 };

	scanf("%d\n", &num);
	for (int i = 0; i < num; i++) {

		scanf("%d %d %d", &a, &b, &c);
		eq = a * b + c;
		while (eq > 0) {
			sum += eq % 10;
			eq = eq/ 10;
		}
		solution[i] = sum;
		sum = 0;
	}

	for (int i = 0; i < num; i++) {
		printf("%d ", solution[i]);
	}
	return 0;
}
