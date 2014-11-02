/*Libraries*/
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#include "aspectRatioCaluclator.h"
#include "Downloads.h"
int answer;


using namespace std;


int main()
{
	
	cout << "Hello, and welcome to Editors Toolkit" << endl;
	cout << "In order to start, select an option: " << endl;
	cout << "1. Aspect ratio calculator. " << endl;
	cout << "2. Open an url" << endl;
	cin >> answer;
	switch (answer)
	{
	case 1:
		calculateRatio();
		break;
	case 2:
		mainDownloads();
	default:
		system("exit");


	}
	system("pause");


}