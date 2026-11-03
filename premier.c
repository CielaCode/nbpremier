/***************************/
/* Nombre premier 	   */
/* 2025 Bogt 		   */
/***************************/
/* syntaxe : ./premier 200 */ 

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
/* variable locale  */
int nombre, cpt, estPremier;

/* Vérifier que l'utilisateur a fourni un argument */
    if (argc != 2) 
    {
        printf("Usage : %s <nombre_entier>\n", argv[0]);
        return EXIT_FAILURE; /* sinon on retourne */
    }

    /* Convertir l'argument en entier */
    nombre = atoi(argv[1]);

    /* Par défaut le nombre est premier */
    estPremier=1;    
    /* Les nombres <= 1 ne sont pas premiers */
    if (nombre <= 1) 
    {
        printf("%d n'est pas un nombre premier.\n", nombre);
        return EXIT_SUCCESS;  /* fin pas premier */
    }
    /* on démarre à 2 */
    cpt=2;
    /* Vérification des diviseurs */
    /* ici on va parcourir cpt de 2 à nombre */
   
    while ((cpt <= nombre) && estPremier)
    {
        if (nombre % cpt == 0) 
		{
            	estPremier = 0; 
		/* Trouvé un diviseur, donc ce n'est pas un nombre premier */
        	}
    cpt++;
    }
    /* Affichage du résultat */
    if (estPremier) {
        printf("%d est un nombre premier.\n", nombre);
    } else {
        printf("%d n'est pas un nombre premier.\n", nombre);
    }
    return EXIT_SUCCESS;
}
