#include <iostream>
#include <string>
#include <vector>

#define NUMBER_MAX 100

using namespace std;

int prime_number(vector<int>& input, int test_case){
	int result = 0;
	int i, j;
	for (i = 0; i < test_case; i++) {
		for (j = 2; j < input[i]; j++) {
			if (input[i] % j == 0) {
				break;
			}
		}
		if (input[i] == j)
			result++;
	}
	return result;
}

int main(){
	int n = 0;
	int temp = 0;
	int result = 0;
	vector<int> number;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		number.push_back(temp);
	}
	result = prime_number(number, n);
	cout << result << endl;
	return 0;
}