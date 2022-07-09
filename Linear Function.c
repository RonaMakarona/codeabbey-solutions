#include <stdio.h>

void main() {

	int n;
	scanf("%d", &n);
	
	int x1;
	int y1;
	int x2;
	int y2;
	int a;
	int b;
	int solution[100];
	int index = 0;

	for (int i = 0; i < n; i++) {

		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

		a = (y2 - y1) / (x2 - x1);
		b = y1 - a * x1;
		
		solution[index] = a;
		index++;
		solution[index] = b;
		index++;
	}

	for (int i = 0; i < index; i=i+2)
	{
		printf("(%d %d) ", solution[i], solution[i+1]);
	}
}
