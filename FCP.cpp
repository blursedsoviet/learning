//first console project, following tutorials to get the idea how to code and how c++ works
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>

//I rather declare main once than declare all functions before main, not sure if it is or not best practice
int main();

//Basic calculator, want to make a graphic better version 
int calculator()
{
	double number1 = 0;
	double number2 = 0;
	double result = 0;
	int calculator_menu_selection = 14;

	while (calculator_menu_selection != 0)
	{
		system("cls");
		std::cout << "      Welcome to the #1 calculator in all C++\n\n\n";
		std::cout << "This incredible calculator has all the following options:" << std::endl
			<< "1.Addition" << std::endl
			<< "2.Substraction" << std::endl
			<< "3.Multiplication" << std::endl
			<< "4.Division" << std::endl
			<< "0.Back to the main menu" << std::endl
			<< "Type here the option you want to use: ";
		std::cin >> calculator_menu_selection;

		if (calculator_menu_selection > 0 && calculator_menu_selection < 5) {
			std::cout << std::endl << "Type here your first number: ";
			std::cin >> number1;
			std::cout << "Type here your second number: ";
			std::cin >> number2;
		};
		if (calculator_menu_selection == 1) {
			result = number1 + number2;
			std::cout << std::endl << number1 << "+" << number2 << " = " << result << std::endl;
			system("pause");
		}
		else if (calculator_menu_selection == 2) {
			result = number1 - number2;
			std::cout << std::endl << number1 << "-" << number2 << " = " << result << std::endl;
			system("pause");
		}
		else if (calculator_menu_selection == 3) {
			result = number1 * number2;
			std::cout << std::endl << number1 << "*" << number2 << " = " << result << std::endl;
			system("pause");
		}
		else if (calculator_menu_selection == 4) {
			result = number1 / number2;
			std::cout << std::endl << number1 << "/" << number2 << " = " << result << std::endl;
			system("pause");
		}
		else if (calculator_menu_selection < 0 || calculator_menu_selection > 4)
		{
			std::cout << calculator_menu_selection << " is not a valid option." << std::endl;
			system("pause");
		}
	};

	std::cout << "You shold thank me for being able to us such an awesome calculator." << std::endl;
	system("pause");
	return 0;
}

//exercise from tutorial, added selection and menu
int temperature_coverter()
{
	double farenheit = 0;
	double celsius = 0;
	int temperature_menu_selection = 0;

	do {
		system("cls");
		std::cout << "What would you like to convert?" << std::endl
			<< "1. From celsius to farenheit" << std::endl
			<< "2. From farenheit to celsius" << std::endl
			<< "0. Back to the main menu" << std::endl
			<< "Type here the option you want to use: ";
		std::cin >> temperature_menu_selection;

		switch (temperature_menu_selection)
		{
		case 1:
			system("cls");
			std::cout << "Type the temperature in celsius degrees: ";
			std::cin >> celsius;
			farenheit = (celsius * 9 / 5) + 32;
			std::cout << celsius << " celsius degrees are " << farenheit << " farenheit degrees." << std::endl;
			system("pause");
			break;
		case 2:
			system("cls");
			std::cout << "Type the temperature in farenheit degrees: ";
			std::cin >> farenheit;
			celsius = (farenheit - 32) * 5 / 9;
			std::cout << farenheit << " farenheit degrees are " << celsius << " celsius degrees." << std::endl;
			system("pause");
			break;
		case 0:
			break;
		default:
			std::cout << temperature_menu_selection << " is not a valid option." << std::endl;
			system("pause");
			break;
		}
	} while (temperature_menu_selection != 0);
	return 0;
}

//wanted to add more shapes but I feel that is just copying formulas, will do it in a better calculator once I know how to add graphic interface
int shape_area()
{
	double area = 0;
	int radius = 0;
	const double pi = 3.14159;
	int shape_menu = 35;

	while (shape_menu != 0) {
		system("cls");
		std::cout << "This is an area calculator for different shapes:" << std::endl
			<< "1.Circle" << std::endl
			<< "0.Back to the main menu" << std::endl
			<< "Type here the shape or option you need: ";
		std::cin >> shape_menu;
		if (shape_menu == 1) {
			system("cls");
			std::cout << "Lets calculate the circle's area:\n" << std::endl
				<< "Type the radius of the circle here: ";
			std::cin >> radius;
			area = pi * pow(radius, 2);
			std::cout << "The area of a circle with a radius of " << radius << " is " << area << std::endl;
			system("pause");
		}
		else if (shape_menu != 0)
		{
			std::cout << shape_menu << " is not a valid option." << std::endl;
			system("pause");
		};
	}
	return 0;
}

