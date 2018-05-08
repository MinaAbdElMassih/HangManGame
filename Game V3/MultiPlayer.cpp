#include "stdafx.h"

string Show2; /*The string that is sent tto the GUI and is shown to the user */
char InputLetter2;  /*the letter the user guesses (Recieved from the GUI) */
int Lifes2 = 5 ;   /*The number of Lifes the user has during the game */
int Hints2=2;      /*The number of hints the user has */
/* A string in which we save the previously guessed letters by the user in order to show it to the user */
string Letters2 = "                                                                                                  " ;
string Player1Word ; /*The word that the first player enters and the second player tries to guess it's letters */
int j2=0 ; /*A counter */

/* A function made by microsoft used in visual c++ in order to convert system string into a standard string 
( used to take the input from the user in a text box then convert it into a standard string to make operations on ) */
void MarshalString ( String ^ s, string& os ) {
   using namespace Runtime::InteropServices;
   const char* chars = 
      (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
   os = chars;
   Marshal::FreeHGlobal(IntPtr((void*)chars));
}


/*convert the string Show2 into a string of '*' that the user will see */
void convert () 
{
	Show2=Player1Word ;  /*to make string (show2) equal string (player1word)*/

	for (int i=0 ; i<Player1Word.size() ; i++ )  /*loop is used to convert each letter to '*' */
	{
		if (Player1Word[i] != ' ' )
		{
			Show2[i]='*' ;
		}
	}
}

/*function to check if input letter from player 2 exist in player one's word */
string check2 ()
{

	bool DecreaseLifes2=0 ; /*flag to check if the letter is wrong and decrease user's lifes */

	for (int i=0 ; i<Show2.length() ; i++)
	{
		if (InputLetter2==Player1Word[i])
		{
			Show2[i]=InputLetter2 ;
			DecreaseLifes2=1;     /*make bool equal true*/
		}
	}
	Letters2[j2]=InputLetter2;
	j2=j2+2;
	if (DecreaseLifes2==0)
	{
		Lifes2--;     /*if the letter is wrong decrease lifes by one*/
	}
	
	
	return Show2 ;
}

/*function to help player 2 to guess the word*/
/*if the letter of index 'i' equal '*' alternate it with the letter in player one's word  */
string hint2()
{
	if (Hints2>0)
	{
		for (int i=0 ; i<Show2.length() ; i++)
		{
		
		  if (Show2[i] == '*')
			{
				InputLetter2 = Player1Word[i];
		        Hints2--;   /*if player 2 uses hints it's value decreases by one*/
	            break;
		    }
		}

	}
	
	return Show2;
	
}