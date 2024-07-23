#include <iostream>
#define SIZE 11
using namespace std;


int main()
{
    // 최대공약수 구하기
    int n = 15;
    int m = 30;

    int num;

    for (int i = 1; i <= n && i <= m; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            num = i;
        }
    }

    cout << num << " ";

    return 0;
}