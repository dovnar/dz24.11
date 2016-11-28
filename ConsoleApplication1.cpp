// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Steck.h"

int main()
{
	CSteck vSteck;
	int arr[] = { 12,24,54,6,32,54,25,3,6,63,4 };
	for (auto n : arr)
	{
		vSteck.Push(n);
	}
	int result;
	auto pullResult = vSteck.pull(result);
	while (pullResult)
	{
		std::cout << result << " ";
		pullResult = vSteck.pull(result);
	} 
	std::cout << std::endl;
    return 0;
}

