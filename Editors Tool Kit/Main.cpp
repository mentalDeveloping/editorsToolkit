/*Libraries*/
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#include "aspectRatioCaluclator.h"
int answer;


using namespace std;


int main()
{
	cout << "Cu" << endl;
	cout << "Hello, and welcome to Editors Toolkit" << endl;
	cout << "In order to start, select an option: " << endl;
	cout << "1. Aspect ratio calculator. " << endl;
	cin >> answer;
	switch (answer)
	{
	case 1:
		calculateRatio();
		break;
	default:
		system("exit");


	}
	system("pause");


}