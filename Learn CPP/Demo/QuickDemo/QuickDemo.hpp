//
//  QuickDemo.hpp
//  Learn CPP
//
//  Created by Bill Chee on 10/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#ifndef QuickDemo_hpp
#define QuickDemo_hpp

#include <stdio.h>
#include "Demo.hpp"

namespace N {

class Base {
public:
    virtual void doWork() {
        printf("Base doWork()\n");
    }
    Base(int id) {
        this->id = id;
    }
    virtual ~Base() {
        printf("Base Destructor is called: %d\n", id);
    }
private:
    int id;
};

class Derived: public Base {
public:
    virtual void doWork() {
        printf("Derived doWork()\n");
    }

    Derived(int id) : Base(id) {}

    ~Derived() override {
        printf("Derived Destructor is called\n");
    }
};

class QuickDemo : public Demo {
public:
    void runDemo() override;
};
}

#endif /* QuickDemo_hpp */
