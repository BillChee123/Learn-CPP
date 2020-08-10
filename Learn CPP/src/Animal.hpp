//
//  Animal.hpp
//  Learn CPP
//
//  Created by Bill Chee on 8/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <stdio.h>

#endif /* Animal_hpp */

namespace N {
class Animal {
public:
    virtual void eat() {
        printf("Animal Eating\n");
    }

    ~Animal() {
        printf("Animal Destructor is called\n");
    }
};

class Dog: public Animal
{
public:
    void eat() {
        printf("Dog Eating (Overriden)\n");
    }

    ~Dog() {
        printf("Dog Destructor is called\n");
    }

    void set(int id) {
        this->id = id;
    }
    int get() {
        return this->id;
    }
private:
    int id = 3;
};

}
