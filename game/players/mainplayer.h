// if you want change any stats of player go to mainplayer.c

#pragma once

#include <stdio.h>
#include <string.h>
#include <unistd.h>

struct player
{
    char choose[20];
    char playersname[50];
    int hearts;
    int xp;

    int moveN;
    int MoveW;
};

struct player demoplayer;

void mainplayerfunc();

