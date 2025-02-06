#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    int max, min = 1, niveau, nombreMystere = 0, nombre = 0, compteur, modeDeJeu = 1;
    int continuerPartie = 1;
    continuerPartie = (continuerPartie > 0);
    while (continuerPartie)
    {   
        compteur = 0;
        printf ("====== Trouvez le nombre mystere 🙃 ======\n");
        printf ("Choisissez un mode de jeu: 1 joueur ou 2 joueur?\n");
        scanf ("%d", &modeDeJeu);
        while (modeDeJeu != 1 && modeDeJeu != 2)
        {
            printf ("Choisissez un mode de jeu: 1 joueur ou 2 joueur?\n");
            scanf ("%d",&modeDeJeu);
        }
        if (modeDeJeu == 1)
        {
            printf ("Choisissez le niveau de difficulté:\n");
            printf ("Tapez 1 ====> facile: NOMBRE MYSTERE entre 1 et 100\n");
            printf ("Tapez 2 ====> difficile: NOMBRE MYSTERE entre 1 et 1000\n");
            printf ("Tapez 3 ====> bonne chance mon pote 🫡: NOMBRE MYSTERE entre 1 et 17000\n");
            scanf ("%d",&niveau);
            while (niveau != 1 && niveau != 2 && niveau != 3)
            {
                printf ("Choisissez un nombre correct!");
                scanf ("%d",&niveau);
            }
            if (niveau == 1)
            {
                max = 100;
            }
            if (niveau == 2)
            {
                max = 1000;
            }
            if (niveau == 3)
            {
                max = 17000;
            }
            srand (time(NULL));
            nombreMystere = (rand() % (max - min + 1)) + min;
            compteur = 0;
            printf ("\n\nUn nombre mystere a ete choisi au hasard par l'ordinateur, ");
            do
            {
                printf ("Quel est ce nombre ?\n");
                scanf ("%d",&nombre);
                compteur++;
                if (nombre > nombreMystere)
                {
                    printf ("Indice: C'est moins!\n\n");
                }
                else if (nombre < nombreMystere)
                {
                    printf ("Indice: C'est plus!\n\n");
                }
                else
                {
                    printf ("Bravo! Vous avez trouve le nombre mystere en %d coups!\n\n",compteur);
                    printf ("Voulez vous refaire une partie? Si oui tapez un chiffre, sinon tapez 0\n");
                    scanf ("%d",&continuerPartie);
                }
            } while (nombre != nombreMystere);
        }
        else
        {
            printf ("Choisisseez le niveau de difficulte:\n");
            printf ("Tapez 1: ====> facile: NOMBRE MYSTERE entre 1 et 100\n");
            printf ("Tapez 2: ====> difficile: NOMBRE MYSTERE entre 1 et 1000\n");
            printf ("Tapez 3: ====> bonne chance mon pote 🫡: NOMBRE MYSTERE entre 1 et 17000\n");
            scanf ("%d",&niveau);
            while (niveau != 1 && niveau != 2 && niveau != 3)
            {
                printf ("Choisissez un nombre correct!");
                scanf ("%d",&niveau);
            }
            if (niveau == 1)
            {
                max = 100;
            }
            else if (niveau == 2)
            {
                max = 1000;
            }
            else
            {
                max = 17000;
            }
            printf ("Joueur 1: determiner un nombre mystere: ");
            scanf ("%d",&nombreMystere);
            while (nombreMystere > max)
            {
                printf ("Le nombre mystere doit etre inferieur au seuil emis par le niveau!");
                printf ("Joueur 1: determiner un nombre mystere: ");
                scanf ("%d",&nombreMystere);
            }
            printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf ("Joueur 2: Un nombre mystere a ete choisi par le Joueur 1, ");
            do
            {
                printf ("Quel est ce nombre ?\n");
                scanf ("%d",&nombre);
                compteur++;
                if (nombreMystere < nombre)
                {
                    printf ("Indice: C'est moins!\n\n");
                }
                else if (nombreMystere > nombre)
                {
                    printf ("Indice: C'est plus!\n\n");
                }
                else
                {
                    printf ("Bravo! Vous avez trouve le nombre mystere en %d coups!\n\n", compteur);
                    printf ("Voulez vous refaire une partie? Si oui tapez un chiffre, sinon tapez 0\n");
                    scanf ("%d",&continuerPartie);
                }
            } while (nombre != nombreMystere);
        }
    }
    return (0);
}
