#include <stdio.h>

int main() {
	int pairs;
	int a;
	int b;
	int c;
	int output[100];
	
	scanf("%d", &pairs);

	for (int i = 0; i < pairs; i++) {
		scanf("%d %d %d", &a, &b, &c);
		if (a > b) {
			if (b > c) {
				output[i] = c;
			}
			else
			{
				output[i] = b;
			}
		}
		else
		{
			if (a>c)
			{
				output[i] = c;
			}
			else
			{
				output[i] = a;
			}

		}
	}

	for (int i = 0; i < pairs; i++) {
		printf("%d ", output[i]);
	}

	return 0;
}
