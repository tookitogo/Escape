//---------------------------------------------------------------- 
// Titel:		Konsolen-Programm Escape 1-3
// Projekt:		Escape.cpp
// Datum:		2021-01-04 AT 
// Funktion:	Übungsaufgabe Escape-Sequenzen
//				 
//---------------------------------------------------------------- 


#include <stdio.h> 
#include <conio.h> 

void main(void)
{
	// ESCAPE1
	printf("Antonio Tejada\nEngelstrasse 9\n8004 Z\x81rich");				  //Textausgabe 
	printf("\n");															  //Textausgabe 
	printf("\n");															  //Textausgabe 

// ESCAPE2
	printf("Antonio Tejada\nEngelstrasse 9\n8004 Z\x81rich\a");				  //Textausgabe
	printf("\n");															  //Textausgabe 
	printf("\n");															  //Textausgabe 

 // ESCAPE3
	printf("\xE1");															  //Textausgabe 
	printf("\n");															  //Textausgabe 

}