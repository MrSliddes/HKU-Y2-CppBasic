#pragma once

#include <string>
#include "Caravan.h"
#include "Koffer.h"
#include <iostream>

class Caravan
{
public:
	Caravan() : kleur("grijs") {}; // Standaard grijs
	Caravan(std::string kleur) : kleur(kleur) {};
	Caravan(const Caravan& caravan);
	Caravan& operator=(const Caravan& caravan);
	~Caravan();

	void geefKoffer(Koffer* _koffer); // Hier _koffer is bij caravan.cpp ook _koffer
	void toonInhoud();

	std::string kleur;

private:
	Koffer* koffer;
};