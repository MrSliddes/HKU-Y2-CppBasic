#pragma once
#include <string>

class Sokken
{
public:
	Sokken(); // Constructor
	Sokken(std::string kleur);
	Sokken(const Sokken& sokken);
	virtual ~Sokken(); // Deconstructor
	Sokken& operator=(const Sokken& anderSokken); // Assignment

	void geefKleur(std::string kleur);

	std::string kleur = "grijs";
};