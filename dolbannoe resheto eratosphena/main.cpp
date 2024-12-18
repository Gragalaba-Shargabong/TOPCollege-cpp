#include <iostream>

//int N = 1000;
//
//bool isPrime(int a)
//{
//	if (a < 2 || a > N)
//	{
//		return false;
//	}
//
//	int* pups = new int[N + 1];
//	for (int i = 0; i <= N; ++i)
//	{
//		pups[i] = 1;
//	}
//	pups[0] = pups[1] = 0;
//
//	for (int p = 2; p * p <= N; ++p)
//	{
//		if (pups[p])
//		{
//			for (int i = p * p; i <= N; i += p)
//			{
//				pups[i] = 0;
//			}
//		}
//	}
//
//	bool result = pups[a];
//	delete[] pups;
//	return result;
//
//	int main() {
//
//		int a;
//		std::cout << "Введи число (от 2 до " << N << "): ";
//		std::cin >> a;
//
//		if (isPrime(a))
//		{
//			std::cout << a << " - простое число" << std::endl;
//		}
//		else
//		{
//			std::cout << a << " - составное число" << std::endl;
//		}
//
//		return 0;
//
//	}

// мозг сдох окончательно...