#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;
void print_tab(string tab[],int nbr);
void print_tab2d(string tab2d[5][2]);
void init_jetons();
void split_coins(string tab2d[5][2], int stack);
inline int string2int(const string i);

int main(void)
{
	int nb_player;
	cout	<<"how many players ? ";
	cin	>>nb_player;
	string player[nb_player];
	
	for(int i=0; i<nb_player; i++)
	{
		cout	<<"player n°"<<i+1<<": ";
		cin 	>>player[i];
	}
	//print_tab(player, nb_player);
	init_jetons();
	return 0;
}

void init_jetons()
{
	int stack;
	char *b;
	int bl;							
	cout	<<"Begin stack: ";
	cin	>>stack;
	string jetons[5][2] = 	{{"blanc",	"10"},
				{"rouge",	"20"},
				{"bleu",	"50"},
				{"vert",	"100"},
				{"noir",	"500"}};
	
	
	for(int i=0; i<nb_coins; i++)
	{
		cout	<<"Value of coin "<<jetons[i][0]<<": ";
		cin	>>jetons[i][1];
	}
	
	print_tab2d(jetons);
	split_coins(jetons, stack);
	
}

void split_coins(string tab2d[5][2], int stack)
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
	
	val_noir = string2int(tab2d[4][1]);
	val_vert = string2int(tab2d[3][1]);
	val_bleu = string2int(tab2d[2][1]);
	val_rouge = string2int(tab2d[1][1]);
	val_blanc = string2int(tab2d[0][1]);
	
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

void print_tab(string tab[],int nbr)
{
	cout	<<"Players :"<<endl;
	
	for(int i=0; i<nbr; i++)
	{
		cout	<<setw(17)<<tab[i]<<endl;
	}
}

void print_tab2(string tab2d[5][2])
{
	cout	<<"Coins :"<<endl;
	
	for(int i=0; i<5; i++)
	{
		cout	<<setw(17)<<tab2d[i][0]<<setw(10)<<tab2d[i][1]<<endl;
	}
}
// -- Function: int2string
// -- Purpose:  Convert an INT into a STRING
inline string int2string(const int i)
{
	stringstream ss;
	ss << i;
	return ss.str();
}

// -- Function: string2int
// -- Purpose:  Convert an STRING into a INT
inline int string2int(const string i)
{
	char *ci;
	int ii;
	ii = atoi((char*)i.c_str());
    	return ii;
}

/*string *init_player()
{
	unsigned int nbr_player;
	string player_name[30];

	cout	<<"how many players ?"<<endl;
	cin	>>nbr_player;
	
	for(int i = 0; i < nbr_player; i++)
	{
		cout	<<"player n°"<<i+1<<" what is your name ?"<<endl;
		cin 	>>player_name[i];
	}

	return &player_name[0];
}*/
