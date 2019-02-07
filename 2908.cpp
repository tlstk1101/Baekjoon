#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;
void swap(char *A);
int return_base(char *A);

int main() {
	char numberA[3] = { 0, };
	char numberB[3] = { 0, };
	int inputA, inputB, result = 0;

	cin >> numberA >> numberB;
	inputA = return_base(numberA);
	inputB = return_base(numberB);

	result = (inputA > inputB ? inputA : inputB);
	printf("%d", result);

	return 0;
}

int return_base(char *numberA) {
	int temp = 0;
	swap(numberA);
	temp = ((numberA[0] - 48) * 100) + ((numberA[1] - 48) * 10) + (numberA[2] - 48);

	return temp;
}

void swap(char *sA) {
	char temp = 0;

	temp = sA[0];
	sA[0] = sA[2];
	sA[2] = temp;
}
