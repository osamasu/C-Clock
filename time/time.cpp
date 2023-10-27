#include <iostream>

using namespace std;
#include <ctime>
#include <string>
#include <corecrt_wtime.h>

#include "Header.h"

#pragma warning(disable : 4996)



//
//
//
enum enNumber {Zero ,One ,Two ,Three ,Four ,Five ,Six ,Seven ,Eight ,Nine};

void ResetScreen() {
	system("cls");
	system("color 0F");

}
string LetterZero() {

	string LetterZero = "";

	LetterZero += "##########";
	LetterZero += "#        #";
	LetterZero += "#        #";
	LetterZero += "#        #";
	LetterZero += "#        #";
	LetterZero += "#        #";
	LetterZero += "#        #";
	LetterZero += "#        #";
	LetterZero += "##########";

	return LetterZero;
}
string LetterOne() {

	string LetterOne = "";

	LetterOne += "    ##    ";
	LetterOne += "  #  #    ";
	LetterOne += "#    #    ";
	LetterOne += "     #    ";
	LetterOne += "     #    ";
	LetterOne += "     #    ";
	LetterOne += "     #    ";
	LetterOne += "     #    ";
	LetterOne += " # # # # #";
	
	return LetterOne;
}
string LetterTwo() {

	string LetterTwo = "";

	LetterTwo += "##########";
	LetterTwo += "         #";
	LetterTwo += "         #";
	LetterTwo += "         #";
	LetterTwo += "##########";
	LetterTwo += "#         ";
	LetterTwo += "#         ";
	LetterTwo += "#         ";
	LetterTwo += "##########";

	return LetterTwo;
}
string LetterThree() {

	string LetterThree = "";

	LetterThree += "##########";
	LetterThree += "         #";
	LetterThree += "         #";
	LetterThree += "         #";
	LetterThree += "##########";
	LetterThree += "         #";
	LetterThree += "         #";
	LetterThree += "         #";
	LetterThree += "##########";

	return LetterThree;
}
string LetterFour() {

	string LetterFour = "";

	LetterFour += "#        #";
	LetterFour += "#        #";
	LetterFour += "#        #";
	LetterFour += "#        #";
	LetterFour += "##########";
	LetterFour += "         #";
	LetterFour += "         #";
	LetterFour += "         #";
	LetterFour += "         #";

	return LetterFour;
}
string LetterFive() {

	string LetterFive = "";

	LetterFive += "##########";
	LetterFive += "#         ";
	LetterFive += "#         ";
	LetterFive += "#         ";
	LetterFive += "##########";
	LetterFive += "         #";
	LetterFive += "         #";
	LetterFive += "         #";
	LetterFive += "##########";

	return LetterFive;
}
string LetterSix() {

	string LetterSix = "";

	LetterSix += "##########";
	LetterSix += "#         ";
	LetterSix += "#         ";
	LetterSix += "#         ";
	LetterSix += "##########";
	LetterSix += "#        #";
	LetterSix += "#        #";
	LetterSix += "#        #";
	LetterSix += "##########";

	return LetterSix;
}
string LetterSeven() {

	string LetterSeven = "";

	LetterSeven += "##########";
	LetterSeven += "         #";
	LetterSeven += "         #";
	LetterSeven += "         #";
	LetterSeven += "         #";
	LetterSeven += "         #";
	LetterSeven += "         #";
	LetterSeven += "         #";
	LetterSeven += "         #";

	return LetterSeven;
}
string LetterEight() {

	string LetterEight = "";

	LetterEight += "##########";
	LetterEight += "#        #";
	LetterEight += "#        #";
	LetterEight += "#        #";
	LetterEight += "##########";
	LetterEight += "#        #";
	LetterEight += "#        #";
	LetterEight += "#        #";
	LetterEight += "##########";

	return LetterEight;
}
string LetterNine() {

	string LetterNine = "";

	LetterNine += "##########";
	LetterNine += "#        #";
	LetterNine += "#        #";
	LetterNine += "#        #";
	LetterNine += "##########";
	LetterNine += "         #";
	LetterNine += "         #";
	LetterNine += "         #";
	LetterNine += "         #";

	return LetterNine;
}
string Points() {

	string Points = "";

	Points += "          ";
	Points += "          ";
	Points += "   #  #   ";
	Points += "   #  #   ";
	Points += "          ";
	Points += "          ";
	Points += "   #  #   ";
	Points += "   #  #   ";
	Points += "          ";

	return Points;
}
string RequiredNumber(enNumber Number) {

	switch (Number)
	{
	
	case enNumber::Zero: 
		return LetterZero();

	case enNumber::One:
		return LetterOne();

	case enNumber::Two:
		return LetterTwo();

	case enNumber::Three:
		return LetterThree();

	case enNumber::Four:
		return LetterFour();

	case enNumber::Five:
		return LetterFive();

	case enNumber::Six:
		return LetterSix();

	case enNumber::Seven:
		return LetterSeven();

	case enNumber::Eight:
		return LetterEight();

	case enNumber::Nine:
		return LetterNine();
	
	}
}

short GetFirstDigit(short Number ) {

	return (Number / 10);
}
short GetSecondDigit(short Number) {

	return (Number % 10);
}
#include <Windows.h>
void PrintClock() {
	
	time_t Time = time(0);
	tm* pTime = localtime(&Time);
	cout << "\t\t                                                - - - - - - - - - - -                                               \n";
	cout << "\t\t-----------------------------------------------| L I V E   C L O C K |-----------------------------------------------\n";
	cout << "\t\t                                                - - - - - - - - - - -                                          \n\n\n";
	
	string Clock = "";

	for (short i = 0; i < 9; i++) {


		cout << "\t\t\t" + RequiredNumber((enNumber)GetFirstDigit(pTime->tm_hour)).substr((i * 10), 10) + "\t" + 
			RequiredNumber((enNumber)GetSecondDigit(pTime->tm_hour)).substr((i * 10), 10) + "  " + Points().substr((i * 10), 10) + "\t";
		 
		
		
		cout << RequiredNumber((enNumber)GetFirstDigit(pTime->tm_min)).substr((i * 10), 10) + "\t" + 
			RequiredNumber((enNumber)GetSecondDigit(pTime->tm_min)).substr((i * 10), 10) + "  " + Points().substr((i * 10), 10) << "\t";
		
		

		cout << RequiredNumber((enNumber)GetFirstDigit(pTime->tm_sec)).substr((i * 10), 10) + "\t" + 
			RequiredNumber((enNumber)GetSecondDigit(pTime->tm_sec)).substr((i * 10), 10) + "\t \n";
 		
	}
	
	cout << "\n\n\t\t------------------------------------------------ T H E   C L O C K ------------------------------------------------\n\n\n";

	Sleep(830);

	
}


int main(void) {

	

	while (true) {


		ResetScreen();
		PrintClock();

	}
	
	return 0;
}