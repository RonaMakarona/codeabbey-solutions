#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	double solution = 0;
	int num;
	int a;

	scanf("%d\n", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &a);
		solution = (solution + a) * 113;	
		solution = fmod( solution, 10000007);
	}

	printf("%f", solution);

	return 0;
}
