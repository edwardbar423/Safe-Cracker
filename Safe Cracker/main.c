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
    
    printf("You are in a room with no doors and no windows. There is only a safe, the way out is inside. Crack the combination and be freed. \n\n\n");
    
    fflush(stdout);
    sleep(3);
    
    printf("The Safe has a keypad with numbers 0-9. You only need four numbers to get the safe to open. Good luck... \n\n\n");
    
    
    
    int safeCombo[4] = {
        arc4random_uniform(9),             //answer
        arc4random_uniform(9),
        arc4random_uniform(9),
        arc4random_uniform(9),
    };
    
    int keyEntr = -1;                      //numberOfItemsScanned
    int a = -1;                            //a
    
    
safeNum();                            //askForNumber
    while (!safeGues(a)) {                //isValidGuess
        fpurge(stdin);
        keyEntr = scanf("%d", &a);        //numberOfItemsScanned
        
        if (keyEntr != 1 || !safeGues(a)) {  //keyEntr & isValidGuess
            printf("Please enter a number between 0 and 9\n\n: ");
            a = -1;                       //a
        }
    }
   
    
    if(safeCombo == a) {
        printf("Correct! The safe opens, a knife is found inside. \n\n");
    } else {
        printf("BEEP! The correct combo was %d\n", safeCombo);
    }
}
void safeNum() {
    printf("Please enter a number. (From 0 to 9): ");
}

bool safeGues(int guess) {
    return (guess >= 0 && guess < 9);
    
    return 0;
}








int safeNum[4] = {
    

 //char safeNum[9] = "Combination. \n";
   //int comboScanned = 0;
   //comboScanned = scanf("%[^\n]s", combination);
   
   //printf("The combination is %s!\n", combination.);

int guess[4];
   printf("%d, %d, %d, %d", safeCombo[0], safeCombo[1], safeCombo[2], safeCombo[3]);


printf("You are in a room with no doors and no windows. There is only a safe, the way out is inside. Crack the combination and be freed. \n\n\n");
   
   fflush(stdout);
   sleep(3);
   
   printf("The Safe has a keypad with numbers 0-9. You only need one number to get the safe to open. Good luck... \n\n\n");


for (int safeNum = 0; safeNum <9; safeNum = safeNum +1) {
           printf("The safe beeps: %d\n\n", safeNum);
       }
   
   
   while (keyEntr == -1) {
           printf("Press your first key: ");
           keyEntr = safeNum(guess);
       }
   
   switch (keyEntr) {
               case 0: {
                       return 0;
                       break;
                   }
               case 1: {
                       return 0;
                       break;
                   }
               case 2: {
                       return 0;
                       break;
                   }
               case 3: {
                       return 0;
                       break;
                   }
               case 4: {
                       return 0;
                       break;
                   }
               case 5: {
                       return 0;
                       break;
                   }
               case 6: {
                       return 0;
                       break;
                   }
               case 7: {
                       return 0;
                       break;
                   }
               case 8: {
                       return 0;
                       break;
                   }
               case 9: {
                       return 0;
                       break;
                   }
               default: {
                       printf("There isn't anything else to focus on");
                       return 1;
                   }
