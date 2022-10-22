#include <iostream>
#include<math.h>
int i;
void Arr(int* arr[], int size);
int main()
{
	return 0;
}
void Arr(int* arr[], int size) 
{
	
	arr[0] = 1;
	for (int i = 1; i < size; i++)
	{
		arr[i] = arr[i+1] << 1;
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << std::endl;
	}
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
	delete[] arr;
}


