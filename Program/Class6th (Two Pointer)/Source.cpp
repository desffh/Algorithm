﻿#include <iostream>
#define SIZE 5

using namespace std;

int list[SIZE] = { 1, 2, 5, 2, 5 };

void TwoPointer()
{
    int count = 0;

    int sum = 0;

    int start = 0, end = 0;

    int m = 5;

    while (start <= end)
    {
        if (sum <= m)
        {
            sum += list[end++];
        }
        else if (sum == m)
        {
            count++;
            sum += list[end++];
        }
        else if (end >= SIZE)
        {
            break;
        }
        else
        {
            sum -= list[start++];
        }
    }
    cout << "Count의 값: " << count << endl;

}

int main()
{
#pragma region 투 포인터
    // 두 개의 포인터를 활용해서 배열의 요소를 효과적으로
    // 탐색하는 알고리즘입니다.

    // 1. 시작점과 끝나는 지점이 첫번째 원소를 가리키도록 합니다.

    // 2. 현재 부분합이 m과 같다면 count를 증가시킵니다.

    // 3. 현재 부분합이 m보다 작다면 end를 1 증가시킵니다.

    // 4. 현재 부분합이 m보다 크거나 같다면 start를 1 증가시킵니다.

    TwoPointer();

#pragma endregion

    return 0;
}
