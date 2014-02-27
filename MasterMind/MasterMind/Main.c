#include"Main.h"
#include"Fonctions.h"

int main()

{

	int MAX = 5;
	int nombreAleatoire = 0;
	char tableauAleatoire[6] = {'\0'};
	char tableauUser[10]= {0};
	char caraSaisie[6] = {'\0'};
	int i = 0;
	int j = 0;
	int a = 1;
	int b = 9;


	srand(time(NULL));

	while(i < MAX)
	{
		nombreAleatoire = ((rand() % (b - a + 1)) + a);
		tableauAleatoire[i] = nombreAleatoire;
		printf("\nLe chiffre %d genere aleatoirement est : %d\n", i + 1, tableauAleatoire[i]);
		//system("cls");
		//system("pause");
		i++;
	}


	printf("\n\nEntrez 5 nombres compris entre 1 et 8 : ");
	scanf("%s", caraSaisie);
	printf("\n");
	printf("%s : \n", caraSaisie);

	compareTableau(tableauAleatoire, tableauUser, MAX);
	system("pause");


}

