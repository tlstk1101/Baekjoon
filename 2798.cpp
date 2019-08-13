#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, M;
	int temp = 0;
	int maxValue = 0;
	vector<int> inCard;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		inCard.push_back(temp);
	}

	temp = 0;
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				temp = inCard[i] + inCard[j] + inCard[k];
				if (temp <= M) {
					if (maxValue < temp) {
						maxValue = temp;
					}
				}
			}		
		}
	}

	cout << maxValue << endl;
	return 0;
}