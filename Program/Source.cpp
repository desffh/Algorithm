#include <iostream>

using namespace std;

bool IsPrime(int n)
{
	// 0,1은 소수가 아님
	if (n <= 1)
	{
		return false;
	}

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) // 나누어 떨어지면
		{
			return false;
		}
	}

	return true;
}


int main()
{
	cout << IsPrime(0) << endl; // 0
	cout << IsPrime(1) << endl; // 0
	cout << IsPrime(3) << endl; // 1 소수맞음
	cout << IsPrime(7) << endl; // 1 소수맞음


	return 0;
}
