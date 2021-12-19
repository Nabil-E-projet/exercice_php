#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    int continuerPartie=1;
    while( continuerPartie==1)
    {
        srand(time(NULL));
        int MIN = 1,nombreMAX = 1, nombreEntre = 0,compteur=0, choix=0 ;
        printf("\t\t\t PLUS OU MOINS\n\n");
        printf("Le but du jeu est de deviner le nombre mystere qui sera compris entre 2 chiffres que vous choisirez .\n\n");
        printf("===Choix de difficulte===\n\n");
        printf("1. Entre 1 et 100\n");
        printf("2. Entre 1 et 1000\n");
        printf("3. Entre 1 et 10000\n\n");
        printf("     Votre choix ?\n");
        scanf("%d",&choix);
        switch(choix)
        {
        case 1:
            nombreMAX=100;
            system("cls");
            printf("Vous devez devinez le nombre qui se trouve entre 1 et 100.\n\n");
            break;
        case 2:
            nombreMAX=1000;
            system("cls");
            printf("Vous devez devinez le nombre qui se trouve entre 1 et 1000.\n\n");
            break;
        case 3:
            nombreMAX=10000;
            system("cls");
            printf("Vous devez devinez le nombre qui se trouve entre 1 et 10000.\n\n");

            break;
        default:
            printf("J'ai pas encore programme un tel niveau de difficulte !!\n\n");
            return 0;
            break;
        }

        int nombreMystere = (rand() % (nombreMAX - MIN + 1)) + MIN ;
        while (nombreMystere!=nombreEntre )
        {
            printf("Quel est le nombre ?\n");
            scanf("\n%d",&nombreEntre);
            compteur++;
            if (nombreEntre>nombreMystere)
            {
                printf("C'est moins !\n\n");
            }
            if (nombreEntre<nombreMystere)
            {
                printf("C'est plus !\n\n");
            }
            else if (nombreEntre==nombreMystere)
            {
                printf("Bravo, vous avez trouv%c le nombre mystere en %d coups !!!\n\n",130,compteur);
            }
        }
        printf("Veux tu rejouer ? 1 pour oui 0 pour non\n");
        scanf("%d",&continuerPartie);
        if (continuerPartie==0)
        {
            printf("Merci d'avoir joue\n");
            return 0;
        }
    }
}
