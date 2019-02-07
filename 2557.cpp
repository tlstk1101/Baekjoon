#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int i = 0;
	char std[100][100] = { 0, };
	cin >> std[i];
	while (std[i][strlen(std[i]) - 1] != '\0') {
		cout << std[i] << endl;
		cin >> std[i];
		i++;
	}
	return 0;
}
