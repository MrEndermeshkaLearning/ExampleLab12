#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#define N 10
#define MaxArrayLenth 100
int main()
{
	setlocale(LC_ALL, "RUS");
	//Задание 3, пункт 1.3
	srand(time(0));
	int arr[10];
	//генерация
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % (1 - 10) + 1;
	}
	//вивод на экран до действий
	for (int i = 0; i < N; i++) {
		printf("[%d] = %d ", i, arr[i]);
	}
	printf("\n");
	//сдвиг в право на один елемент, единократный,
	//если надо два раза сдвинуть просто одевайте
	//кусок кода до следующего коментария в цыкл
	int temp=arr[0], temp1, tempforlast = arr[9];
	for (int i = -1; i < N-1; i++) {
		temp1 = arr[i + 1];
		arr[i + 1] = temp;
		temp = temp1;
	}
	arr[0] = tempforlast;
	//вивод на экран после действий
	for (int i = 0; i < N; i++) {
		printf("[%d] = %d ", i, arr[i]);
	}
	printf("\n\n\n\n\n");
	//задание 3 2.1
	//опреденяем куда нужно переставить
	int arrSecond[N] = { 8,1,2,3,4,5,6,7,9,10 };
	int newPosition = 0;
	for (int i = 0; i < N; i++) {
		if (arrSecond[0] > arrSecond[i]) {
			newPosition++;
		}
	}
	//освобождаем место которое нам нужно сдвигом масива в лево на одну позицию
	int SpTemp = arrSecond[0];
	temp = arrSecond[newPosition];
	for (int i = newPosition; i > 0; i--) {
		temp1 = arrSecond[i -1];
		arrSecond[i - 1] = temp;
		temp = temp1;
	}
	// вставляем на новую позицию
	arrSecond[newPosition] = SpTemp;
	//выводим
	for (int i = 0; i < N; i++) {
		printf("[%d] = %d ", i, arrSecond[i]);
	}

	printf("\n\n\n\n\n");

	//Задание 3 3.1
	printf("Необходимо N:");
	int n;
	scanf_s("%d", &n);
	//k в диапазона спрашиваем пока правильно не введут
	int k;
	while (true) {
		printf("Необходимо k (1<k<N):");
		scanf_s("%d", &k);
		if (k > 1 && k < n)
			break;
	}
	//два масива
	int Array[MaxArrayLenth];
	int ArrayWithoutElement[MaxArrayLenth];
	//генерим главный и выводим его
	for (int i = 0; i < n; i++) {
		Array[i] = rand() % (1 - 10) + 1;
	}
	for (int i = 0; i < n; i++) {
		printf("[%d] = %d ", i, Array[i]);
	}

	printf("\n");
	//удаляем елемент и переписываем во второй масив
	for (int i = 0; i < n; i++) {
		if (i < k) {
			ArrayWithoutElement[i] = Array[i];
		}
		else if(i==k)
		{
			continue;
		}
		else {
			ArrayWithoutElement[i - 1] = Array[i];
		}
	}
	//выводим
	for (int i = 0; i < n-1; i++) {
		printf("[%d] = %d ", i, ArrayWithoutElement[i]);
	}
}
