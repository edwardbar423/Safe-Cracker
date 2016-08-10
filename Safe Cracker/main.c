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

int safeNum();
int keyEntr = -1;

int safeCombo();

int main(int argc, const char * argv[]) {
    
    printf("You are in a room with no doors and no windows. There is only a safe, the way out is inside. Crack the combination and be freed. \n\n\n");
    
    fflush(stdout);
    sleep(3);
    
    printf("The Safe has a keypad with numbers 0-9. You only need one number to get the safe to open. Good luck... \n\n\n");
    
    
    
    fflush(stdout);
    sleep(3);
   
    int safeCobo[4] = {
        arc4random_uniform(4),
        arc4random_uniform(4),
        arc4random_uniform(4),
        arc4random_uniform(4),
    };
    
    int guess[4];
    printf("%d, %d, %d, %d", safeCombo[0], safeCombo[1], safeCombo[2], safeCombo[3]);
    
    for (int counter = 0; counter <3; counter = counter +1) {
        printf("The safe beeps: %d\n\n", counter);
    }
    
    
    while (keyEntr == -1) {
        printf("Press your first key: ");
        keyEntr = safeNum();
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
    }


    
    
    
    return 0;
}
