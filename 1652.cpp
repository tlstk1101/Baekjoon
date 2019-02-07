#include <iostream>

using namespace std;

int main() {
	int size = 0;
	cin >> size;

	int check_X = 0;
	int check_Y = 0;
	
	char **array = new char*[size];
	for (int i = 0; i < size; i++)
		array[i] = new char[size];

	for (int i = 0; i < size; i++)
		cin >> array[i];

	for (int i = 0; i < size; i++) {
		int temp = 0;
		for (int j = 0; j < size; j++) {
			if (array[i][j] == '.') {
				temp++;
				if (temp == 2) {
					check_X++;
				}
			}
			else
				temp = 0;
		}
		temp = 0;
	}// 가로체크

	for (int i = 0; i < size; i++) {
		int temp = 0;
		for (int j = 0; j < size; j++) {
			if (array[j][i] == '.') {
				temp++;
				if (temp == 2) {
					check_Y++;
				}
			}
			else
				temp = 0;
		}
		temp = 0;
	}// 세로체크

	cout << check_X << " " << check_Y << endl;
	return 0;
}