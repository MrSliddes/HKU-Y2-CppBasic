// VersmorenTymon_CppBAss1_v1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;
/*
int main()
{
	vector<string> msg{ "Hello", "C++", "World", "from", "VS Code", "and the C++ extension!" };

	for (const string& word : msg)
	{
		cout << word << " ";
	}
	cout << endl;	
	return 0;
}*/

class ClassRoster
{
	int currentDate;

	SchoolClasses getSchoolClassesOfStudent(Student student)
	{
		// Returns de lessen die de student heeft
	}
};

class Student
{
	int studentNumber;
	SchoolClasses classes[]{};
};

class SchoolClasses
{
	string nameClass;
	int daysOfWeekClassIsGiven[5] = {1, 0, 0, 0, 1};
	int timeOfClass[5] = { 1300, 0, 0, 0, 1300 };
};

/*
-Welke objecten spelen volgens jou een rol?
De objecten ClassRoster, Student, SchoolClasses

-Wat zijn de attributen van die objecten?
Zie de classes hierboven

-Wat zijn de relaties tussen die objecten?
De ClassRoster bevat de datum van vandaag, daarbij roept hij de Student class aan die het nummer bevat van 
de student en de classes die de student heeft. In de SchoolClasses wordt dan gekeken welke dag index het vandaag is (1-5 || 0-4)
en vergelijkt het dan met de daysOfWeekClassIsGiven om te kijken of de class vandaag is en zoja dan wordt er ook de tijd meegeven
hoelaat de les is.

-Wat voor gedrag moeten die objecten hebben?
Ze returnen de values die ze bevatten.

*/
