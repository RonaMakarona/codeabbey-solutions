#include <stdio.h>
#include <string.h>
int main() {
	int num;
	float weight;
	float height;
	float bmi[100];

	scanf("%d\n", &num);

	for (int i = 0; i < num; i++) {
		scanf("%f %f", &weight, &height);
		bmi[i] = weight / (height * height);
	}

	for (int i = 0; i < num; i++)
	{
		if (bmi[i] < 18.5) {
			printf("under ");
		}
		else if ((bmi[i] <25.0) && (bmi[i] >=18.5)) {
			printf("normal ");
		}
		else if ((bmi[i] <30.0) && (bmi[i] >= 25.0)) {
			printf("over ");
		}
		else
		{
			printf("obese ");
		}
	}

	return 0;
}
