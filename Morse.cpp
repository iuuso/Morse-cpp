/*
 * File Morse.cpp
 * A program written in c++ to translate
 * text into morse-code. 
 * Written by Juuso Karlström in 2013. All rights reserved.
 */

 #include <iostream>			//
 #include <string>			//
 #include <locale>			// toupper()
 #include <cstdlib>			// System
 #include <sstream>			// stringstream
 #include <cctype>			//

using namespace std;

//----------------------FUNCTIONS--------------------------

void Menu();				// Startup menu
void Dictionary();			// Print the morse dictionary
void Translator();			// Translation function

//---------------------VARIABLES---------------------------

int choice = 5;				// Users choice in menu
int loop_counter=0;			// Loop counter for dictionary printing
int input_length;			// Lenght of the user input
int i;					// Loop counter for the translation loop

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
 	cout << "\n MORSE-TRANSLATOR - under construction" << endl;

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
 					cout << "Please insert a string to be translated > " << flush;
 					getline(cin, input);
 					
 					Translator();

 					break;

			case 2:

					//----------------Introduction-----------------------------
					
					/* This does not have any knowledge about the system used,
					 * so if you choose this i have no idea what would happen.
					 * Have to build OS-detection or something similar to this.
					 */


					cout << " Introduction to Morse-code" << endl;
					system ( "gedit README");

					break;

			case 3:

					//----------------Dictionary-------------------------------
					Dictionary();

					break;

			case 4:

					cout << " \n Container not done yet, please come back some another time" << endl;
					break;

			case 0: 

					// Exit
					break;

			default: 

					cout << "Invalid input, please try again" << endl;
					break;
 		}

 	}while ( choice != 0 );

 	cout << " \nExit \n" << endl;
 	
 	return 0;
 }

//---------------------------------------------------------
void Menu()
{
	cout << "\n 1) Translate string to Morse" << endl;
	cout << " 2) Introduction to Morse (README)" << endl;
	cout << " 3) \"Morse Dictionary\"" << endl;
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
		// One example of transforming the string in to something else.
		// Not very efficient though, because when you implement it like
		// this it has to go through every letter and transform them.
  		input[i] = toupper (input[i]);
  		if (input[i] == 'A')
  		{
  			input[i] = ' ';
  		}
	}

	// Testing translations and output
	cout << "\n Translated input: " << input << endl;
	cout << "\nYour inputs length was " << input_length << " characters" << endl;

	if (input.find (' ') != string::npos)
	{
   		cout  << "Contains at least one space!" << endl;
	}
	else
	{
   		cout  << "Does not contain any spaces!" << endl;
	}


}  
 //---------------------------------------------------------

