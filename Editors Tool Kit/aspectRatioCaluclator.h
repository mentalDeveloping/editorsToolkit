#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>


/*Script by mental*/

// Y / AR 

int axis;
int ar;
double last;
using namespace std;
string lel;






void toTextDocument()
{
	ofstream myfile;
	myfile.open("Resolution.txt");
	myfile << axis << "X" << last << endl;
	myfile.close();





}
void calculateRatio()
{
	cout << "Do you want us to copy the resolution to a text document ? (Y/N)" << endl;
	cin >> lel;
	if (lel == "Y" || "y")
	{
		cout << "Please input your Y axis: " << endl;
		cin >> axis;
		cout << "Please input your desired aspect ratio: " << endl;
		cin >> ar;
		last = axis / ar;
		cout << "Your resolution should be : " << axis << "x" << last << endl;
		toTextDocument();



		
	}
	else

	{
		cout << "Please input your Y axis: " << endl;
		cin >> axis;
		cout << "Please input your desired aspect ratio: " << endl;
		cin >> ar;
		last = axis / ar;
		cout << "Your resolution should be : " << axis << "x" << last << endl;
	}
	


	


	
}