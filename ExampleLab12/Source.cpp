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
	//������� 3, ����� 1.3
	srand(time(0));
	int arr[10];
	//���������
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % (1 - 10) + 1;
	}
	//����� �� ����� �� ��������
	for (int i = 0; i < N; i++) {
		printf("[%d] = %d ", i, arr[i]);
	}
	printf("\n");
	//����� � ����� �� ���� �������, ������������,
	//���� ���� ��� ���� �������� ������ ��������
	//����� ���� �� ���������� ���������� � ����
	int temp=arr[0], temp1, tempforlast = arr[9];
	for (int i = -1; i < N-1; i++) {
		temp1 = arr[i + 1];
		arr[i + 1] = temp;
		temp = temp1;
	}
	arr[0] = tempforlast;
	//����� �� ����� ����� ��������
	for (int i = 0; i < N; i++) {
		printf("[%d] = %d ", i, arr[i]);
	}
	printf("\n\n\n\n\n");
	//������� 3 2.1
	//���������� ���� ����� �����������
	int arrSecond[N] = { 8,1,2,3,4,5,6,7,9,10 };
	int newPosition = 0;
	for (int i = 0; i < N; i++) {
		if (arrSecond[0] > arrSecond[i]) {
			newPosition++;
		}
	}
	//����������� ����� ������� ��� ����� ������� ������ � ���� �� ���� �������
	int SpTemp = arrSecond[0];
	temp = arrSecond[newPosition];
	for (int i = newPosition; i > 0; i--) {
		temp1 = arrSecond[i -1];
		arrSecond[i - 1] = temp;
		temp = temp1;
	}
	// ��������� �� ����� �������
	arrSecond[newPosition] = SpTemp;
	//�������
	for (int i = 0; i < N; i++) {
		printf("[%d] = %d ", i, arrSecond[i]);
	}

	printf("\n\n\n\n\n");

	//������� 3 3.1
	printf("���������� N:");
	int n;
	scanf_s("%d", &n);
	//k � ��������� ���������� ���� ��������� �� ������
	int k;
	while (true) {
		printf("���������� k (1<k<N):");
		scanf_s("%d", &k);
		if (k > 1 && k < n)
			break;
	}
	//��� ������
	int Array[MaxArrayLenth];
	int ArrayWithoutElement[MaxArrayLenth];
	//������� ������� � ������� ���
	for (int i = 0; i < n; i++) {
		Array[i] = rand() % (1 - 10) + 1;
	}
	for (int i = 0; i < n; i++) {
		printf("[%d] = %d ", i, Array[i]);
	}

	printf("\n");
	//������� ������� � ������������ �� ������ �����
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
	//�������
	for (int i = 0; i < n-1; i++) {
		printf("[%d] = %d ", i, ArrayWithoutElement[i]);
	}
}
