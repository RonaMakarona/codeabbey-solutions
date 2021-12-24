#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	int num;
	float sum = 0;
	int len = 0;
	int solution[100];
	int input = -1;

	scanf("%d\n", &num);

	for (int i = 0; i < num; i++) {

		scanf("%d", &input);
		sum = input;
		while (input != 0) {
			scanf("%d", &input);
			sum += input;
			len++;
		}
		if (len == 0) { len = 1; } //incase someone just enters 0

		solution[i] = round(sum / len);
		sum = 0;
		len = 0;
	}

	for (int i = 0; i < num; i++) {
		printf("%d ", solution[i]);
	}

	return 0;
}
