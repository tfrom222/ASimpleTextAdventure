
#include <iostream>
#include <string>
#include <thread>
#include <windows.h>
#include <windows.system.h>
#include "main.h"

using namespace std;


///////////////
#pragma region Sleep Functions
#ifdef _WIN32
#include <windows.h>

void sleep(unsigned milliseconds)
{
	Sleep(milliseconds);
}
#else
#include <unistd.h>

void sleep(unsigned milliseconds)
{
	usleep(milliseconds * 1000); // takes microseconds
}
#endif

#pragma endregion
///////////////




int main::_main()
{

	string bacon[3] = { "Fat", "Meat", "Taste" };


	for each (string bacon in bacon)
	{
	std:cout << bacon << endl;
	}

	//////////////***Game Info***////////////////////
	float AppVersion = 1;
	string Author = "Tobias Nyholm Maneschijn";
	/////////////////////////////////////////////////	

	int o;
	sleep(500);
	// Starting Information
	cout << "A Game by " << Author << endl;
	cout << "Version: " << AppVersion << endl;

	//WriteFunnyThing();


	cin >> o;

	WriteFunnyThing("Text");

}


void main::WriteFunnyThing(string Text)
{
	char Characters[1024];
	strncpy_s(Characters, Text.c_str(), sizeof(Characters));
	Characters[sizeof(Characters) - 1] = 0;

	for each (char Characters in Characters)
	{
		sleep(40);
		cout << Characters;
		Beep(200, 10);
	}
}



