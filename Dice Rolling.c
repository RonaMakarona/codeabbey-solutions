#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	int num;
	double a;
	int solution[100];

	scanf("%d\n", &num);

	for (int i = 0; i < num; i++) {
		scanf("%lf", &a);
		a = a * 6;
		a = (int)a;
		a++;
		solution[i] = a;
	}

	for (int i = 0; i < num; i++) {
		printf("%d ", solution[i]);
	}

	return 0;
}
