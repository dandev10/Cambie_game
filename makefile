all: 
# makefile works only for game core
	gcc gamecore/main.c gamecore/game.c gamecore/mainmenu.c -std=c17 -o main 
	./main