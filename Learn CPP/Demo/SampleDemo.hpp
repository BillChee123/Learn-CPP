//
//  SampleDemo.hpp
//  Learn CPP
//
//  Created by Bill Chee on 10/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#ifndef SampleDemo_hpp
#define SampleDemo_hpp

#include <stdio.h>
#include "Demo.hpp"

namespace N {
class SampleDemo : public Demo {
public:
    void runDemo() override;
};
}


#endif /* SampleDemo_hpp */
