#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	//�迭1
	int Size = 10;
	int* A = new int[Size];

	//1~10 ���� �Ҵ�
	for (int i = 0; i < Size; ++i)
	{
		A[i] = i + 1;
	}


	//���� �Է�
	int Number = 0;
	cin >> Number;


	srand(time(0));

	//�迭ũ�� ���� + ���� �߰�
	int newSize = Size + 1;
	int* newA = new int[newSize];

	//�����迭 ����
	for (int i = 0; i < Size; ++i)
	{
		newA[i] = A[i];
	}

	//**�Է� ���� ���� ��ġ ����
	int index = rand() % newSize; // 0���� newSize - 1 ���� �� ����
	newA[newSize - 1] = newA[index];
	newA[index] = Number;


	//�迭1 ����, �� �迭�� ��ü
	delete[] A;
	A = newA;


	//**�迭 ���
	for (int i = 0; i < newSize; ++i)
	{
		cout << A[i] << " "; // " "???
	}
	cout << endl;


	//�޸� ����
	delete[] A;

	return 0;
}