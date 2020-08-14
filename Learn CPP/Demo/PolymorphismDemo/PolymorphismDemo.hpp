//
//  PolymorphismDemo.hpp
//  Learn CPP
//
//  Created by Bill Chee on 10/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#ifndef PolymorphismDemo_hpp
#define PolymorphismDemo_hpp

#include <stdio.h>
#include "Demo.hpp"

namespace N {
class PolymorphismDemo : public Demo {
public:
    void runDemo() override;
};
}

#endif /* PolymorphismDemo_hpp */
