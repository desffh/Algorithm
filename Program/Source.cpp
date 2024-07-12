#include <iostream>
#define SIZE 5

using namespace std;

int list[SIZE] = {15,25,35,5,20};

void Number()
{
	for(int i = 0; i < SIZE - 1; i++)
	{
		for (int j = 0; j < (SIZE - i) - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				std::swap(list[j], list[j + 1]);
			}
			else
			{
				continue;
			}
		}
	}

	for (const int& element : list)
	{
		cout << element << " ";
	}

	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << list[i] << " ";
	//}
}



int main()
{
#pragma region 거품 정렬
	// 서로 인접한 두 원소를 검사하여 정렬하는 알고리즘입니다.

	Number();

#pragma endregion



	return 0;
}
