#include <stdio.h>
#include <stdlib.h>
#include "menu.h"            //Inclusion de bibliotheques
#include "generationCode.h"  //Inclusion de bibliotheques
void paramettre(int a,int l)
{
   FILE* fichier=NULL;  //Initialisation du fichier
    fichier=fopen("C:\\Users\\Ramdani Ali\\Desktop\\param_trage_LED\\param.h","w+");//Ouverture du fichier
    fprintf(fichier,"#pragma once\n\n int allumage = %d;\n\n  int ledOn= %d;",l,a);  //Fonction de modification du fichier
    fclose(fichier);   //Fermeture du fichier
}
