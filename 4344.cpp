#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int number = 0;
	int test_case = 0;		
	double avg = 0;
	cin >> test_case;

	for (int i = 0; i < test_case; i++) {
		int temp = 0;
		int sum = 0;
		cin >> temp;
		vector<int> score;
		for (int j = 0; j < temp; j++) {
			cin >> number;
			score.push_back(number);
			sum += score[j];
		}
		avg = sum / temp;
		sum = 0;
		for (int j = 0; j < temp; j++) {
			sum += (double)score[j] > avg ? 1 : 0;
		}
		printf("%.3f%%\n", ((double)sum / (double)temp) * 100);

	}

	return 0;
}