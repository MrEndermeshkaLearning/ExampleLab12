#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#define N 10

int main() {
	//������� 2 ������� 3
	srand(time(NULL));
	int arr[N];
	int Barr[N];
	int counter = 0;
	//���������� � ���������� ������ � ������
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % (1 - 25) + 1;
		if (arr[i] % 2 == 0) {
			Barr[counter] = arr[i];
			counter++;
		}
	}
	//������� ��� ������
	for (int i = 0; i < N; i++) {
		printf("ARR[%d]=%d\n", i, arr[i]);
	}
	printf("\n\n\n");
	for (int i = 0; i < counter; i++){
		printf("BARR[%d]=%d\n", i, Barr[i]);
	}

}