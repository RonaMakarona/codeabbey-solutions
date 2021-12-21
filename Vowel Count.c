#include <stdio.h>

int main() {
	int num;
	int count = 0;
	int index = 0;
	char str[100];
	int output[100] = { 0 };
	
	scanf("%d\n", &num);

	for (int i = 0; i < num; i++) {
		gets(str);
		for(int j = 0; str[j]!= '\0'; j++)
		{
			if (str[j] == 'y' || str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u') {
				output[index]++;
			}
		}
		index++;

	}

	for (int i = 0; i < num; i++) {
		printf("%d ", output[i]);
	}

	return 0;
}
