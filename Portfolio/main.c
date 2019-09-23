//
//  main.c
//  Portfolio
//
//  Created by Huynh, Kaitlyn on 9/16/19.
//  Copyright © 2019 Huynh, Kaitlyn. All rights reserved.
//

#include <stdio.h>
#include "menu.h"
#include "pythagoras.h"
#include "rectangle.h"
#include "time.h"
#include "temperature.h"


int main(void) {
    int lab;
    int a = 1;
    while (a==1) {
        menu();
        printf("Input a number 1-5 to choose a lab");
        scanf("%i",&lab);
        if (lab == 1){
            pythagoras();
        }
        
        if (lab == 2){
            rectangle();
        }
        
        if (lab == 3){
            operator();
        }
        
        if (lab == 4){
            temperatures();
            
        }
        if (lab == 5){
            return 0;
        }
        
        if (lab > 5){
            return 0;
        }
    }
    return 0;
}
