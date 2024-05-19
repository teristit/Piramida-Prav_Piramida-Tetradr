#include <iostream>
#include <Piramida.h>
#include <Tetradr.h>
#include <Prav_Piramida.h>
/// Kurshin
void piramidamenu() {
	figure::Piramida object;
	int userchoise = -1;
	std::cout << "Здравствйте, выберите действие:\n" << "0: Выход из программы\n" << "1: Ввести стороны пирамиды\n" << "2: Ввести ребро\n" 
		<< "3: Ввести основание\n" << "4: Вывести площадь пирамиды \n" << "5: Вывести пирамиду\n";
	while (std::cin >> userchoise) {
		switch (userchoise)
		{
		case 0:
			return;
		case 1:
			std::cout << "Введите строны пирамиды (3 ребра, 3 основания)\n";
			double r1, r2, r3, b1, b2, b3;
			std::cin >> r1 >> r2 >> r3 >> b1 >> b2 >> b3;
			object.set(r1,r2,r3,b1,b2,b3);
			break;
		case 2:
			int temp;
			std::cout << "Введите номер ребра для ввода (1-3)\n";
			std::cin >> temp;
			switch (temp)
			{
			case 1:
				std::cout << "Введите длину\n";
				double temp;
				std::cin >> temp;
				object.setr1(temp);
				break;
			case 2:
				std::cout << "Введите длину\n";
				double temp;
				std::cin >> temp;
				object.setr2(temp);
				break;
			case 3:
				std::cout << "Введите длину\n";
				double temp;
				std::cin >> temp;
				object.setr3(temp);
				break;
			default:
				std::cout << "Нет такого ребра\n";
				break;
			}
			break;
		case 3: {
			int temp;
			std::cout << "Выберите основание для ввода (1-3)\n";
			std::cin >> temp;
			switch (temp)
			{
			case 1:
				std::cout << "Введите длину\n";
				double temp;
				std::cin >> temp;
				object.setb1(temp);
				break;
			case 2:
				std::cout << "Введите длину\n";
				double temp;
				std::cin >> temp;
				object.setb2(temp);
				break;
			case 3:
				std::cout << "Введите длину\n";
				double temp;
				std::cin >> temp;
				object.setb3(temp);
				break;
			default:
				std::cout << "Нет такого основания\n";
					break;
			}
		}
			  break;
		case 4: 
			std::cout<<object.area();
			break;
		case 5:
			object.show();
		default:
			std::cout << "Нет такого действия\n";
			break;
		}
	}
}
void mainmenu() {
	int type;
	std::cout << "Здравствйте, выберите действие:\n" << "0: Выход из программы\n" << "1: Пирамида \n" << "2: Тетраедр\n" << "3: Правильная пирамида\n";
	while (std::cin >> type) {
		switch (type)
		{
		case 0:
			return;
		case 1:
			piramidamenu();
			return;
		case 2:
			///тетраед меню
			return;
		case 3:
			///правильная пирамида меню
			return;
		default:
			std::cout << "Нет такого типа";
			break;
		}
	}
}
