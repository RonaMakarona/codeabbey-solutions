#include <stdio.h>

void main() {

	int n;
	scanf("%d", &n);
	
	int solution[100];
	int num;
	int index = 0;
	int steps = 0;

	for (int i = 0; i < n; i++) {

		scanf("%d", &num);

		while (num != 1)
		{
			if (num % 2 == 0) {
				num = num / 2;
			}
			else
			{
				num = 3 * num + 1;
			}
			steps++;
		}
		solution[index] = steps;
		steps = 0;
		index++;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", solution[i]);
	}
}
