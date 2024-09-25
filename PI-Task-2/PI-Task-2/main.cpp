#include "task-2.h"
int main()
{
	setlocale(0, "");
	while (true)
	{
		std::string s;
		std::cout << "¬ведите строку (только цифры) : ";
		std::cin >> s;
		int b;
		std::cout << "¬ведите основание системы счислени€ : ";
		std::cin >> b;
		std::cout << "–езультат перевода в 10 систему счислени€ : " << Return_To_System_Of_Num(s,b) << std::endl;
	}
}