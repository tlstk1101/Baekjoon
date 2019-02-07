#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int temp;
	cin >> temp;

	int *array = new int[temp];
	int *Dp = new int[temp + 1];
	int max = 0;
	for (int i = 0; i < temp; i++) {
		cin >> array[i];
	}
	Dp[0] = array[0];
	for (int i = 1; i <= temp; i++) {
		if(array[i] < Dp[i - 1] + array[i])
			
	}

	return 0;
}