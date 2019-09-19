//
//  main.c
//  Rectangle
//
//  Created by Huynh, Kaitlyn on 9/16/19.
//  Copyright © 2019 Huynh, Kaitlyn. All rights reserved.
//

#include <stdio.h>
#include "rectangle.h"

int main(int argc, const char * argv[]) {
    printf("=====================================\n");
    printf("|   MENU SELECTION PORTFOLIO\n");
    printf("=====================================\n");
    printf("| Options:\n");
    printf("|        1. Run pythagoras\n");
    printf("|        2. Run rectangle\n");
    printf("|        3. Run time operator\n");
    printf("|        4. Run temperature\n");
    printf("|        5. Run data types\n");
    printf("|        6. Exit\n");
    printf("=====================================\n");
    pythagoras();
    rectangle();
    operator();
    return 0;
}
