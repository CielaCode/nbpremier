/*
 * nb premier sans le break
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
int cpt;
int n;
int est_premier;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <nombre>\n", argv[0]);
        return EXIT_FAILURE;
    }

    n = atoi(argv[1]);
    est_premier = 1;
    cpt = 2;
/* on boucle si le  nombre !est_premier et que cpt <n */  
    while ( est_premier && (cpt<n) )
    {
        if (n % cpt == 0) 
	{
            est_premier = 0;
        }
	cpt++;
    }
    if (est_premier)
	   printf ("%d est premier \n",n);
    else 
	   printf ("%d n'est pas premier \n",n);
    return EXIT_SUCCESS;
}
