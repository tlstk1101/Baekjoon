#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int n, kg_5, kg_3;
	n = kg_3 = kg_5 = 0;
	while (n < 3 || n > 5000) {
		scanf_s("%d", &n);
	}
	
	kg_5 = n / 5;
	n = n % 5;

	while (kg_5 >= 0) {
		if (n % 3 == 0) {
			kg_3 = n / 3;
			n = n % 3;
			break;
		}
		else if(n % 3 != 0){
			kg_5--;
			n += 5;
		}
	}
	if (n == 0) {
		printf("%d", kg_3 + kg_5);
	}
	else if (n != 0) {
		printf("-1");
	}
	return 0;
}