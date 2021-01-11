#pragma once
#include <string>
#include "Sokken.h"
#include <iostream>

class Koffer
{
public:
	Koffer() : kleur("grijs") {};
	Koffer(std::string kleur) : kleur(kleur) {};
	Koffer(const Koffer& koffer); // Copy
	Koffer& operator=(const Koffer& koffer); // Assignment
	~Koffer(); // Deconstructor

	void geefSokken(Sokken* sokken0, Sokken* sokken1);
	void toonInhoud();

	std::string kleur;
private:
	Sokken* sokken0;
	Sokken* sokken1;
};