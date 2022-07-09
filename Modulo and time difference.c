#include <stdio.h>

void main() {

	int n;
	scanf("%d", &n);
	
	int solution[100];
	int day1, hour1, min1, sec1, day2, hour2, min2, sec2;
	int stamp1;
	int stamp2;
	int index = 0;

	for (int i = 0; i < n; i++) {

		scanf("%d %d %d %d %d %d %d %d", &day1, &hour1, &min1, &sec1, &day2, &hour2, &min2, &sec2);
		
		stamp1 = day1 * 24 * 60 * 60 * 60 + hour1 * 60 * 60 + min1 * 60 + sec1;
		stamp2 = day2 * 24 * 60 * 60 * 60 + hour2 * 60 * 60 + min2 * 60 + sec2;

		stamp1 = stamp2 - stamp1;	
		sec1 = stamp1 % 60;
		min1 = (stamp1 / 60) % 60;
		hour1 = (stamp1 / 60 / 60) %24;
		day1 = stamp1 / 60 / 60 / 60 /24;
		
		solution[index] = day1;
		solution[index + 1] = hour1;
		solution[index + 2] = min1;
		solution[index + 3] = sec1;
		index += 4;
	}

	for (int i = 0; i < index; i=i+4)
	{
		printf("(%d %d %d %d) ", solution[i], solution[i+1], solution[i+2], solution[i+3]);
	}
}
