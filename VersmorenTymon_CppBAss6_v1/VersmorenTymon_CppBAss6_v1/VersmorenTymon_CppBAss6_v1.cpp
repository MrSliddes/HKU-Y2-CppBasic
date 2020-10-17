// VersmorenTymon_CppBAss6_v1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Dis assignment sucked as i waisted 2 hours trying to fix errors in mijn header.h file en die verdwenen spontaan toen ik elke class een eigen header file gaf

#include <iostream>
#include <string>
#include "Caravan.h"

int main()
{
    // Maak stuff aan
	Caravan* caravan = new Caravan();
	Caravan* caravanGestolen = new Caravan();
	Koffer* koffer = new Koffer();
	Sokken sokken;

	// Zet de kleuren
	caravan->geefKleur("blauw");
	koffer->geefKleur("rood");
	sokken.geefKleur("groen");

	// Vul inventory
	koffer->geefSokken(sokken);
	caravan->geefKoffer(koffer);

	// Laat inhoud zien
	caravan->toonInhoud();

	// Yeet caravan
	std::cout << "Yeet caravan https://www.youtube.com/watch?v=K0kbUGYQ8Z4" << std::endl;
	caravanGestolen = caravan;
	caravanGestolen->toonInhoud();

	// Opruimen
	caravan = NULL; // Dit moet blijkbaar anders krijg je een memory error, ook lekker weer moeten googlen
	caravanGestolen = NULL;
	koffer = NULL;
	delete caravan;
	delete caravanGestolen;
	delete koffer;
	return 0;
}

