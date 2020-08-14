//
//  AsyncDemo.hpp
//  Learn CPP
//
//  Created by Bill Chee on 10/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#ifndef AsyncDemo_hpp
#define AsyncDemo_hpp

#include <stdio.h>
#include "Demo.hpp"

namespace N {
class AsyncDemo : public Demo {
public:
    void runDemo() override;
};
}

#endif /* AsyncDemo_hpp */
