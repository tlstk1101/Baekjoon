#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int Case = 0;
	int sum = 0;
	vector<char> str;
	string input;
	cin >> Case;

	for (int i = 0; i < Case; i++) {
		cin >> input;		
		sum = 0;
		for (int j = 0; j < input.size(); j++) {
			input[j] = tolower(input[j]);
			if ((int)input[j] >= 97 && (int)input[j] <= 122)
				str.push_back(input[j]);
		}

		for (int j = 0; j < str.size(); j++) {
			for (int k = 0; k < str.size(); k++) {
				if ((int)str[j] <= (int)'m') {					
					if ((int)str[j] == 'z' - abs(('a' - str[k]))) {
						sum++;
					}
				}
				else {
					if ((int)str[j] == 'a' + abs(('z' - str[k]))) {
						sum++;
					}
				}
			}
		}

		if (sum != str.size())
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
		str.clear();
	}

	return 0;
}