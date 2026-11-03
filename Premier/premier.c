/*
      ___.                                  .__                      .__               .__          
  ____\_ |__   _____________   ____   _____ |__| ___________    _____|__| _____ ______ |  |   ____  
 /    \| __ \  \____ \_  __ \_/ __ \ /     \|  |/ __ \_  __ \  /  ___/  |/     \\____ \|  | _/ __ \ 
|   |  \ \_\ \ |  |_> >  | \/\  ___/|  Y Y  \  \  ___/|  | \/  \___ \|  |  Y Y  \  |_> >  |_\  ___/ 
|___|  /___  / |   __/|__|    \___  >__|_|  /__|\___  >__|    /____  >__|__|_|  /   __/|____/\___  >
     \/    \/  |__|               \/      \/        \/             \/         \/|__|             \/ 
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
    est_premier = (n > 1);

    for (cpt = 2; cpt < n; cpt++) {
        if (n % cpt == 0) {
            est_premier = 0;
            break;
        }
    }

    printf("%d %s premier.\n", n, est_premier ? "est" : "n'est pas");
    return EXIT_SUCCESS;
}
