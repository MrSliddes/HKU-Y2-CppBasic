#include <iostream>
#include "Sokken.h"

// Constructor
Sokken::Sokken()
{

}

Sokken::Sokken(std::string kleur)
{
	this->kleur = kleur;
}

// Destructor
Sokken::~Sokken()
{

}

// Copy-constructor
Sokken::Sokken(const Sokken& anderSokken)
{
	if (this == &anderSokken) return;
}

Sokken& Sokken::operator=(const Sokken& anderSokken)
{
	this->kleur = anderSokken.kleur;
	return *this;
	//if (this == &anderSokken) return *this;
}

void Sokken::geefKleur(std::string kleur)
{
	this->kleur = kleur;
}