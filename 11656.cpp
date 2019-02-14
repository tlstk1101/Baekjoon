#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void sort_vector(vector<string> input) {
	vector<string> temp;
	string temp_s;
	
	for (int i = 0; i < input.size(); i++) {
		for (int j = i; j < input.size(); j++) {
			if (input[i].compare(input[j]) > 0) {
				temp_s.clear();
				temp_s = input[i];
				input[i].clear();
				input[i] = input[j];
				input[j].clear();
				input[j] = temp_s;
			}
		}
	}

	for (int i = 0; i < input.size(); i++) {
		cout << input[i] << endl;
	}
}

int main() {
	string S;
	vector<string> InputS;
	cin >> S;
	int SLength = S.length();
	for (int i = 0; i < SLength; i++) {
		InputS.push_back(S);
		reverse(S.begin(), S.end());
		S.pop_back();
		reverse(S.begin(), S.end());
	}

	sort_vector(InputS);
	return 0;
}