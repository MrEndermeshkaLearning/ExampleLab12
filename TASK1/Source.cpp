#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#define N 10
int main() {
	//Завдання 1 вар.3
	int arr[N] = { 1,3,2,4,3,5,5,6,7,9 };
	int MaxLocaLMin = INT_MIN;
	for (int i = 1; i < N-1; i++) {
		if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1] && arr[i] > MaxLocaLMin)
			MaxLocaLMin = arr[i];
		else if (arr[i - 1] < arr[i] && arr[i - 1] < arr[i + 1] && arr[i - 1] > MaxLocaLMin)
			MaxLocaLMin = arr[i - 1];
		else if (arr[i + 1] < arr[i] && arr[i + 1] < arr[i - 1] && arr[i + 1] > MaxLocaLMin)
			MaxLocaLMin = arr[i + 1];
	}
	printf("MaxLocalMin = %d", MaxLocaLMin);
}