#include <stdio.h>
#include <iostream>

int main() {
	int n, temp;
	double avg = 0;
	scanf("%d", &n);
	int *array = new int[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", (array + i));
	}
	temp = array[0];
	for (int i = 0; i < n; i++) {
		if (temp < array[i]) {
			temp = array[i];
		}
	}
	for (int i = 0; i < n; i++) {
		avg += (((double)array[i] / (double)temp) * 100);
	}
	printf("%.2lf", avg / n);
	return 0;
}