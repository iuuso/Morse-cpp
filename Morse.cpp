/*
 * File Morse.cpp
 * A program written in c++ to translate
 * text into morse-code. 
 */


//----------------------HEADERS----------------------------
#include "Translator.h"		// Translator, which translates the input
#include "Settings.h"

 using namespace std;

 void Menu();

//---------------------------------------------------------
 int main()
 {

 	//---------------------------------------------------------
 	string input;
 	int choice = 0;
 	char c;
 	int loop_counter=0;
 	
	
 	cout << "\n MORSE-TRANSLATOR" << endl;

 	do
 	{
 		Menu();
 		cin >> choice;			// Jonkinlainen validaattori tarttis laittaa
 
 		switch ( choice )
 		{
 			case 1:

 					//------------------Translator-----------------------------
 					cout << "\nPlease give me something to translate:" << endl;
 					cout << " > ";

 					getline(cin, input);
 				
 					//c=str[i];
 					//putchar (toupper(c));

 					cout << input;
 					break;

			case 2:

					//----------------Introduction-----------------------------
					cout << " Introduction to Morse-code" << endl;
					system ( "gedit README");

					break;

			case 3:

					//----------------Dictionary-------------------------------
					cout << " \n Dictionary " << endl;
					cout << "-------------------------" << endl;

					while ( loop_counter != 26 )
					{
						cout << text[loop_counter] << " | " << morse_letters[loop_counter] << endl;
						loop_counter++;
					}
					cout << "\n-------------------------" << endl;
					cout << " End of Dictionary " << endl;
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

 //---------------------------------------------------------
