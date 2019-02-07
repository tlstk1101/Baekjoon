#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int array[26] = { -1, };
	fill(array, (array + 26), -1);
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if(array[s[i] - 'a'] == -1)
			array[s[i] - 'a'] = i;
	}
	for (int i = 0; i < (sizeof(array)/sizeof(array[0])); i++) {
		printf("%d ", array[i]);
	}
	return 0;
}