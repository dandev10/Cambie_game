#include "game.h"

void game(char yn[2]) {
    gameloop = 1;
//game
    while(gameloop) {

        printf("%s: ", demoplayer.playersname);
        fgets(demoplayer.choose, 20, stdin);
        demoplayer.choose[strlen(demoplayer.choose)-1] = '\0';

        /*game commands*/
        // ends game
        if (strcmp(demoplayer.choose, "/quit") == 0) {
            gameloop = 0;
        }

        // help
        else if (strcmp(demoplayer.choose, "/help") == 0) {
            printf("list of commands:\n");
            printf("1. /help. -> gives you list of commands\n");
            printf("2. /quit  -> ends game completely\n");
            printf("3. /stats -> gives the players stats\n");
        }

        // players stats
        else if (strcmp(demoplayer.choose, "/stats") == 0) {
            printf("\nHealth = %d\n", demoplayer.hearts);
        }
        /*end of game commands*/

    } /*end of the gameloop*/

}