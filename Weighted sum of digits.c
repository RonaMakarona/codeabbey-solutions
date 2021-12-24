#include <stdio.h>
#include <string.h>

int find_len(int n) {
	int len = 0;
	while (n > 0) {
		n = n / 10;
		len++;
	}

	return len;
}

int main() {
	int num;
	int a;
	int sum = 0;
	int calc;
	int len;
	int solution[100];

	scanf("%d\n", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &a);
		len = find_len(a);

		for (int j = len; j > 0; j--) {
			calc = a % 10;
			sum += calc * j;
			a = a / 10;
		}

		solution[i] = sum;
		sum = 0;
	}

	for (int i = 0; i < num; i++) {
		printf("%d ", solution[i]);
	}

	return 0;
}
