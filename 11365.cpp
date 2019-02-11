#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<string> input;
	string str;

	while (true) {
		getline(cin, str);
		if (str.compare("END") == 0)
			break;
		else {
			reverse(str.begin(), str.end());
			input.push_back(str);
		}
	}

	for (int i = 0; i < input.capacity(); i++) {
		cout << input[i] << endl;
	} 
	return 0;
}