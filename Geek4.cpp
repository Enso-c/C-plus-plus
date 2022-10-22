//Задания 2,4 используют данные глобальных переменных,инициализируемых в задании 1
#include <iostream>
int g_a, g_b;
int task1()
{
	int l_sum;
	std::cout << "Enter the first number\n" ;
	std::cin >> g_a;
	std::cout << "Enter the second nubmer\n";
	std::cin >> g_b;
	l_sum = g_a + g_b;
	if (l_sum >= 10 && l_sum <= 20)
	{
		std::cout << "True for task 1";
	}
	else
		std::cout << "False for task 1";
	return 0;
}

int task2()
{
	if ((g_a == 10 && g_b == 10) || (g_a + g_b == 10))
	{
		std::cout << "True for task 2";
	}
	else
		std::cout << "False for task 2";
	return 0;
}
int task3() 
{
	size_t i;
	for (size_t i = 1; i < 50; i+=2)
	{
		{
			std::cout << i << '\n';
		}
	};	
	return 0;
}
int task4() 
{
	if ((g_a % 1 == 0) && (g_a % g_a == 0))
	{
		std::cout << "This number is integer:" << g_a;
	}
	return 0;
}
int task5()
{
	int l_year;
	std::cout << "Pleas,enter the year:" << std::endl;
	std::cin >> l_year;
	if ((l_year % 4 == 0) && (l_year % 400 == 0) && !(l_year % 100 == 0))
	{
		std::cout << l_year <<std::endl << "This is leap year!"<<std::endl;
	}
	else
		std::cout << "No,this is no leap year..."<<std::endl;
	return 0;
}
int main()
{

	task1();
	std::cout << '\n';
	task2();
	std::cout << '\n';
	task3();
	std::cout << '\n';
	task4();
	std::cout << '\n';
	task5();
	std::cout << '\n';
	return 0;
}


