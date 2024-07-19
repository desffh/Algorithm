#include <iostream>

using namespace std;

#define SIZE 8

// 피보나치수열 배열에 값 넣기
int Fibonacci(int list[], int n)
{

    if (n <= 0)
    {
        return 0;
    }

    else if (n == 1)
    {
        return 1;
    }

    else
    {
        return Fibonacci(list,n - 1) + Fibonacci(list,n - 2);
    }

}

int main()
{
#pragma region 동적 계획법
    // 특정 범위까지의 값을 구하기 위해서 그것과
    // 다른 범위까지의 값을 이용하여 효율적으로 값을
    // 구하는 알고리즘입니다.

    // 메모이제이션
    // 프로그램이 동일한 계산을 반복해야 할 때,
    // 이전에 계산한 값을 메모리에 저장함으로써 동일한 계산을 반복 수행하는
    // 작업을 제거하여 프로그램의 실행 속도를 향상시키는 기법입니다.

    // 숫자가 커지면 계산시간이 오래걸림(시간복잡도n²)

    cout << Fibonacci(100) << endl;

#pragma endregion

    return 0;
}