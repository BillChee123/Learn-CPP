//
//  Generic.hpp
//  Learn CPP
//
//  Created by Bill Chee on 8/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#ifndef Generic_hpp
#define Generic_hpp

#include <stdio.h>

#endif /* Generic_hpp */

namespace N {
template <class T>
class Generic {
public:
    T identityOperator(T identity) {
        return identity;
    };
};
}
