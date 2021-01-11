// VersmorenTymon_CppBAss6_v1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
#include "Caravan.h"

int main()
{
    // Maak stuff aan, allemaal pointers, pointer -> "point / wijst" naar het adress van een int/class etc.
	Caravan* caravan = new Caravan("Blauw"); // Zet kleuren gelijk
	Koffer* koffer = new Koffer("Rood");
	// Een PAAR groene sokken
	Sokken* sokken0 = new Sokken("Groen");
	Sokken* sokken1 = new Sokken("Groen");

	// Vul inventory
	koffer->geefSokken(sokken0, sokken1);
	caravan->geefKoffer(koffer);

	// Laat inhoud zien
	caravan->toonInhoud();

	// Caravan wordt gestolen
	std::cout << "Caravan wordt gestolen met inhoud! Reconstructie: https://www.youtube.com/watch?v=K0kbUGYQ8Z4" << std::endl;

	Caravan* newCaravan = new Caravan(*caravan);
	delete caravan; // Wauw nou werkt het eindelijk wel :)

	std::cout << "\nToon inhoud nieuwe caravan:\n" << std::endl;
	newCaravan->toonInhoud();
		
	delete newCaravan;

	return 0;
}

