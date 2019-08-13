#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;

int main() {
	int result[26] = { 0, };
	int index = 0;
	int temp = 0;
	int check = 0;
	string inPut;

	cin >> inPut;
	
	for (int i = 0; i < inPut.size(); i++) {
		if (inPut[i] >= 'a' && inPut[i] <= 'z') 
			result[inPut[i] - 'a']++;
		else
			result[inPut[i] - 'A']++;
	}

	temp = *max_element(result, result + 26);
	
	for (int i = 0; i < 26; i++) {
		if (temp == result[i]) {
			index = i;
			check++;
		}		
	}

	if (check > 1)
		cout << "?" << endl;
	else
		cout << (char)(index + 'A') << endl;

	return 0;
}