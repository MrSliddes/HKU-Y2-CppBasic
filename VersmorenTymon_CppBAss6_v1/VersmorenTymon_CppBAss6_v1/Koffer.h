#pragma once
#include <string>
#include "Sokken.h"

class Koffer
{
public:
	Koffer();
	Koffer(const Koffer& anderKoffer); // Copy
	virtual ~Koffer(); // Deconstructor
	Koffer& operator=(const Koffer& anderKoffer); // Assignment

	void toonInhoud();
	void geefKleur(std::string kleur);
	void geefSokken(Sokken& sokk);

	std::string kleur = "grijs";
private:
	Sokken sokken;
};