#include <iostream>

int main()
{
	std::cout << "This is a test project.\n\n";

	char option;
	do
	{
		std::cout << R"(Do you want me to write "Hello, World" [Y/N])" << "\n";
		std::cin >> option;

		switch (option)
		{
		case 'y':
		case 'Y':
			std::cout << "Hello, World!\n";
			std::cout << "Once again. ";
			break;
		default:
			std::cout << "Goodbye!\n" << std::endl;
		}
	} while (option == 'y' || option == 'Y');

	return 0;
}