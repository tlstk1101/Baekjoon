#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

char OX[80];

int main(){
	int test_count, score;
	scanf("%d", &test_count);
	int *result = new int[test_count]();
	
	for (int i = 0; i < test_count; i++){
		score = 1;
		scanf("%s", &OX);
		for (int j = 0; j < strlen(OX); j++){
			if (OX[j] == 'O'){
				result[i] += score;
				score++;
			}
			if (OX[j] == 'X')
				score = 1;
		}
	}
	for (int i = 0; i < test_count; i++) {
		printf("%d\n", result[i]);
	}
}