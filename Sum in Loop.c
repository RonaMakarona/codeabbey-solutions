#include <stdio.h>

int main() {
	int num;
	int a;
	int sum = 0;
	
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &a);
		sum += a;
	}

	printf("%d", sum);
	return 0;
}
