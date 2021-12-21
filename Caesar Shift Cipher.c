#include <stdio.h>
#include <string.h>
int main() {
	int num;
	int key;
	char str[1000];
	char solution[1000];
	int index = 0;

	scanf("%d %d\n", &num, &key);
	for (int j = 0; j < num; j++) {
		gets(str);
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] >= 65 && str[i] <= 90) {
				str[i] -= key;
				solution[index] = str[i];
				if (str[i] < 65) {
					str[i] = str[i] +26;
					solution[index] = str[i];
				}
			}
			solution[index] = str[i];
			index++;
		}
		solution[index] = ' ';
		index++;
		
	}
	solution[index] = '\0';

	printf("\n%s", solution);

	return 0;
}