//this was fun, added selection of dice and outcomes
int dice_roller()
{
	srand(time(0));
	int dice_selection{ 7 };
	while (dice_selection != 0) {
		system("cls");
		std::cout << "Dice roller menu, select a dice:" << std::endl
			<< "1.D6" << std::endl
			<< "2.D20" << std::endl
			<< "0.Back to the main menu" << std::endl
			<< "Type your selection here: ";
		std::cin >> dice_selection;
		if (dice_selection == 1)
		{
			//Max value is 6 and Minimal value is 1, don't know how this works yet but that is the meaning of the numbers (https://cplusplus.com/reference/cstdlib/rand/)
			short d6_result{ rand() % 6 + 1 };
			std::cout << "Your D6 rolled a " << d6_result << std::endl;
			system("pause");
		}
		else if (dice_selection == 2)
		{
			short d20_result{ rand() % 20 + 1 };
			std::cout << "Your D20 rolled a " << d20_result << std::endl;
			if (d20_result == 20)
			{
				std::cout << "Its a nat 20!!!" << std::endl;
			}
			else if (d20_result == 1)
			{
				std::cout << "Oh... no... it's a critical fail..." << std::endl;
			}
			system("pause");
		}
	}
	int d6_result{ rand() % 6 + 1 };
	std::cout << d6_result;

	return 0;
}

//last addition to code, I think I got the basics with this project(I am probably experiencing dunning-kruger effect start tbh)
int riddle() {

	std::string answer{};
	int attempts{ 0 };
	bool game{ true };
	system("cls");
	std::cout << "Every night Im told what to do, and each morning I do what Im told.But I still dont escape your scold.What am I?" << std::endl
		<< "Type your answer here in lowercase:";
	std::cin.ignore();
	while (game == true)
	{
		std::getline(std::cin, answer);
		if (answer == "i give up")
		{
			std::cout << "That's a shame, it took you " << attempts << " attempts and you didn't even finish, shame!!!" << std::endl;
			system("pause");
			game = false;
		}
		else if (attempts == 2)
		{
			std::cout << std::endl << answer << " is not the answer. Also, you can give up by typing 'i give up'" << std::endl
				<< "Otherwise, you can try again:";
		}
		else if (answer != "alarm")
		{
			std::cout << std::endl << answer << " is not the answer. Try again: ";
		}
		else if (answer == "alarm")
		{
			std::cout << "You are correct, its the alarm. It took you " << attempts << " attempts to solve the riddle." << std::endl;
			system("pause");
			game = false;
		}
		attempts++;
	}
	return 0;
};

//Rather than making a file per simple project made a menu to select them, it was fun, I also learned switches after creating it so I had lots of if statements, switches are much better for this
int main()
{
	int selection = 9;
	while (selection != 0) {
		system("cls");
		std::cout << "Welcome to my first project where I follow tutorials and add random stuff." << std::endl << std::endl
			<< "1.Calculator" << std::endl
			<< "2.Temperature converter (Celsius and Farenheit)" << std::endl
			<< "3.Shape area calculator" << std::endl
			<< "4.Dice roller" << std::endl
			<< "5.A single riddle" << std::endl
			<< "0.End program" << std::endl << std::endl
			<< "Type the number of function you want to use: ";
		std::cin >> selection;
		switch (selection)
		{
		case 1:
			calculator();
			break;
		case 2:
			temperature_coverter();
			break;
		case 3:
			shape_area();
			break;
		case 4:
			dice_roller();
			break;
		case 5:
			riddle();
			break;
		case 0:
			break;
		default:
			std::cout << selection << " is not a valid option." << std::endl;
			system("pause");
			break;
		}
	}
	return 0;
}
/*
	I learned a lot from this project, literally all I know at the moment of this comment (20/5/24).
	My next project will be redoing this from scratch in a graphic interface using "dear imgui", and 
	whatever I do along the way while learning to use that library.
*/