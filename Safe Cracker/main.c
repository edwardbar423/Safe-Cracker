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

void safeNum(void);                        //askForNumber
bool safeGues(int guess);                  //isValidGuess

int main(int argc, const char * argv[]) {
    
    printf("You are in a room with no doors and no windows.\nThere is only a safe, the way out is inside.\nCrack the combination and be freed. \n\n\n");
    fflush(stdout);
    sleep(3);
    printf("The Safe has a keypad with numbers 0-9. You only need four numbers to get the safe to open. Good luck... \n\n\n");
    fflush(stdout);
    sleep(3);
    printf("Please enter a number between 0 and 9\n\n: ");
    
    
    int safeCombo[4] = {
        arc4random_uniform(9),
        arc4random_uniform(9),
        arc4random_uniform(9),
        arc4random_uniform(9),
    };
    
    int keyEntr = -1;
    int a = -1;
    
    
safeNum();
    while (!safeGues(a)) {
        fpurge(stdin);
        keyEntr = scanf("%d", &a);
        
        if (keyEntr != 1 || !safeGues(a)) {
            printf("Please enter a number between 0 and 9\n\n: ");
            a = -1;
        }
    }
   
    
    if(safeCombo == a) {
        printf("Correct! The safe opens, a knife is found inside. \n\n");
    } else {
        printf("BEEP! The correct combo was %d, %d, %d, %d, \n", safeCombo);
    }
}
void safeNum() {
    printf("Please enter a number. (From 0 to 9): ");
}

bool safeGues(int guess) {
    return (guess >= 0 && guess < 9);
    
    return 0;
}


