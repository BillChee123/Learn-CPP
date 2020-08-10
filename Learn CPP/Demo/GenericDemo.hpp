//
//  GenericDemo.hpp
//  Learn CPP
//
//  Created by Bill Chee on 10/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#ifndef GenericDemo_hpp
#define GenericDemo_hpp

#include <stdio.h>
#include "Demo.hpp"

namespace N {
class GenericDemo : public Demo {
public:
    void runDemo() override;
};
}

#endif /* GenericDemo_hpp */
