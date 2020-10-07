// VersmorenTymon_CppBass3_v1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Header.h"

int main()
{
	Student tymon;
	tymon.setAge(20);
	tymon.setName("Tymon");
	Docent edwin;
	edwin.setAge(30);
	edwin.setName("Edwin");

	std::cout << "Naam: " + tymon.getName();
	std::cout << ". Leeftijd: " + std::to_string(tymon.getAge());
	std::cout << ". Studiekosten: " + std::to_string(tymon.studieKosten) << std::endl;
	std::cout << "Naam: " + edwin.getName();
	std::cout << ". Leeftijd: ~" + std::to_string(edwin.getAge());
	std::cout << ". Discord problemen: " + std::to_string(edwin.discordProblemen);
}

int Persoon::getAge() { return leeftijd; }
std::string Persoon::getName() { return naam; }
void Persoon::setAge(int age) { leeftijd = age; }
void Persoon::setName(std::string name) { naam = name; }