#include <iostream>
#include<cmath>
size_t i;
double inline dScanArr(double arr[], size_t n);//объявление функций
double inline dPrintArr(double arr[], size_t n);
int Invert(int arr[], size_t n);
int _fastcall TriplStep(int arr2[], size_t q);
int _fastcall CycleShift(int arr3[], size_t p);
bool CheckBalance(int arr4[], size_t SIZE_ARRAY_4);
int main()
{
	const size_t n = 5, q = 25,p=5,SIZE_ARRAY_4=10;
	double arr[n];
	int arr1[n],arr2[q],arr3[p],arr4[SIZE_ARRAY_4];
	CheckBalance(arr4, SIZE_ARRAY_4);
	CycleShift(arr3,p);
	std::cout << "Enter values's array:" << std::endl;
	dScanArr(arr, n);
	std::cout << std::endl;
	dPrintArr(arr,  n); 
	std::cout << std::endl;
	Invert(arr1, n);
	std::cout << std::endl;
	TriplStep(arr2,q);
	return 0;
}
double inline dScanArr(double arr[], size_t n)//определение функции ввода массива типа double
{
	for (i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	return 0;
}
double inline dPrintArr(double arr[], size_t n)//определение функции вывода массива типа double
{
	for (i = 0; i < n; i++)
	{
		std::cout << *(arr+i) << '\n';
	}
	return 0;
}
int Invert(int arr1[],size_t n)
{
	int ch;
	Comeback://точка возврата в случае неккоректного ввода значения массива
	std::cout << "Enter 0 or 1";
	std::cout << std::endl;
	for(i = 0; i < n; i++)//ввод массива в ручную
	{
		std::cin >> ch;
		if ((ch == 0) || (ch == 1))
		{
			arr1[i] = ch;
		}
		else {
			std::cout << "Error";
			std::cout << std::endl;
			goto Comeback;
		}
	}
	std::cout << std::endl;
	for (i = 0; i < n; i++) //вывод массива на экран до инверсии
	{
		std::cout << arr1[i];
	}
	std::cout << std::endl;
	for (i = 0; i < n; i++)//инвертирование значений
	{
		(arr1[i] == 1) ? 0: 1;
	}
	for (i = 0; i < n; i++)//вывод инвертированного массива
	{
		std::cout << arr1[i];
	}
	std::cout << std::endl;
	return 0;
}
int _fastcall TriplStep(int arr2[], size_t q)//массив с  шагом в три единицы
{
	int var = 0,STEP=3;
	for (size_t i = 1; i < q; i++)
	{
		arr2[i] = var + STEP;
		std::cout << arr2[i] << std::endl;
	}
	return 0;
}
void ShiftRight(int arr3[],size_t p) 
{
	int tmp = arr3[p-1];
	for (int i = p-1; i > 0 ;i--)
	{
		arr3[i] = arr3[i - 1];
	}
	arr3[0] = tmp;
}
void ShiftLeft(int arr3[], size_t p)
{
	int tmp = arr3[0];
	for (int i = 0; i < p ; i++)
	{
		arr3[i] = arr3[i + 1];
		arr3[p] = tmp;
	}
}
int _fastcall CycleShift(int arr3[], size_t p)
{
	std::cout << "Enter values of array for cucle shift" << std::endl;
	for (int i = 0; i < p; i++)
		{
			std::cin >> arr3[i];
		}
	std::cout << std::endl;
	for (int i = 0; i < p; i++)
		{
			std::cout << arr3[i] << '\n';
		}
	std::cout << std::endl;
	int k;
	std::cout << "Enter volum shift" << std::endl;
	std::cin >> k;
	std::cout << std::endl;
	int k1 = abs(k)%p;
	int lenght = p;
	if (abs(k)<=(abs(lenght)))
	{
		if (k > 0) 
		{
			for (int i = 0; i < k; i++)
			{
				ShiftRight(arr3, p);
			}
			for (int i = 0; i < p; i++)
			{
				std::cout << arr3[i] << '\n';
			}
		}
		else
		{
			for (int i = 0; i < abs(k); i++)
			{
				ShiftLeft(arr3, p);
			}
			for (int i = 0; i < p; i++)
			{
				std::cout << arr3[i] << '\n';
			}
		}
		
	}
	else
	{
		if (abs(k1 > 0))
		{
			for (int i = 0; i < abs(k1); i++)
			{
				ShiftRight(arr3, p);
			}
			for (int i = 0; i < p; i++)
			{
				std::cout << arr3[i] << '\n';
			}
		}
		else
		{
			for (int i = 0; i < abs(k1); i++)
			{
				ShiftLeft(arr3, p);
			}
			for (int i = 0; i < p; i++)
			{
				std::cout << arr3[i] << '\n';
			}
		}
		
		return 0;
	}
}
bool CheckBalance(int arr4[], size_t SIZE_ARRAY_4) 
{
	int LeftBalance = 0;
	int RightBalance = 0;
	bool Balance;
	int i;
	std::cout << "Enter the values of array 4";
	std::cout << std::endl;
	for (i = 0; i < SIZE_ARRAY_4; i++)
		{
		std::cin >> arr4[i];
		}
	for (i=0; i < (SIZE_ARRAY_4/2); i++)
		{
		LeftBalance = arr4[i] + LeftBalance;
		}
	for (i=(SIZE_ARRAY_4/2); i < SIZE_ARRAY_4;i++)
		{
			RightBalance = arr4[i] + RightBalance;
		}
	if (LeftBalance == RightBalance) 
		{
			Balance = true;
			std::cout << "Balance's point is:" << LeftBalance << std::endl;
		}
		else
		{
			Balance = false;
			std::cout << "Balance's apsent" << std::endl;
	    }
	return Balance;
}
