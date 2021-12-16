/*
	Написать программу, которая ...
		1) ввод данных в массив из 8 элементов типа ZNAK, записи упорядочить по дате рождения
		2) вывод на экран пользователей, родившихся под знаком, который введен с клавиаатуры
*/

#include <iostream>

using namespace std;

void display_zodiak(int zodiac)
{
	if (zodiac >= 121 && zodiac <= 219)
	{
		cout << "\nВаш знак зодиака - водолей\n";
		return;
	}
	if (zodiac >= 220 && zodiac <= 320)
	{
		cout << "\nВаш знак зодиака - рыбы\n";
		return;
	}
	if (zodiac >= 321 && zodiac <= 420)
	{
		cout << "\nВаш знак зодиака - овен\n";
		return;
	}
	if (zodiac >= 421 && zodiac <= 521)
	{
		cout << "\nВаш знак зодиака - телец\n";
		return;
	}
	if (zodiac >= 522 && zodiac <= 621)
	{
		cout << "\nВаш знак зодиака - близнецы\n";
		return;
	}
	if (zodiac >= 621 && zodiac <= 722)
	{
		cout << "\nВаш знак зодиака - рак\n";
		return;
	}
	if (zodiac >= 723 && zodiac <= 823)
	{
		cout << "\nВаш знак зодиака - лев\n";
		return;
	}
	if (zodiac >= 824 && zodiac <= 923)
	{
		cout << "\nВаш знак зодиака - дева\n";
		return;
	}
	if (zodiac >= 924 && zodiac <= 1023)
	{
		cout << "\nВаш знак зодиака - весы\n";
		return;
	}
	if (zodiac >= 1024 && zodiac <= 1122)
	{
		cout << "\nВаш знак зодиака - скорпион\n";
		return;
	}
	if (zodiac >= 1123 && zodiac <= 1221)
	{
		cout << "\nВаш знак зодиака - стрелец\n";
		return;
	}
	if (zodiac >= 1222 || zodiac <= 120)
	{
		cout << "\nВаш знак зодиака - козерог\n";
		return;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");


	int num, day, month;

	while (true)
	{
		system("cls");

		cout << "Enter day of your Birthday\n";
		cin >> day;
		cout << "Enter month of your Birthday\n";
		cin >> month;

		if (day && month)
		{
			num = 100 * month + day;

			display_zodiak(num);

			cout << endl << endl;
			system("pause");
		}
		else
		{
			break;
		}
	}


	cout << endl << endl << "Программа завершена!" << endl << endl;
	system("pause");
	return EXIT_SUCCESS;
}