//
//  time.c
//  Portfolio
//
//  Created by Huynh, Kaitlyn on 9/19/19.
//  Copyright © 2019 Huynh, Kaitlyn. All rights reserved.
//

#include "time.h"

void seconds() {
    double seconds=0, minutes=0, hours=0, days=0;
    printf("ask for seconds");
    scanf("%lf", &seconds);
    minutes=seconds/60;
    puts("minutes");
    printf("%lf\n", minutes);
    hours=seconds/3600;
    puts("hours");
    printf("%lf\n", hours);
    days=(seconds/3600)/24;
    puts("days");
    printf("%lf\n", days);
    
}
