#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string input[5];
	vector<int> resultArr;
	int temp = 0;

	for (int i = 0; i < 5; i++) {
		cin >> input[i];
	}

	for (int i = 0; i < 5; i++) {
		temp = input[i].find("FBI");
		if (temp >= 0) {
			resultArr.push_back(i + 1);
		}
	}

	if (resultArr.empty()) {
		cout << "HE GOT AWAY!" << endl;
	}
	else {
		for (int i = 0; i < resultArr.size(); i++) {
			cout << resultArr[i] << ' ';
		}
	}

	return 0;
}