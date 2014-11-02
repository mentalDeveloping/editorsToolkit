/*Libraries*/

#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>


using namespace std;
int leanswer;


void mainDownloads()
{
	cout << "Select a file that you wish to download: " << endl;
	cout << "1. avifrate" << endl;
	cout << "2. Black ops II console, NEWEST" << endl;
	cin >> leanswer;
	switch (leanswer)
	{
	case 1:
		system("start https://www.mediafire.com/?6b9je519w11e64c");
		break;
	case 2:
		system("start https://www.mediafire.com/?6b9je519w11e64c");
		break;
	default:
		cout << "You enetered nothing." << endl;
		break;

	}

}