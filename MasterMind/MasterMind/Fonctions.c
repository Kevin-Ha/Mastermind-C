#include"Fonctions.h"

void compareTableau(char tableauAleatoire[], char tableauUser[], int MAX)
{
	int i = 0;
	int j = 0;

	while(j < MAX)
	{
		while(i < MAX)
		{
			if ((tableauAleatoire[j] == tableauUser[i]) && ( j == i))
			{
				printf("Chiffre %d : Trouve\n", j + 1);
				j++;
			}

			else if ((tableauAleatoire[j] == tableauUser[i]) && (j != i))
			{
				printf("Chiffre %d : Trouve, mais il est mal place.\n", j + 1);
				j++;
			}

			else
			{
				i++;
			}
		}
		i = 0;
		printf("Chiffre %d : Pas trouve\n", j + 1);
		j++;
	}


}