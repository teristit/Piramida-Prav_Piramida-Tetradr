#include <iostream>
#include <Piramida.h>
#include <Tetradr.h>
#include <Prav_Piramida.h>
/// Kurshin
void piramidamenu() {
	figure::Piramida object;
	int userchoise = -1;
	std::cout << "�����������, �������� ��������:\n" << "0: ����� �� ���������\n" << "1: ������ ������� ��������\n" << "2: ������ �����\n" 
		<< "3: ������ ���������\n" << "4: ������� ������� �������� \n" << "5: ������� ��������\n";
	while (std::cin >> userchoise) {
		switch (userchoise)
		{
		case 0:
			return;
		case 1:
			std::cout << "������� ������ �������� (3 �����, 3 ���������)\n";
			double r1, r2, r3, b1, b2, b3;
			std::cin >> r1 >> r2 >> r3 >> b1 >> b2 >> b3;
			object.set(r1,r2,r3,b1,b2,b3);
			break;
		case 2:
			int temp;
			std::cout << "������� ����� ����� ��� ����� (1-3)\n";
			std::cin >> temp;
			switch (temp)
			{
			case 1:
				std::cout << "������� �����\n";
				double temp;
				std::cin >> temp;
				object.setr1(temp);
				break;
			case 2:
				std::cout << "������� �����\n";
				double temp;
				std::cin >> temp;
				object.setr2(temp);
				break;
			case 3:
				std::cout << "������� �����\n";
				double temp;
				std::cin >> temp;
				object.setr3(temp);
				break;
			default:
				std::cout << "��� ������ �����\n";
				break;
			}
			break;
		case 3: {
			int temp;
			std::cout << "�������� ��������� ��� ����� (1-3)\n";
			std::cin >> temp;
			switch (temp)
			{
			case 1:
				std::cout << "������� �����\n";
				double temp;
				std::cin >> temp;
				object.setb1(temp);
				break;
			case 2:
				std::cout << "������� �����\n";
				double temp;
				std::cin >> temp;
				object.setb2(temp);
				break;
			case 3:
				std::cout << "������� �����\n";
				double temp;
				std::cin >> temp;
				object.setb3(temp);
				break;
			default:
				std::cout << "��� ������ ���������\n";
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
			std::cout << "��� ������ ��������\n";
			break;
		}
	}
}
void mainmenu() {
	int type;
	std::cout << "�����������, �������� ��������:\n" << "0: ����� �� ���������\n" << "1: �������� \n" << "2: ��������\n" << "3: ���������� ��������\n";
	while (std::cin >> type) {
		switch (type)
		{
		case 0:
			return;
		case 1:
			piramidamenu();
			return;
		case 2:
			///������� ����
			return;
		case 3:
			///���������� �������� ����
			return;
		default:
			std::cout << "��� ������ ����";
			break;
		}
	}
}