#include <iostream>
#include <math.h>

using namespace std;

// 소수 판별 0(n)
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


int list[101];

void Sieve(int n)
{
	for (int i = 0; i <= n; i++)
	{
		list[i] = i;
	}

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (list[i] == 0)
		{
			continue;
		}

		for (int k = i * 2; k <= n; k += i)
		{
			list[k] = 0;
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (list[i] != 0)
		{
			cout << list[i] << " ";
		}
	}



}

int main()
{
	//cout << IsPrime(0) << endl; // 0
	//cout << IsPrime(1) << endl; // 0
	//cout << IsPrime(3) << endl; // 1 소수맞음
	//cout << IsPrime(7) << endl; // 1 소수맞음

	Sieve(49);


	return 0;
}
