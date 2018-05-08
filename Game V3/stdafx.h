// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <fstream>

#include <windows.h>
#include <mmsystem.h>
using namespace std;
using namespace System;



/* Single Player Functions And extern variables */
extern char InputLetter ;
extern std:: string Show ;
extern std:: string Original;
extern int Lifes  ;
extern int Level ;
extern int Hints ;
extern string Letters ;
extern string Category ;
extern int Score ;

extern string temp1;
extern int temp2;
extern int checks;
extern int CorrectWords;
extern string TheWord ;
extern int score2 ;
extern int level2;

string word ();
void increase();
string check ();
string hint();
void newgame();
void MarshalString ( String ^ s, string& os );
void HighScore();
void HighScores ();
void correctsound ();
void wrongsound ();


/*End of Single Player Functions and extern variables */



/*Multi Player Functions and extern variables */

extern std::string Player1Word;
extern std::string Show2;
extern char InputLetter2;
extern int Lifes2;
extern int Hints2;

//void MarshalString ( String ^ s, string& os );
void convert () ;
string check2 ();
string hint2() ;


/*End of Multiplayer functions and extern variables */

/*----------------High Score functions and extern variables------------------------*/


/*extern string FirstName ;
extern int FirstScore ;
extern string SecondName ;
extern int SecondScore ;
extern string ThirdName ;
extern int ThirdScore ;*/







void High (string &PlayerName);




// TODO: reference additional headers your program requires here


