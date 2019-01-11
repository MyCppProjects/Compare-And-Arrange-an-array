#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include "CompareAndArrange.h"

using namespace std;

int arr[8], i, k, flag, temp;

int main()
{
	cout << "Welcome to Compare And Arrange 8 numbers program.(Fairlanders)" << endl;
	InputNumbers();
	for (k = 1; k < 8 ; k++)
	{
		flag = 0;
			for (i = 0; i < 8-k; i++)
			{
				if (arr[i] > arr[i+1])
				{
					temp = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = temp;
					flag = 1;
				}
			}
			if (flag == 0)
			{
				break;
			}
	}
	for (int i = 0; i < 8; i++)
	{
		cout << "  " << arr[i];
	}
}

void InputNumbers()
{
	// Input of 8 numbers...
	cout << "Please enter eight values." << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << "I want to enter: ";
		cin >> arr[i];
	}
	cout << "Sorting numbers..." << endl;
	Sleep(2000);
}
