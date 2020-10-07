#pragma once

class Bibliotheek
{
public:
	void leenUit(bool boek);
	void inleveren(bool boek);
};

class Boek
{
public:
	bool isUitgeleverd = false;
};