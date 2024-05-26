#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	//배열1
	int Size = 10;
	int* A = new int[Size];

	//1~10 숫자 할당
	for (int i = 0; i < Size; ++i)
	{
		A[i] = i + 1;
	}


	//숫자 입력
	int Number = 0;
	cin >> Number;


	srand(time(0));

	//배열크기 증가 + 숫자 추가
	int newSize = Size + 1;
	int* newA = new int[newSize];

	//기존배열 복사
	for (int i = 0; i < Size; ++i)
	{
		newA[i] = A[i];
	}

	//**입력 숫자 랜덤 위치 삽입
	int index = rand() % newSize; // 0부터 newSize - 1 까지 중 랜덤
	newA[newSize] = newA[index];
	newA[index] = Number;


	//배열1 삭제, 새 배열로 교체
	delete[] A;
	A = newA;


	//**배열 출력
	for (int i = 0; i < newSize; ++i)
	{
		cout << A[i] << " "; // " "???
	}
	cout << endl;


	//메모리 해제
	delete[] A;

	return 0;
}
