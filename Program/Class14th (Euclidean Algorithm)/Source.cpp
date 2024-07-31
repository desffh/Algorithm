// 최대공약수 구하기
//#include <iostream>
//#define SIZE 11
//using namespace std;
//
//
//int main()
//{
//    // 최대공약수 구하기
//    int n = 30;
//    int m = 48;
//
//    int num = 0;
//
//    // min(n, m) : 둘 중 더 작은값만 반환
//    for (int i = 1; i <= min(n, m); i++)
//    {
//        // 둘다 나누어 떨어질 때
//        if (n % i == 0 && m % i == 0)
//        {
//            num = i;
//        }
//    }
//    cout <<"두 수의 최대 공약수 : ";
//    cout << num << " ";
//
//    return 0;
//}


// 유클리드 호제법
#include <iostream>
#include <math.h>

using namespace std;

int Euclid(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return Euclid(y, x % y);
    }
}

int main()
{
#pragma region 유클리드 호제법
    // 2개의 자연수 또는 정식의 최대 공약수를 구하는 방식으로,
    // 두 수가 서로 상대방 수를 나누어서 원하는 수를 얻어내는 알고리즘입니다.

    int x = 78696;
    int y = 19332;

    cout << "두 수의 최대 공약수 : " << Euclid(max(x, y), min(x, y)) << endl;

#pragma endregion


    return 0;
}