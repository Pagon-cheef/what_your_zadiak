/*
	Написать программу, которая ...
		1) ввод данных в массив из 8 элементов типа ZNAK, записи упорядочить по дате рождения
		2) вывод на экран пользователей, родившихся под знаком, который введен с клавиаатуры
*/

#include <iostream>

using namespace std;

void display_zodiak(int zodiac)
{
	if (zodiac >= 121 && zodiac <= 219)   cout << "водолей\n";
	if (zodiac >= 220 && zodiac <= 320)   cout << "рыбы\n";
	if (zodiac >= 321 && zodiac <= 420)   cout << "овен\n";
	if (zodiac >= 421 && zodiac <= 521)   cout << "телец\n";
	if (zodiac >= 522 && zodiac <= 621)   cout << "близнецы\n";
	if (zodiac >= 621 && zodiac <= 722)   cout << "рак\n";
	if (zodiac >= 723 && zodiac <= 823)   cout << "лев\n";
	if (zodiac >= 824 && zodiac <= 923)   cout << "дева\n";
	if (zodiac >= 924 && zodiac <= 1023)  cout << "весы\n";
	if (zodiac >= 1024 && zodiac <= 1122) cout << "скорпион\n";
	if (zodiac >= 1123 && zodiac <= 1221) cout << "стрелец\n";
	if (zodiac >= 1222 || zodiac <= 120)  cout << "козерог\n";
}

int main()
{
	setlocale(LC_ALL, "ru");


	int num, day, month;

	cout << "Enter day of your Birthday\n";
	cin >> day;
	cout << "Enter month of your Birthday\n";
	cin >> month;
	num = 100 * month + day;

	display_zodiak(num);


	cout << endl << endl;
	system("pause");
	return EXIT_SUCCESS;
}