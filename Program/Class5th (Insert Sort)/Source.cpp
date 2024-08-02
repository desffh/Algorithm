#include <iostream>
#define SIZE 5

using namespace std;

int list[SIZE] = { 8, 5, 6, 2, 4 };

int key = 0;
int j = 0;

void Insert()
{
	for (int i = 1; i < SIZE; i++)
	{
		key = list[i];

		for (int j = i - 1; j >= 0 && list[j] > key; j--)
		{
			list[j + 1] = list[j];
		}
		list[j + 1] = key;
	}

	for (const int& element : list)
	{
		cout << element << " ";

	}
}



int main()
{
#pragma region 삽입 정렬
	// 데이터를 하나씩 확인하면서 이2미 정렬된 부분과 비교하여
	// 자신의 위치를 찾아 삽입하는 방식으로 정렬하는 알고리즘입니다. 
	Insert();

#pragma endregion


#pragma endregion


	return 0;
}
