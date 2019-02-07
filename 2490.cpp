#include <iostream>

using namespace std;

void check(int ary[]) {
	int check_number = 0;
	char temp = 0;
	for (int i = 0; i < 4; i++) {
		if (ary[i] == 0) {
			check_number++;
		}
	}
	switch (check_number){
		case 0:
			temp = 'E';
			break;
		case 1:
			temp = 'A';
			break;
		case 2:
			temp = 'B';
			break;
		case 3:
			temp = 'C';
			break;
		case 4:
			temp = 'D';
			break;
	}
	cout << temp << endl;
}

int main() {
	for (int i = 0; i < 3; i++) {
		int array[4] = { 0, };
		
		for (int j = 0; j < 4; j++) {
			cin >> array[j];
		}
		check(array);
	}

	return 0;
}