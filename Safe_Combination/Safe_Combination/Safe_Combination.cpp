// Auther: Elliot Rihan
// Created: 02/11/18
// Description: C++ program to find safe combination that is a 
// perfect square number and is not divisable by 2, 3 and 5

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int totalPossibleCombinations = 0;
	int totalNotPossibleCombinations = 0;
	int close;





	for (int combination = 1000; combination < 10000; combination++)
	{
		// originally all the or operations were serarat else if statments 
		// once each was tested I comppacted them into one if statment
		if (sqrt(combination) != floor(sqrt(combination)) || combination % 2 == 0 || combination % 3 == 0 || combination % 5 == 0)
		{
			// if any of the statments are true the program will skip this and add 1 to total not possible combinations
			totalNotPossibleCombinations++;
			continue;
		}
		// if for loop exacutres this far its a possible combination this then add 1 to total and outputs combination
		totalPossibleCombinations++;
		cout << "Possible Combination: " << combination << "\n";
	}
	cout << "Total Possible Combinations: " << totalPossibleCombinations << "\n";
	cout << "Total Not Possible Combinaitions: " << totalNotPossibleCombinations << "\n\n";
	// cin >> close;
	system("pause");
}
