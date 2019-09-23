//
//  temperature.c
//  Portfolio
//
//  Created by Huynh, Kaitlyn on 9/20/19.
//  Copyright © 2019 Huynh, Kaitlyn. All rights reserved.
//

#include "temperature.h"
#include <stdio.h>
#include <math.h>
int temperatures(void) {
    double temperature1,temperature2,temperature3,temperature4;
    printf("Enter the first Fahrenheit temperature\n");
    scanf("%lf", &temperature1);
    printf("Enter the second Fahrenheit temperature\n");
    scanf("%lf", &temperature2) ;
    printf("Enter the third Fahrenheit temperature\n");
    scanf("%lf", &temperature3);
    printf("Enter the fourth Fahrenheit temperature\n");
    scanf("%lf", &temperature4);
    
    double celsius1,FtoFreeze1,celsius2,FtoFreeze2,celsius3,FtoFreeze3,celsius4,FtoFreeze4;
    
    celsius1=(5*(temperature1-32))/9;
    FtoFreeze1=temperature1-32;
    printf("Your first Fahrenheit Temperature is %lf.\n This is %lf in Celsius.\n Your Fahrenheit Temperature is %lf away from the Fahrenheit freezing point, and the Celsius equivalent is %lf away from the Celsius freezing point.\n", temperature1, celsius1, FtoFreeze1, celsius1);
    
    celsius2 = (5*(temperature2-32))/9;
    FtoFreeze2=temperature2-32;
    printf("Your second Fahrenheit Temperature is %lf.\n This is %lf in Celsius.\n Your Fahrenheit Temperature is %lf away from the Fahrenheit freezing point, and the Celsius equivalent is %lf away from the Celsius freezing point.\n", temperature2, celsius2, FtoFreeze2, celsius2);
    
    celsius3=(5*(temperature3-32))/9;
    FtoFreeze3=temperature3-32;
    printf("Your third Fahrenheit Temperature is %lf.\n This is %lf in Celsius.\n Your Fahrenheit Temperature is %lf away from the Fahrenheit freezing point, and the Celsius equivalent is %lf away from the Celsius freezing point.\n", temperature3, celsius3, FtoFreeze3, celsius3);
    
    celsius4=(5*(temperature4-32))/9;
    FtoFreeze4=temperature4-32;
    printf("Your fourth Fahrenheit Temperature is %lf.\n This is %lf in Celsius.\n Your Fahrenheit Temperature is %lf away from the Fahrenheit freezing point, and the Celsius equivalent is %lf away from the Celsius freezing point.\n", temperature4, celsius4, FtoFreeze4, celsius4);
    
    return 0;
    
}
