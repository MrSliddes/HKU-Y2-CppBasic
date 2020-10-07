// VersmorenTymon_CppBass4_v1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"

int main()
{
	Munt_50_Cent munt_50_cent; munt_50_cent.waarde = 50;
	Koffieautomaat k;
	k.getKoffie(munt_50_cent);
	Munt_1_Euro munt_1_euro; munt_1_euro.waarde = 100;
	k.getKoffie(munt_1_euro);
	Munt_Koffiemuntje munt_koffiemuntje; munt_koffiemuntje.waarde = -1;
	k.getKoffie(munt_koffiemuntje);
}

void Koffieautomaat::getKoffie(Munt munt)
{
	if (munt.waarde == 50)
	{
		std::cout << "50 cent muntje geaccepteerd.\n";
		std::cout << "U kunt kiezen uit koffie 0\n";
	}
	else if (munt.waarde == 100)
	{
		std::cout << "1 euro muntje geaccepteerd.\n";
		std::cout << "U kunt kiezen uit koffie 0, 1\n";
	}
	else if (munt.waarde == -1)
	{
		std::cout << "Koffie muntje geaccepteerd.\n";
		std::cout << "U kunt kiezen uit koffie 0, 1 of 2\n";
	}
	else
	{
		std::cout << "This coin value isnt accepted.\n";
	}
}

