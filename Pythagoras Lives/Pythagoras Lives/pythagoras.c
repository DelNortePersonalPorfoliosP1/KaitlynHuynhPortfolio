//
//  pythagoras.c
//  Pythagoras Lives
//
//  Created by Huynh, Kaitlyn on 9/13/19.
//  Copyright © 2019 Huynh, Kaitlyn. All rights reserved.
//

#include "pythagoras.h"

void pythagoras() {
    double xvalue=0,yvalue=0,zvalue=0;
    printf ("ask for xvalue");
    scanf ("%lf", &xvalue);
    printf ("ask for yvalue");
    scanf ("%lf", &yvalue);
    zvalue=(xvalue*xvalue)+(yvalue*yvalue);
    zvalue=sqrt(zvalue);
    printf("%lf\n", zvalue);
}
