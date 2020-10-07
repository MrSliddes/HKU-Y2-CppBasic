#pragma once
#include <string>

class Munt
{
public:
	int waarde = 50;
	std::string naam;
};

class Munt_50_Cent : public Munt
{
	
};

class Munt_1_Euro : public Munt
{

};

class Munt_Koffiemuntje : public Munt
{

};

class Koffieautomaat
{
public:
	void getKoffie(Munt muntwaarde);
};