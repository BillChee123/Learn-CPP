//
//  SampleDemo.cpp
//  Learn CPP
//
//  Created by Bill Chee on 10/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#include "SampleDemo.hpp"
#include "Sample.hpp"

void N::SampleDemo::runDemo() {
    printf("## Sample Demo ##\n\n");
    // Sample.hpp
    Sample s;
    s.doSomething("Hello World"); // Hello World
    printf("\n");
}
