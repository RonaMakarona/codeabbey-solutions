#include <stdio.h>
#include <string.h>
int main() {
	int num;
	int a;
	int b;
	int c;
	int solution[1000];

	scanf("%d\n", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d %d %d", &a, &b, &c);
		if ((a+b>c) && (a+c>b) && (b+c>a)) {
			solution[i] = 1;
		}
		else
		{
			solution[i] = 0;
		}
	}

	for (int i = 0; i < num; i++)
	{
		printf("%d ", solution[i]);
	}

	return 0;
}
