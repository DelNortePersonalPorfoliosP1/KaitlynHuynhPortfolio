//
//  rectangle.c
//  Rectangle
//
//  Created by Huynh, Kaitlyn on 9/16/19.
//  Copyright © 2019 Huynh, Kaitlyn. All rights reserved.
//

#include "rectangle.h"

void rectangle() {
    double length=0,width=0,perimeter=0,area=0;
    printf ("ask for length");
    scanf ("%lf", &length);
    printf ("ask for width");
    scanf ("%lf", &width);
    perimeter=length+length+width+width;
    puts("perimeter");
    printf("%lf\n", perimeter);
    area=length*width;
    puts("area");
    printf("%lf\n", area);
}
