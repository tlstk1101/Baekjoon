#include <stdio.h>

int main() {
	int arr[8] = { 0, };
	int asc = 0, des = 0, mix = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%d", &arr[i]);
		if (i + 1 == arr[i])
			asc++;
		else if (8 - i == arr[i])
			des++;
		else {
			mix++;
		}
	}
	if (asc == 8)
		printf("ascending");
	else if (des == 8)
		printf("descending");
	else
		printf("mixed");
	return 0;
}
/****************************
뭐가 다른건지 모르겠음
*****************************/
/*#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int check_scale(vector<int> &array) {
	int check = 0;
	for (int i = 0; i < 8; i++) {
		if (array[i] != (i + 1)) {
			if (array[i] != 8 - i) {
				check = 3;
				break;
			}
			else
				check = 2;
		}
		else 
			check = 1;
	}
	return check;
}

int main() {
	vector<int> scale(8);
	int check = 0;
	for (int i = 0; i < 8; i++) {
		cin >> scale[i];
	}

	switch (check_scale(scale)){
		case 1:
			cout << "ascending" << endl;
			break;
		case 2:
			cout << "descending" << endl;
			break;
		case 3:
			cout << "mixed" << endl;
			break;
		default:
			break;
	}
	return 0;
}*/