#pragma once

#include <stdio.h>
#include <string.h>
#include <unistd.h>

struct place {
    
    int cordsN;
    int cordsW;
};
struct place locate;

void cords();