
#include "stdafx.h"
#include "Form1.h"
using namespace GameV3;

char InputLetter='-' ;  /*The letter the user enters using the on screen key board */
std::string Original = word(); /* The random string the user will guess */
std::string TheWord ;
std::string Show= Original ;  /* The string the user will see and is updated according to his input */

int Lifes = 13 ; /*number of lifes (12 during the whole game , can be increased ) */
int Hints=4; /*The number of hints the user has */
int Level = 1 ; /* the level */
bool Check = 0 ; /* used to check */
int j=0; /* a counter */
int Score = 0 ; /*the user's score in single player game mode */

int add=0 ; /*the value to be added to the random number to get a harder word (higher level) */
int CorrectWords=0;/*The number of correct words the user solve */


/*A string in which we store Previously guessed letters by user */
string Letters = "                                                                                                             " ; 
string Category ;
/* A function to generate a random number that changes during runtime and is always between 0 and 9 */
int randomnumber()
{
	srand(time(NULL));
	return rand()%5 ;  
}

/* A function to reset all the values (a new game) */
void newgame ()
{
 InputLetter= '-' ;  
 Original = word(); 
 Show= Original ;  
 Lifes = 13 ; 
 Hints=4 ; 
 Level = 1 ; 
 Score = 0 ;
 Check = 0 ; 
 j=0;
 add=0 ; 
 CorrectWords=0;
 Letters = "                                                                                                             " ; 
 
}




/* A function to get a random category then get a random word from this category and returns this word */
string word ()
{
	ifstream File ;
	string Word ;
	int CategoryNumber=randomnumber()%4 ;  /*which category to get the word from (we have only 4 categories */

	int WordNumber=randomnumber();  /*The number of the word (the line's number in the text file ) */
	
	if (CategoryNumber==0)
	{
		File.open("Animals.txt");
		Category="Animals" ;
	}
	else if (CategoryNumber==1)
	{
		File.open("Countries.txt");
		Category="Countries" ;
	}
	else if (CategoryNumber==2)
	{
		File.open("Actors.txt");
		Category="Actors" ;
	}
	else if (CategoryNumber==3)
	{
		File.open("Movies.txt");
		Category="Movies" ;
	}

	for (int i = 0; i < 51 ; i++)
	{
		getline(File, Word); /* Each time a word is taken from the file (current line in the file) */
		/*the variable add is to increase the word's order (higher level means higher order and harder word ) */
		if (i == WordNumber + add) /* Once i (the loop counter) is equal to the random number , the word is returned as a random word */
		{
			File.close(); /* Closing the File so as to not stay opened in the RAM (important) */
			return Word;
		}
	}

}

/* A function to check the existance of a letter in the string , and show it to the user if it is correct or else decrease his lifes */
std::string check ()
{
	bool DecreaseLifes=0 ; /*flag to check if the letter is wrong and decrease user's lifes */

	/*to convert the word shown to the user into '*' once the word is generated */
	if (Check==0)
	{ 
		for (int i=0 ; i<Original.length() ; i++)
		{
			if (Original[i] != ' ')
			{Show[i]='*' ; }
		}
		Check = 1;
	}
	
	/*check  if the letter exists in the word */
	for (int i=0 ; i<Original.size() ; i++)
	{
		if (InputLetter==Original[i])
		{

			Show[i]=InputLetter ;
			
			DecreaseLifes=1; /*changing the bool value (so as to not decrease the lifes if the letter exists ) */
		}
	}
	Letters[j]=InputLetter;  /*saving users guessed letter in a string */
	j=j+2;
	if (DecreaseLifes==0) /*if the bool has the same value , decrease lifes */
	{
		Lifes--;
	}
	/* Once the user guesses a word ccompletely , a new word is shown to him (one of a higher level) */
	if (Original==Show)
	{
		
		increase();
	    Letters = "                                                                                                           " ;
		j=0;
		Check=0;
		TheWord=Original ;
		Original = word();
		/*getting the new word */
		Show=Original;
		/*converting the new word into '*' */
		for (int i=0 ; i<Original.length() ; i++)
		{
			if (Original[i] != ' ')
			{Show[i]='*' ; }
		}

	}
	return Show ; /*returning the word the user will see after change is done by user */
}

/*A function to give a hint to the user (finds the first unknown letter and shows it to the user ) */

string hint()
{
	if (Hints>0)
	{
		for (int i=0 ; i<Show.length() ; i++)
		{
		
		  if (Show[i] == '*')
			{
				InputLetter = Original[i];
		        Hints--;
	            break;
		    }
		}

	}
	
	return Show;
	
}

/* A function to move the user to a higher level */
void increase ()
	{
		
		CorrectWords++;
		Score=Score+(CorrectWords*50) ;  /*Increase the score of the player */
		Level++;
		add=add+5; 
		/*each 5 words in the text file are of the same level , so as the user guesses a word right
		the random number is increased by 5 so that a word of higher level is taken from the file */
		
	}


	


