//
//  GenericDemo.cpp
//  Learn CPP
//
//  Created by Bill Chee on 10/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#include "GenericDemo.hpp"
#include "Generic.hpp"

void N::GenericDemo::runDemo() {
    printf("## Generic Demo ##\n\n");
    // Generic and class templates
    Generic<int> genericObject;
    int x = genericObject.identityOperator(5);
    printf("%d\n", x); // 5
    printf("\n");
}
