
//
//  main.c
//  Safe Cracker
//
//  Created by Andrew Barber on 8/10/16.
//  Copyright © 2016 Invictus. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

void safeNum(void);
bool safeGues(int guess);

int main(int argc, const char * argv[]) {
    
    printf("What is your name?\n\n");
    fpurge(stdin);
    char name[50] = "\0";
    int numberOfItemsScanned = 0;
    numberOfItemsScanned = scanf("%[^\n]s", name);
    
    printf("Hello! %s!\n\n", name);
    
    printf("You are in a room with no doors and no windows.\nThere is only a safe, the way out is inside.\nCrack the combination and be freed. \n\n\n");
    printf("The Safe has a keypad with numbers 0-9. You only need four numbers to get the safe to open. Attempt to get the right comnination. Good luck... \n\n\n");
    
    
    int safeCombo[4] = {
        arc4random_uniform(9),
        arc4random_uniform(9),
        arc4random_uniform(9),
        arc4random_uniform(9),
    };
    
    int keyEntr = -1;
    int a = -1;
    int b = -1;
    int c = -1;
    int d = -1;
    
    safeNum();
    while (!safeGues(a)) {
        fpurge(stdin);
        keyEntr = scanf("%d", &a);
        if (keyEntr != 1 && !safeGues(a)) {
            printf("Please enter a number between 0 and 9\n\n: ");
            a = -1;
        }
    }
    while (!safeGues(b)) {
        fpurge(stdin);
        keyEntr = scanf("%d", &b);
        if (keyEntr != 1 && !safeGues(b)) {
            printf("Please enter a number between 0 and 9\n\n: ");
            b = -1;
        }
    }
    while (!safeGues(c)) {
        fpurge(stdin);
        keyEntr = scanf("%d", &c);
        if (keyEntr != 1 && !safeGues(c)) {
            printf("Please enter a number between 0 and 9\n\n: ");
            c = -1;
        }
    }
    while (!safeGues(d)) {
        fpurge(stdin);
        keyEntr = scanf("%d", &d);
        if (keyEntr != 1 && !safeGues(d)){
            printf("Please enter a number between 0 and 9\n\n: ");
            d = -1;
        }
    }
    
    if(safeCombo[0] == a) {
        printf("First number is Correct!  \n\n");
    }
    if(safeCombo[1] == b) {
        printf("Second number is Correct!  \n\n");
    }
    if(safeCombo[2] == c) {
        printf("Third number is Correct!  \n\n");
    }
    if(safeCombo[3] == d) {
        printf("Correct! The safe opens, a TJ is found inside.  \n\n");
    }
    else {
        printf("BEEP! The correct combo was %d, %d, %d, %d, \n\n\n", safeCombo[0], safeCombo[1], safeCombo[2], safeCombo[3]);
        printf("To play again press the -> in the top left hand corner!\n\n\n");
    }
    return 0;
}
void safeNum() {
    printf("Please enter a number. (From 0 to 9): "); //Why does this pop up before I've entered the safeCombinations? Because it pulls from safeNum on line 34?
}

bool safeGues(int guess) {
    return (guess >= 0 && guess < 9);
    
    return 0;
}
