// VersmorenTymon_CppBAss7_v1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"
#include "string"
#include "fstream"
#include "streambuf"
#include "ctime"

int main()
{
    std::cout << "'Bedankt voor de lessen Edwin! https://www.youtube.com/watch?v=dQw4w9WgXcQ'\n" << std::endl;

	std::cout << "Opdracht 7.1" << std::endl;
	// Kijk of file bestaat
	std::ifstream file("../jabberwocky.txt");
	if (!file) { return 0; } // Geen file
	std::cout << "File gevonden" << std::endl;

	// Convert file naar string
	std::string s((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
	std::cout << "String bevat: " << s << std::endl;
	Achterstevoren ach = Achterstevoren();
	s = ach.draaiStringOm(s);
	std::cout << "String omgedraaid: " << s << std::endl;

	// Convert string naar file
	std::ofstream outfile("../jabberwocky_omgedraaid.txt"); // dit creert magisch een nieuw file in VersmorenTymon_CppBAss7_v1 als ie er niet al is
	outfile << s;
	outfile.close(); // belangrijk om files af te sluiten

	std::cout << "" << std::endl;
	std::cout << "Opdracht 7.2" << std::endl;
	// Pak 2e file en 1e normale
	std::ifstream file1("../jabberwocky.txt");
	std::string s1((std::istreambuf_iterator<char>(file1)), std::istreambuf_iterator<char>());
	std::ifstream file2("../jabberwocky_omgedraaid.txt");
	std::string s2((std::istreambuf_iterator<char>(file2)), std::istreambuf_iterator<char>());
	
	// Voeg samen
	VoegTextFilesSamen vtfs = VoegTextFilesSamen();
	std::string nS = vtfs.voegSamen(s1, s2);
	std::cout << nS << std::endl;

	// Maak nieuwe file aan
	std::ofstream outfile1("../files_samengevoegd.txt");
	outfile1 << nS << std::endl;
	outfile1.close();
}

std::string Achterstevoren::draaiStringOm(std::string s)
{
    int n = s.length();
	for (int i = 0; i < n / 2; i++)
	{
		std::swap(s[i], s[n - i - 1]);
	}
	return s;
}

// Wauw mijn spagetti werkt, niet zo efficient, maar het werkt (kon ook met getline)
std::string VoegTextFilesSamen::voegSamen(std::string s, std::string s1)
{
	std::string nS = "";
	int indexS1 = 0;

	// Loop door het hele file, om en om elke punt (dus einde zin)
	for (int i = 0; i < s.size(); i++)
	{
		nS += s[i];

		if (s[i] == '\n' || s[i] == '\r')
		{
			for (int ii = indexS1; ii < s1.size(); ii++)
			{
				indexS1++;
				nS += s1[ii];
				if (s1[ii] == '\n' || s1[ii] == '\r')
				{
					//nS += "\n";
					break;
				}
			}
		}
	}

	return nS;
}