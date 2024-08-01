#include <iostream>

#define SIZE 5
using namespace std;



int main()
{
#pragma region 누적합
    // 특정한 배열이 있을 때, 배열까지의 합을 나타내는 것입니다.

    int array[SIZE] = { 1,2,3,4,5 };

    int save[SIZE] = { 0,0,0,0,0 };

    save[0] = array[0];

    for (int i = 1; i < SIZE; i++)
    {
        save[i] = array[i] + save[i - 1];
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << save[i] << " ";
    }


#pragma endregion




    return 0;
}