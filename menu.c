#include <stdio.h>
#include <stdlib.h>
#include "generationCode.h"
#include "menu.h"

/*
fopen ( <fichier , mode_d'ouverture>):
r (lecture seule , doit exsister)
w(ecriture seule)*
a(ajout en fin de fichier)
r+(lecture ecriture)
w+(lecture ecriture,suprimer le contuenue)
a+(ajout lecture ecriture, fin de fichier)


fclose(<fichier>) : fermer un fichier ouvert

[LECTURE]
fgetc():lire un caractère
[ecriture]

*/





 void Menu() //Appel de fonction
 {

     int i=0;
    int choixMenu;

     printf("\n choisissez le mode dont votre coeur vas s'allumer\n");
    printf("\n1.une_led_sur_deux");
    printf("\n2.une_led_sur_trois");
    printf("\n3.chenille ");
    printf("\n4.chenille2");
    printf("\n5.deux_chenille");
    printf("\n6.toutes_les_leds");
    printf("\n7.au_choix");
    printf("\n8.optionelle1");
    printf("\n9.optionelle2");

    printf("\nVotre choix?\n\n");

    scanf("%d", &choixMenu);

    if(choixMenu==1)
    {
       paramettre(i,choixMenu);
    }
    else if(choixMenu==2)
    {
        paramettre(i,choixMenu);
    }
    else if(choixMenu==3)
    {
       paramettre(i,choixMenu);
    }
    else if(choixMenu==4)
    {
       paramettre(i,choixMenu);
    }
     else if(choixMenu==5)
    {
        paramettre(i,choixMenu);
    }
     else if(choixMenu==6)
    {
       paramettre(i,choixMenu);
    }
    else if(choixMenu==7)
    {
        printf("choisissez la LED qui va s'allumer");
        scanf("%d",&i);
       paramettre(i,choixMenu);
    }

    else if(choixMenu==8)
    {
        paramettre(i,choixMenu);
    }
    else if(choixMenu==9)
    {
        paramettre(i,choixMenu);
    }
       else
   printf("Vous ne ferez rien du tout!");
 }
