#include <iostream>

// #1
//int main()
//{
//	setlocale(LC_ALL, "rus");
//
//	int a, m;
//
//	std::cout << "����� a: ";
//	std::cin >> a;
//	std::cout << "����� m: ";
//	std::cin >> m;
//
//	if (m == 0)
//	{
//		std::cout << "������� �� ���� ����������." << std::endl;
//		return 1;
//	}
//	if (a % m == 0)
//	{
//		std::cout << "����� " << a << " ������� �� " << m << " ������." << std::endl;
//	}
//	else
//	{
//		std::cout << "����� " << a << " �� ������� �� " << m << " ������." << std::endl;
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
//	std::cout << "����� �������: ";
//	std::cin >> age;
//
//	if (age < 0 || age > 120)
//	{
//		std::cout << "������������ �������." << std::endl;
//		return 1;
//	}
//
//	
//	std::cout << "��������-������������? " << (age >= 6 ? "��" : "���") << std::endl;
//	std::cout << "����� �������? " << (age >= 14 ? "��" : "���") << std::endl;
//	std::cout << "����� �� �������� ������� �����������? " << (age >= 16 ? "��" : "���") << std::endl;
//	std::cout << "�������� �� ����������������? " << (age >= 18 ? "��" : "���") << std::endl;
//	std::cout << "����� �� ���� ���������? " << (age >= 21 ? "��" : "���") << std::endl;
//	std::cout << "����� �� ���� ������ � ����������? " << (age >= 35 ? "��" : "���") << std::endl;
//	std::cout << "���������? " << (age >= 65 ? "��" : "���") << std::endl;
//	std::cout << "���������������� �� ��������? " << (age >= 80 ? "��" : "���") << std::endl;
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
//	std::cout << "���������� x: ";
//	std::cin >> x;
//	std::cout << "���������� y: ";
//	std::cin >> y;
//
//	if (x == 0 && y == 0)
//	{
//		std::cout << "����� ��������� � ������ ���������" << std::endl;
//	}
//	
//	else if (x == 0)
//	{
//		if (y > 0)
//		{
//			std::cout << "����� �� ������� 1 � 2 ���������" << std::endl;
//		}
//		
//		else if (y == 0)
//		{
//			if (x > 0)
//			{
//				std::cout << "����� �� ������� 1 � 4 ���������" << std::endl;
//			}
//			
//			else
//			{
//				std::cout << "����� �� ������� 2 � 3 ���������" << std::endl;
//			}
//		}
//		
//		else if (x > 0 && y > 0)
//		{
//			std::cout << "����� � 1 ��������" << std::endl;
//		}
//		
//		else if (x < 0 && y > 0)
//		{
//			std::cout << "����� �� 2 ��������" << std::endl;
//		}
//		
//		else if (x < 0 && y < 0)
//		{
//			std::cout << "����� � 3 ��������" << std::endl;
//		}
//		
//		else
//		{
//			std::cout << "����� � 4 ��������" << std::endl;
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
//	std::cout << "����� 16-�������� ������: ";
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
//		std::cout << "ERROR: ������������ 16-�������� ������" << std::endl;
//		return 1;
//	}
//
//	std::cout << "���������� ��������: " << value << std::endl;
//
//	return 0;
//}