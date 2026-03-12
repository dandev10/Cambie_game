#include "mainmenu.h"
#include "game.h"

void mainmenu(char yn[2]) {
    menuloop = 1;
    while(menuloop) {
        printf("menu:");
        fgets(menuplayer.choose, 20, stdin);
        menuplayer.choose[strlen(menuplayer.choose)-1] = '\0';

        if (strcmp(menuplayer.choose, "start") ==0 ) {
            menuloop = 0;
            game(yn);
        }
        else if (strcmp(menuplayer.choose, "quit") == 0) {
            menuloop = 0;
        }
    }

}