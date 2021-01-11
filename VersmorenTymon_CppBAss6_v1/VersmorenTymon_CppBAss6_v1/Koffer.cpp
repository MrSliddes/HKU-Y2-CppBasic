#include <iostream>
#include "Koffer.h"

// Constructor
Koffer::Koffer(const Koffer& koffer)
{
	if (this == &koffer) return;
	kleur = koffer.kleur;
	geefSokken(new Sokken(*koffer.sokken0), new Sokken(*koffer.sokken1));
	return;
}

Koffer& Koffer::operator=(const Koffer& koffer)
{
	if (this == &koffer) return *this;
	delete sokken0;
	delete sokken1;
	geefSokken(new Sokken(*koffer.sokken0), new Sokken(*koffer.sokken1));
	return *this;
}

// Destructor
Koffer::~Koffer()
{
	delete sokken0;
	delete sokken1;
}

void Koffer::toonInhoud()
{
	std::cout << "Koffer kleur: " << kleur << std::endl;
	std::cout << "Sokken paar kleur in koffer: " << sokken0->kleur << " en " << sokken1->kleur << std::endl;
}


void Koffer::geefSokken(Sokken* sokken0, Sokken* sokken1)
{
	this->sokken0 = sokken0;
	this->sokken1 = sokken1;
}