#include <iostream>

using namespace std;

int bingo(int arr[][5]) {
	int result = 0;
	int temp = 0;
	//가로
	for (int i = 0; i < 5; i++) {
		temp = 0;
		for (int j = 0; j < 5; j++) {
			if (arr[i][j] == 0)
				temp++;
		}
		if (temp == 5)
			result++;
	}
	//세로
	for (int i = 0; i < 5; i++) {
		temp = 0;
		for (int j = 0; j < 5; j++) {
			if (arr[j][i] == 0)
				temp++;
		}
		if (temp == 5)
			result++;
	}
	//대각선
	temp = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i][i] == 0)
			temp++;
	}
	if (temp == 5)
		result++;

	temp = 0;
	for (int i = 0; i < 5; i++) {
		int j = 4 - i;
		if (arr[i][j] == 0)
			temp++;
	}
	if (temp == 5)
		result++;

	return result;
}

int main() {
	int temp = 0;
	int count = 0;
	int check = 0;
	int user[5][5] = { 0, };

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> user[i][j];
		}
	}
	
	while (check < 3) {
		cin >> temp;
		count++;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (user[i][j] == temp) {
					user[i][j] = 0;
						check = bingo(user);
				}
			}
		}
	}

	cout << count << endl;
	return 0;
}