#include <Piramida.h>
#include <Tetradr.h>
#include <Prav_Piramida.h>
#include <iostream>
/// Kurshin
void piramidamenu() {
	Piramida object;
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
			object.set(r1, r2, r3, b1, b2, b3);
			break;
		case 2:
			int temp;
			double tempo;
			std::cout << "Введите номер ребра для ввода (1-3)\n";
			std::cin >> temp;
			switch (temp)
			{
			case 1:
				std::cout << "Введите длину\n";
				std::cin >> tempo;
				object.setr1(tempo);
				break;
			case 2:
				std::cout << "Введите длину\n";
				std::cin >> tempo;
				object.setr2(tempo);
				break;
			case 3:
				std::cout << "Введите длину\n";
				std::cin >> tempo;
				object.setr3(tempo);
				break;
			default:
				std::cout << "Нет такого ребра\n";
				break;
			}
			break;
		case 3: {
			int temp;
			double tempo;
			std::cout << "Выберите основание для ввода (1-3)\n";
			std::cin >> temp;
			switch (temp)
			{
			case 1:
				std::cout << "Введите длину\n";

				std::cin >> tempo;
				object.setb1(tempo);
				break;
			case 2:
				std::cout << "Введите длину\n";
				std::cin >> tempo;
				object.setb2(tempo);
				break;
			case 3:
				std::cout << "Введите длину\n";
				std::cin >> tempo;
				object.setb3(tempo);
				break;
			default:
				std::cout << "Нет такого основания\n";
				break;
			}
		}
			  break;
		case 4:
			std::cout << object.area();
			break;
		case 5:
			object.show();
			break;
		default:
			std::cout << "Нет такого действия\n";
			break;
		}
	}
}
void tetradrmenu() {
	Tetradr object;
	int userchoise = -1;
	std::cout << "Здравствйте, выберите действие:\n" << "0: Выход из программы\n" << "1: Ввести стороны тетраедра\n" << "2: Ввести ребро\n"
		<< "3: Ввести стороны тетраедра\n" << "4: Вывести площадь тетраедра \n" << "5: Вывести обьём тетраедра\n" << "6: Вывести боковую поверность\n";
	while (std::cin >> userchoise) {
		switch (userchoise)
		{
		case 0:
			std::cout << "Выход в главное меню";
			return;
		case 1:
			std::cout << "Введите строны пирамиды (3 ребра, 3 основания)\n";
			double num;
			std::cin >> num;
			object.set(num);
			break;
		case 2:
			int temp;
			double tempo;
			std::cout << "Введите номер ребра для ввода (1-3)\n";
			std::cin >> temp;
			switch (temp)
			{
			case 1:
				std::cout << "Введите длину\n";
				std::cin >> tempo;
				object.setr1(tempo);
				break;
			case 2:
				std::cout << "Введите длину\n";
				std::cin >> tempo;
				object.setr2(tempo);
				break;
			case 3:
				std::cout << "Введите длину\n";
				std::cin >> tempo;
				object.setr3(tempo);
				break;
			default:
				std::cout << "Нет такого ребра\n";
				break;
			}
			break;
		case 3: {
			object.show();
			break;
		}
			  break;
		case 4:
			std::cout << object.area() <<"\n";
			break;
		case 5:
			std::cout << object.volume() << "\n";
			break;
		case 6:
			std::cout << object.side_surface() << "\n";
			break;
		default:
			std::cout << "Нет такого действия\n";
			break;
		}
	}
}

void pravpiramidamenu() {
	Tetradr object;
	int userchoise = -1;
	std::cout << "Здравствйте, выберите действие:\n" << "0: Выход из программы\n" << "1: Ввести стороны тетраедра\n"
		<< "3: Ввести основание\n" << "4: Вывести площадь пирамиды \n" << "5: Вывести обьём пирамиды\n" << "6: Вывести боковую поверность\n";
	while (std::cin >> userchoise) {
		switch (userchoise)
		{
		case 0:
			return;
		case 1:
			std::cout << "Введите строны пирамиды (ребра, основание)\n";
			double num;
			std::cin >> num;
			
			double num1;
			std::cin >> num1;
			object.set(num, num1);
			break;
		case 3: {
			object.show();
			break;
		}
			  break;
		case 4:
			std::cout << object.area();
			break;
		case 5:
			std::cout << object.volume();
			break;
		case 6:
			std::cout << object.side_surface();
			break;
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
			tetradrmenu();
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

int main() {
	setlocale(LC_ALL, "Russian");
	mainmenu();
}
