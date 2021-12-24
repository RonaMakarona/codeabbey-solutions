#include <stdio.h>
#include <string.h>
int main() {
	int num;
	int a;
	int b;
	int n;
	int sum = 0;
	int solution[1000];

	scanf("%d\n", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d %d %d", &a, &b, &n);
		for (int j=0; j < n; j++)
		{
			sum += a + b*j;
		}
		solution[i] = sum;
		sum = 0;
	}

	for (int i = 0; i < num; i++)
	{
		printf("%d ", solution[i]);
	}

	return 0;
}
