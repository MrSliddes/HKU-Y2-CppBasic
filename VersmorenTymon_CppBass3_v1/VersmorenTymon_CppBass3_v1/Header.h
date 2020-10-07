#pragma once
#include <string>

class Persoon
{
	int leeftijd;
	std::string naam;
public:
	void setAge(int age);
	void setName(std::string name);
	int getAge();
	std::string getName();
};

class Student : public Persoon
{
public:
	int studieKosten = 999;
};

class Docent : public Persoon
{
public:
	int discordProblemen = 404;
};