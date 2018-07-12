/*! \file
 * Main entry point for xpr_poker.
 * This file contains main().
 */

/* INCLUDES */
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>

/* MACROS */
#define MAX_NB_PLAYER 9 // Remove variable lenght array.

/*! \namespace std */
using namespace std;
void initJetons();
void initPlayers();
void splitCoins(string tab2d[5][2], int stack);
void printTab(string tab[],int nbr);
void printTab2D(string tab2d[5][2]);
inline string int2String(const int i);
inline int string2Int(const string i);

/*!
 * \details Entry function to XPR_Poker.
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
int main(void)
{

	initPlayers();
	//printTab(player, nb_player);
	initJetons();
	return 0;
}

/*!
 * \details Initializes the players informations
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
void initPlayers()
{
	int nb_player;
	string player[MAX_NB_PLAYER];

	cout << "how many players ? ";
	cin	>> nb_player;
	
	for(int i = 0; i < nb_player; i++)
	{
		cout	<<"player n°"<<i+1<<": ";
		cin 	>>player[i];
	}
}

/*!
 * \details TODO
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
void initJetons()
{
	int stack;
	cout	<<"Begin stack: ";
	cin	>>stack;
	string jetons[5][2] = 	{{"blanc",	"10"},
				{"rouge",	"20"},
				{"bleu",	"50"},
				{"vert",	"100"},
				{"noir",	"500"}};
	
	
	for(int i=0; i<5; i++)
	{
		cout	<<"Value of coin "<<jetons[i][0]<<": ";
		cin	>>jetons[i][1];
	}
	
	printTab2D(jetons);
	splitCoins(jetons, stack);
	
}

/*!
 * \details TODO
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
void splitCoins(string tab2d[5][2], int stack)
{
	int nb_noir;
	int val_noir;
	int nb_vert;
	int val_vert;
	int nb_bleu;
	int val_bleu;
	int nb_rouge;
	int val_rouge;
	int nb_blanc;
	int val_blanc;
	
	val_noir = string2Int(tab2d[4][1]);
	val_vert = string2Int(tab2d[3][1]);
	val_bleu = string2Int(tab2d[2][1]);
	val_rouge = string2Int(tab2d[1][1]);
	val_blanc = string2Int(tab2d[0][1]);
	
	nb_noir = (stack/(2*val_noir));
	stack = (stack - nb_noir*val_noir);
	nb_vert = (5*nb_noir/2);
	stack = (stack - nb_vert*val_vert);
	nb_bleu = (stack/(2*val_bleu));
	stack = (stack - nb_bleu*val_bleu);
	nb_blanc = (stack/(2*val_blanc));
	stack = (stack - nb_blanc*val_blanc);
	nb_rouge = (stack/val_rouge);
	stack = (stack - nb_rouge*val_rouge);
	
	cout	<<"jetons "<<setw(7)<<tab2d[4][0]<<": "<<setw(5)<<nb_noir<<endl;
	cout	<<"jetons "<<setw(7)<<tab2d[3][0]<<": "<<setw(5)<<nb_vert<<endl;
	cout	<<"jetons "<<setw(7)<<tab2d[2][0]<<": "<<setw(5)<<nb_bleu<<endl;
	cout	<<"jetons "<<setw(7)<<tab2d[1][0]<<": "<<setw(5)<<nb_rouge<<endl;
	cout	<<"jetons "<<setw(7)<<tab2d[0][0]<<": "<<setw(5)<<nb_blanc<<endl;
}

/*!
 * \details TODO
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
void printTab(string tab[],int nbr)
{
	cout	<<"Players :"<<endl;
	
	for(int i=0; i<nbr; i++)
	{
		cout	<<setw(17)<<tab[i]<<endl;
	}
}

/*!
 * \details TODO
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
void printTab2D(string tab2d[5][2])
{
	cout	<<"Coins :"<<endl;
	
	for(int i=0; i<5; i++)
	{
		cout	<<setw(17)<<tab2d[i][0]<<setw(10)<<tab2d[i][1]<<endl;
	}
}

/*!
 * \details Converts an INT into a STRING.
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
inline string int2String(const int i)
{
	stringstream ss;
	ss << i;
	return ss.str();
}

/*!
 * \details Converts an STRING into an INT.
 * \author  Sebastien Ivanez
 * \date    12/07/2018
 */
inline int string2Int(const string i)
{
	int ii;
	ii = atoi((char*)i.c_str());
    	return ii;
}
