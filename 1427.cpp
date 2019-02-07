#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string input;
	vector<int> temp;
	int output = 0;
	cin >> input;
	for (int i = 0; i < input.size(); i++) {
		temp.push_back(input[i] - '0');
	}
	sort(temp.begin(), temp.end(), greater<int>());

	for (int i = 1; i <= input.size(); i++) {
		output += (temp[i - 1] * (int)pow(10, (input.size() - i)));
	}
	
	cout << output << endl;
	return 0;
}