#include <iostream>
#include <iomanip>

// #1
//int main()
//{
//	setlocale(LC_ALL, "rus");
//
//	int n;
//	double b0, q;
//
//	std::cout << "b0: ";
//	std::cin >> b0;
//	std::cout << "q: ";
//	std::cin >> q;
//	std::cout << "n: ";
//	std::cin >> n;
//
//	if (b0 == 0 || n <= 0)
//	{
//		std::cout << "Некорректные данные" << std::endl;
//		return 1;
//	}
//	if (abs(q) == 1)
//	{
//		if (q == 1)
//		{
//			std::cout << "Сумма прогрессии: " << b0 * n << std::endl;
//		}
//		else
//		{
//			if (n % 2 == 0)
//			{
//				std::cout << "Сумма прогрессии: 0" << std::endl;
//			}
//			else
//			{
//				std::cout << "Сумма прогрессии: " << b0 << std::endl;
//			}
//		}
//	}
//	else
//	{
//		double sum = b0 * (1 - pow(q, n)) / (1 - q);
//		std::cout << "Сумма прогрессии: " << sum << std::endl;
//	}
//	return 0;
//}

// #2
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	double b0, q;
//
//	std::cout << "b0: ";
//	std::cin >> b0;
//	std::cout << "q: ";
//	std::cin >> q;
//
//	if (b0 == 0 || q <= 0 || q >= 1)
//	{
//		std::cout << "Некорректные данные" << std::endl;
//		return 1;
//	}
//
//	double lim = b0 / (1 - q);
//
//	std::cout << std::fixed << std::setprecision(10);
//	std::cout << "Предел суммы при n -> бесконечность: " << lim << std::endl;
//
//	for (int n = 1; n <= 100; n++)
//	{
//		double sum = b0 * (1 - pow(q, n)) / (1 / q);
//		std::cout << "Сумма при n = " << n << ": " << sum << std::endl;
//	}
//	return 0;
//}

// #3
// #3.1 - сложнаааа, мозг атрофировался
//double f(double x)
//{
//	return x * x;
//}
//
//double trapez(double a, double b, int n)
//{
//	double h = (b - a) / n;
//	double sum = 0;
//
//	for (int i = 0; i < n; ++i)
//	{
//		double x_i = a + i * h;
//		sum += (f(x_i + h) + f(x_i)) / 2.0;
//	}
//	return h * sum;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	double a, b;
//	int n;
//
//	std::cout << "Нижний предел a: ";
//	std::cin >> a;
//	std::cout << "Верхний предел b: ";
//	std::cin >> b;
//	std::cout << "Кол-во трапеций n: ";
//	std::cin >> n;
//
//	if (n <= 0 || a >= b)
//	{
//		std::cout << "Некорректные данные" << std::endl;
//		return 1;
//	}
//
//	double integtal = trapez(a, b, n);
//
//	std::cout << std::fixed << std::setprecision(10);
//	std::cout << "Приближенное значение интеграла: " << integtal << std::endl;
//
//	return 0;
//}

// #3.2
//double f(double x)
//{
//	return -0.5 * x * x + 6 * x - 10;
//}
//double trapez(double a, double b, double h)
//{
//	int n = static_cast<int>((b - a) / h);
//	double sum = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		double x_i = a + 1 * h;
//		sum += (f(x_i + h) + f(x_i)) / 2.0;
//	}
//	return h * sum;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	double a = 2, b = 10;
//	double h = 0.1;
//
//	double integral = trapez(a, b, h);
//
//	std::cout << std::fixed << std::setprecision(10);
//	std::cout << "Приближенное значение интеграла: " << integral << std::endl;
//
//	return 0;
//}

// #4 - мозг атрофирован, спасибо.