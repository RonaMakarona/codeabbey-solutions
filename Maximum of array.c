#include <stdio.h>

int main() {
	int num;
	int min;
	int max;
	
	scanf("%d", &num);
	min = num;
	max = num;

	for (int i = 0; i < 299; i++) {
		scanf("%d", &num);
		if (num>max) {
			max = num;
		}
		if (num < min) {
			min = num;
		}
	}

	printf("%d %d", max, min);

	return 0;
}
