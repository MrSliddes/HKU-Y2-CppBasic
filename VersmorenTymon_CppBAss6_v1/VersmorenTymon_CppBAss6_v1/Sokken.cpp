#include <iostream>
#include "Sokken.h"

// Constructor
Sokken::Sokken(const Sokken& sokken)
{
	if (this == &sokken) return;
	kleur = sokken.kleur;
	return;
}

Sokken& Sokken::operator=(const Sokken& sokken)
{
	if (this == &sokken) return *this;
	kleur = sokken.kleur;
	return *this;
}