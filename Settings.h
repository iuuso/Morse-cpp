/*
 * File Settings.h
 * Contains the used libraries and definitions 
 * for Morse
 */

//------------------------------LIBRARIES----------------------------------------

 #include <iostream>		//
 #include <string>			//
 #include <locale>			// toupper()
 #include <cstdlib>			// System

//------------------------------MORSE DICTIONARY----------------------------------------

char morse_letters[26] [7]= {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-",
							 ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", 
							 ".--", "-..-", "-.--", "--.."};
char text[26] [3] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q",
							 "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};