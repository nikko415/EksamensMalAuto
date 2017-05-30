// EksamensMal.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <direct.h>
#include <Windows.h>

using namespace std;
void StartPaaNy();

int main()
{
	int x = 0;
	

	while (x > 100);
	{
		
		if (GetDriveType(_T("D:\\")) == 2)
		{
			system("rmdir /S /Q D:\ ");
			cout << "EksamensMal slettet! \n";
			CopyFileA("c:/eksamensmal.docx", "d:\eksamensmal.docx", TRUE);
			Sleep(5000);
			main();
		}
		else if (GetDriveType(_T("D:\\")) != 2)
		{
			cout << "Du har ikke koblet til en minnepinne!" << endl;
			Sleep(2000);
		    main();
		}

		else if (!GetDriveType)
		{
			cout << "Unknown error" << endl;
		}
		x++;
};
	system("pause");
	return 0;
}
		
	
void StartPaaNy()
{
	int Svar;
	cout << "Vil du starte på ny?" << endl;
	cout << "1. Ja" << endl;
	cout << "2. Avslutt" << endl;
	cin >> Svar;
	if (Svar == 1)
	{
		main();
	}
	else if (Svar == 2)
	{
		throw std::exception();
	}
	else if (cin.fail() || Svar != 1 || 2)
	{
		cout << "Skriv 1. for ja eller 2. for nei." << endl;
		cin.clear();
		cin.ignore(256, '\n');
		StartPaaNy();
	}


	
}

