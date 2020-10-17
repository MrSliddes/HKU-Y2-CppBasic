#include <iostream>
#include "Caravan.h"

//// Constructor
//Caravan::Caravan()
//{
//
//}
//
//// Destructor
//Caravan::~Caravan()
//{
//
//}

//// Copy-constructor
//Caravan::Caravan(const Caravan& anderCaravan)
//{
//	if (this == &anderCaravan) return;
//}
//
//Caravan& Caravan::operator=(const Caravan& anderCaravan)
//{
//	if (this == &anderCaravan) return *this;
//}

void Caravan::toonInhoud()
{
	std::cout << "Koffer bevat: " << kleur << std::endl;
	koffer->toonInhoud();
}

void Caravan::geefKleur(std::string kleur)
{
	this->kleur = kleur;
}

void Caravan::geefKoffer(Koffer* k)
{
	koffer = k;
}