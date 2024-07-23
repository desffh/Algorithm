#include <iostream>
#define SIZE 11

using namespace std;


int main()
{
#pragma region 쉘 정렬
    // 먼 거리의 요소들을 먼저 정렬하여 배열을 부분적으로
    // 정렬한 후, 점진적으로 더 작은 간격을 사용하는 정렬 알고리즘입니다.

    int list[SIZE] = { 10, 8, 6, 20, 4, 3, 22, 1, 0, 15, 16 };

    int gap = 0;

    int j = 0;
    int key = 0;

    for (gap = SIZE / 2; gap > 0; gap /= 2)
    {
        if (gap % 2 == 0)
        {
            gap++;
        }
        for (int i = gap; i < SIZE; i++)
        {
            key = list[i];

            for (j = i; j >= gap && list[j - gap] > key; j -= gap)
            {
                list[j] = list[j - gap];
            }
            list[j] = key;
        }
    }

    for (const int& element : list)
    {
        cout << element << " ";
    }

    //다시해보기 (틀린답)
    //while (gap >= 0)
    //{
    //    for (int i = gap; i < SIZE; i++)
    //    {
    //        key = list[i];
    //
    //        for (int j = gap; j >= 0; j--)
    //        {
    //            if (key < list[j])
    //            {
    //                list[j + gap] = list[j];
    //            }
    //            else
    //            {
    //                break;
    //            }
    //        }
    //    }
    //    if (gap == 1)
    //    {
    //        break;
    //    }
    //    gap = gap / 2;
    //}


#pragma endregion


    return 0;
}