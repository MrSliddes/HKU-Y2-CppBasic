#include <iostream>
#include "Caravan.h"

// Constructor
Caravan::Caravan(const Caravan& caravan)
{
	if (this == &caravan) return;
	kleur = caravan.kleur;
	geefKoffer(new Koffer(*caravan.koffer));
	return;
}

// Assignment operator
Caravan& Caravan::operator=(const Caravan& caravan)
{
	if (this == &caravan) return *this;
	delete koffer;
	geefKoffer(new Koffer(*caravan.koffer));
	return *this;
}


// Geef een koffer aan de caravan
void Caravan::geefKoffer(Koffer* _koffer)
{
	koffer = _koffer;
}

// Destructor
Caravan::~Caravan()
{
	delete koffer;
}

void Caravan::toonInhoud()
{
	std::cout << "Caravan kleur: " << kleur << std::endl;
	koffer->toonInhoud();
}

