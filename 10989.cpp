#include <iostream>

using namespace std;

int main() {
	int N, temp;
	scanf("%d", &N);
	int arr[10001] = { 0, };

	for (int i = 0; i < N; i++) {
		scanf("%d", &temp);
		arr[temp]++;
	}

	for (int i = 0; i <= 10000; i++) {
		for (int j = 0; j < arr[i]; j++) {
			printf("%d\n", i);
		}
	}
	
	return 0;
}