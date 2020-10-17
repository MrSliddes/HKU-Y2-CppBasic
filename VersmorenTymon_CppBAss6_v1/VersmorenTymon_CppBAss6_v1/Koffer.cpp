#include <iostream>
#include "Koffer.h"

// Constructor
Koffer::Koffer()
{

}

// Destructor
Koffer::~Koffer()
{

}

// Copy-constructor
Koffer::Koffer(const Koffer& anderKoffer)
{
	if (this == &anderKoffer) return;
	sokken = Sokken(anderKoffer.sokken.kleur);
}

Koffer& Koffer::operator=(const Koffer& anderKoffer)
{
	this->kleur = anderKoffer.kleur; return *this;
	//if (this == &anderKoffer) return *this;
}

void Koffer::toonInhoud()
{
	std::cout << "Koffer kleur: " << kleur << std::endl;
	std::cout << "Sokken in koffer kleur :" << sokken.kleur << std::endl;
}

void Koffer::geefKleur(std::string kleur)
{
	this->kleur = kleur;
}

void Koffer::geefSokken(Sokken& sokk)
{
	sokken = sokk;
}