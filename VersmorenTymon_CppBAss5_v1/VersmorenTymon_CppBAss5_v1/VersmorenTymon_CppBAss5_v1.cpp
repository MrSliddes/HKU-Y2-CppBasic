// VersmorenTymon_CppBAss5_v1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"

int main()
{
	Bibliotheek* bibliotheek = new Bibliotheek();
	Boek* boek = new Boek();

	bibliotheek->leenUit(boek->isUitgeleverd);
	bibliotheek->inleveren(boek->isUitgeleverd);

	delete bibliotheek;
	delete boek;
	return;
}

void Bibliotheek::leenUit(bool boek)
{
	boek = true;
	std::cout << "Het boek is uitgeleend.\n";
}

void Bibliotheek::inleveren(bool boek)
{
	boek = false;
	std::cout << "Het boek is teruggeven.\n";
}

