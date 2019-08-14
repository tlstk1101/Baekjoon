#include <iostream>

using namespace std;

int main() {
	int Number[10001] = { 0, };
	int initV = 0, VariV = 0;
	
	for (int i = 1; i <= 10000; i++) {
		initV = i;
		VariV = i;
		while (initV != 0) {
			VariV += (initV % 10);
			initV = initV / 10;
		}
		if (VariV <= 10000)
			Number[VariV]++;
	}
	
	for (int i = 1; i <= 10000; i++) {
		if (Number[i] == 0) {
			printf("%d\n", i);
		}
	}
	
	return 0;
}