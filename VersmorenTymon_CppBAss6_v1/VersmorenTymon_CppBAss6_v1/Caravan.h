#pragma once

#include <string>
#include "Caravan.h"
#include "Koffer.h"

class Caravan
{
public:
	//Caravan();
	//Caravan(const Caravan& caravan);
	//virtual ~Caravan();
	//Caravan& operator=(const Caravan& caravan);

	void toonInhoud();
	void geefKleur(std::string koffer);
	void geefKoffer(Koffer* k);

	std::string kleur = "grijs";
private:
	Koffer* koffer;
};