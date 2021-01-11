#pragma once
#include <string>
#include <iostream>

class Sokken
{
public:
	Sokken() : kleur("grijs") {}; // Constructor
	Sokken(std::string kleur) : kleur(kleur) {};
	Sokken(const Sokken& sokken);
	Sokken& operator=(const Sokken& sokken); // Assignment
	//~Sokken(); // Deconstructor

	std::string kleur;
};