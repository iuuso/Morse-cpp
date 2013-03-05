/*
 * File Morse.cpp
 * A program written in c++ to translate
 * text into morse-code. 
 */

//----------------------HEADERS----------------------------

#include "Settings.h"		// 

 using namespace std;

//----------------------FUNCTIONS--------------------------

 void Menu();				// Startup menu
 void Dictionary();			// Print the morse dictionary
 void Translator();			// Translation function

//---------------------VARIABLES---------------------------

int choice = 5;				// Users choice in menu
int loop_counter=0;			// Loop counter for dictionary printing
int input_length;			// Lenght of the user input
int i;						// Loop counter for the translation loop

string input;				// User input, transformed to morse
string menuinput;			// User input for menu selection


//------------------------------MORSE DICTIONARY----------------------------------------

char morse_letters[26] [7]= {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-",
							 ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", 
							 ".--", "-..-", "-.--", "--.."};
char text[26] [3] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q",
							 "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};

//----------------------MAIN-------------------------------

 int main()
 {
 	cout << "\n MORSE-TRANSLATOR" << endl;

 	do
 	{
 		Menu();
 		getline(cin, menuinput);		// Jonkinlainen validaattori tarttis laittaa

 		// Lets convert input string to int
 		stringstream convert(menuinput);
 		if ( !(convert >> choice) )
 			choice = 0;

 		switch ( choice )
 		{
 			case 1:

 					//------------------Translator-----------------------------
                    cout << "Please insert a string to be translated > ";
                    getline(cin, input);
 					
 					Translator();

 					break;

			case 2:

					//----------------Introduction-----------------------------
					cout << " Introduction to Morse-code" << endl;
					system ( "gedit README");

					break;

			case 3:

					//----------------Dictionary-------------------------------
					Dictionary();

					break;

			case 4:

					// Translations history (Container)
					break;

			case 0: 

					// Exit
					break;

			default: 

					cout << "Invalid input, please try again" << endl;
					break;
 		}

 	}while ( choice != 0 );

 	cout << " Exit \n" << endl;
 	
 	return 0;
 }

//---------------------------------------------------------
void Menu()
{
	cout << "\n 1) Translate string to Morse" << endl;
	cout << " 2) Introduction to Morse" << endl;
	cout << " 3) See definitons for Morse" << endl;
	cout << " 4) See history" << endl;
	cout << " 0) Exit" << endl;
	cout << "\nChoice > " ;
 }

void Dictionary()
{
	cout << " \n Dictionary " << endl;
	cout << "-------------------------" << endl;
	while ( loop_counter != 26 )
	{
		cout << text[loop_counter] << " | " << morse_letters[loop_counter] << endl;
		loop_counter++;
	}
	cout << "\n-------------------------" << endl;
	cout << " End of Dictionary " << endl;
}

void Translator()
{
	// Let's find how much characters does the user input have
	// After that, we transform the user input to uppercase.
 	input_length=input.size();
 	for (string::size_type i = 0; i < input.length(); i++)
	{
  		input[i] = toupper (input[i]);
	}
	cout << input;
} 
 //---------------------------------------------------------

