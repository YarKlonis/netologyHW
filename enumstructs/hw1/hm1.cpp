
#include <iostream>
#include <locale.h>
#include <cstdlib>

enum class months {
	Январь = 1,
	Февраль,
	Март,
	Апрель,
	Май,
	Июнь,
	Июль,
	Август,
	Сентябрь,
	Октябрь,
	Ноябрь,
	Декабрь,
};
int main()

{	setlocale(LC_ALL, "Russian");
	system("chcp 1251");

	int userMonth = 1;
	do
	{	
		std::cout << "Введите номер месяца: ";
		std::cin >> userMonth;

		months month = static_cast<months>(userMonth);
		if (userMonth != 0)
		{
			switch (month)
			{
				case months::Январь:
					std::cout << "Январь" << std::endl;
					break;
				case months::Февраль:
					std::cout << "Февраль" << std::endl;
					break;
				case months::Март:
					std::cout << "Март" << std::endl;
					break;
				case months::Апрель:
					std::cout << "Апрель" << std::endl;
					break;
				case months::Май:
					std::cout << "Май" << std::endl;
					break;
				case months::Июнь:
					std::cout << "Июнь" << std::endl;
					break;
				case months::Июль					:
					std::cout << "Июль" << std::endl;
					break;
				case months::Август:
					std::cout << "Август" << std::endl;
					break;
				case months::Сентябрь:
					std::cout << "Сентябрь" << std::endl;
					break;
				case months::Октябрь:
					std::cout << "Октябрь" << std::endl;
					break;
				case months::Ноябрь:
					std::cout << "Ноябрь" << std::endl;
					break;
				case months::Декабрь:
					std::cout << "Декабрь" << std::endl;
					break;
				default:
					std::cout << "Неправильный номер!" << std::endl;
					break;
			}
		}
	} while (userMonth != 0);
	std::cout << "До свидания" << std::endl;
}