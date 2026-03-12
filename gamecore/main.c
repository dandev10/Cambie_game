#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "mainmenu.h"
#include "game.h"

// files from the "game" file
#include "../game/players/mainplayer.h"
#include "../game/players/zombie.h"

//languages
#include "../game/langages/english.h"
#include "../game/langages/russian.h"



int main() {



    // Beginning stats here, because of this stupid shit
    demoplayer.hearts = 10;


    //havent decided on the name yet.
    printf("Welcome to the Neon Game!\n");
    printf("version 0.6\nwrite /help if stuck\n\n");
    
    sleep(1);
    printf("whats the players name: ");
    fgets(demoplayer.playersname, 50, stdin);
    demoplayer.playersname[strlen(demoplayer.playersname)-1] = '\0';

    char yn[2];
    mainmenu(yn);


    return 0;
}

