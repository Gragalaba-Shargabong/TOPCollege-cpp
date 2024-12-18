#include <iostream>

// #1
//int main()
//{
//	setlocale(LC_ALL, "rus");
//
//	int a, m;
//
//	std::cout << "Число a: ";
//	std::cin >> a;
//	std::cout << "Число m: ";
//	std::cin >> m;
//
//	if (m == 0)
//	{
//		std::cout << "Деление на ноль невозможно." << std::endl;
//		return 1;
//	}
//	if (a % m == 0)
//	{
//		std::cout << "Число " << a << " делится на " << m << " нацело." << std::endl;
//	}
//	else
//	{
//		std::cout << "Число " << a << " не делится на " << m << " нацело." << std::endl;
//	}
//
//	return 0;
//}

// #2
//int main()
//{
//	setlocale(LC_ALL, "rus");
//
//	int age;
//
//	std::cout << "Введи возраст: ";
//	std::cin >> age;
//
//	if (age < 0 || age > 120)
//	{
//		std::cout << "Некорректный возраст." << std::endl;
//		return 1;
//	}
//
//	
//	std::cout << "Частично-дееспособный? " << (age >= 6 ? "Да" : "Нет") << std::endl;
//	std::cout << "Имеет паспорт? " << (age >= 14 ? "Да" : "Нет") << std::endl;
//	std::cout << "Имеет ли неполное среднее образование? " << (age >= 16 ? "Да" : "Нет") << std::endl;
//	std::cout << "Является ли совершеннолетним? " << (age >= 18 ? "Да" : "Нет") << std::endl;
//	std::cout << "Может ли быть депутатом? " << (age >= 21 ? "Да" : "Нет") << std::endl;
//	std::cout << "Может ли быть избран в президенты? " << (age >= 35 ? "Да" : "Нет") << std::endl;
//	std::cout << "Пенсионер? " << (age >= 65 ? "Да" : "Нет") << std::endl;
//	std::cout << "Нетрудоспособный по возрасту? " << (age >= 80 ? "Да" : "Нет") << std::endl;
//
//	return 0;
//}

// #3
//int main()
//{
//	setlocale(LC_ALL, "rus");
//
//	double x, y;
//
//	std::cout << "Координата x: ";
//	std::cin >> x;
//	std::cout << "Координата y: ";
//	std::cin >> y;
//
//	if (x == 0 && y == 0)
//	{
//		std::cout << "Точка находится в начале координат" << std::endl;
//	}
//	
//	else if (x == 0)
//	{
//		if (y > 0)
//		{
//			std::cout << "Точка на границе 1 и 2 четвертей" << std::endl;
//		}
//		
//		else if (y == 0)
//		{
//			if (x > 0)
//			{
//				std::cout << "Точка на границе 1 и 4 четвертей" << std::endl;
//			}
//			
//			else
//			{
//				std::cout << "Точка на границе 2 и 3 четвертей" << std::endl;
//			}
//		}
//		
//		else if (x > 0 && y > 0)
//		{
//			std::cout << "Точка в 1 четверти" << std::endl;
//		}
//		
//		else if (x < 0 && y > 0)
//		{
//			std::cout << "Точка во 2 четверти" << std::endl;
//		}
//		
//		else if (x < 0 && y < 0)
//		{
//			std::cout << "Точка в 3 четверти" << std::endl;
//		}
//		
//		else
//		{
//			std::cout << "Точка в 4 четверти" << std::endl;
//		}
//	}
//
//	return 0;
//}

// #4
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	char hex;
//
//	std::cout << "Введи 16-теричный символ: ";
//	std::cin >> hex;
//
//	int value;
//	switch (tolower(hex))
//	{
//	case '0': value = 0; break;
//	case '1': value = 1; break;
//	case '2': value = 2; break;
//	case '3': value = 3; break;
//	case '4': value = 4; break;
//	case '5': value = 5; break;
//	case '6': value = 6; break;
//	case '7': value = 7; break;
//	case '8': value = 8; break;
//	case '9': value = 9; break;
//	case 'a': value = 10; break;
//	case 'b': value = 11; break;
//	case 'c': value = 12; break;
//	case 'd': value = 13; break;
//	case 'e': value = 14; break;
//	case 'f': value = 15; break;
//
//	default:
//		std::cout << "ERROR: Некорректный 16-теричный символ" << std::endl;
//		return 1;
//	}
//
//	std::cout << "Десятичное значение: " << value << std::endl;
//
//	return 0;
//}