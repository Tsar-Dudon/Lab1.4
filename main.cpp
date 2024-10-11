#include <iostream>

int main()
{
	std::cout << "Task number: ";
	short TaskNum;
	std::cin >> TaskNum;
	switch (TaskNum)
	{
		case 1: std::cout << "Enter A: ";
				int a;
				std::cin >> a;
				std::cout << "Enter B: ";
				int b;
				std::cin >> b;
				std::cout << "Enter C: ";
				int c;
				std::cin >> c;
				if ((a < b) && (b < c))
					std::cout << "C - B - A = " << (c - b - a) << std::endl;
				else if (a % c == 0)
					std::cout << "A / C + B = " << (a / c + b) << std::endl;
				else
					std::cout << "A + B + C = " <<(a + b + c) << std::endl;
				break;
		case 2: std::cout<< "Item Number: ";
				int n;
				std::cin >> n;
				switch (n)
				{
					case 1: std::cout << "Chupapi Munyanyu, 1.5 litres" << std::endl;
							break;
					case 2: std::cout << "Kiriyeshki" << std::endl;
							break;
					case 3: std::cout << "Orbit bez myati" << std::endl;
							break;
					case 4: std::cout << "Temmie flakes" << std::endl;
							break;
					case 5: std::cout << "Snickers" << std::endl;
							break;
					default: std::cout << "Takogo tovara net" << std::endl;
				}
				break;
			case 3: std::cout << "Enter X: ";
					int x;
					std::cin >> x;
					std::cout << (x > 0 ? "Positive number" : "Negative number") << std::endl;
					break;
			default: std::cout << ("Net takogo zadaniya") << std::endl;
	} 
	return 0;
}