//
//  QuickDemo.cpp
//  Learn CPP
//
//  Created by Bill Chee on 10/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#include "QuickDemo.hpp"
#include <vector>
#include <iostream>

using namespace N;
// base class virtual function
// overrides Base::doWork
// ("virtual" is optional
// here)
// create base class pointer // to derived class object; // see Item 21 for info on // std::make_unique
// call doWork through base
// class ptr; derived class
// function is invoked


constexpr int Max(int x, int y) {
   return (x > y)? x : y;
}

class A {
public:
    int a;
    A& operator= (A&& other) {
        this->a = other.a;
        other.a = 0;
        return *this;
    }
};

void QuickDemo::runDemo() {
    printf("## Quick Demo ##\n\n");

    printf("## Move Semantics Demo ##\n\n");

    printf("## 1 ##\n\n");

    std::string str("init");                       //1
    std::string test1(str);                        //2
    std::string test2(std::move(str));             //3

    str = std::string("new value");                //4
    std::string &&str_ref = std::move(str);        //5
    std::string test3(str_ref);                    //6

    test2[0] = 'c';

    printf("%s %s %s\n", test1.c_str(), test2.c_str(), test3.c_str());

    printf("\n\n## 2 ##\n\n");

    A a;
    a.a = 1;
    A b;
    b = std::move(a); //calling A& operator= (A&& other)
    std::cout << a.a << std::endl; //0
    std::cout << b.a << std::endl; //1

//    int& x = 666;       // Error
//    const int& y = 666; // OK

    printf("\n");

    printf("## Unique Pointer Demo ##\n\n");

    while (true) {
        std::unique_ptr<Base> upb = std::make_unique<Derived>(1);
        printf("Before wow\n");
        upb = std::make_unique<Derived>(2);
        printf("After wow\n");

        upb->doWork();
        break;
    }
    printf("Outside while loop\n");

    printf("\n");

    printf("## Demoing Shared Pointer ##\n\n");

    while (true) {
        std::shared_ptr<Base> upb = std::make_shared<Derived>(1);
        std::shared_ptr<Base> upb2 = upb;
        printf("Before wow\n");
//        upb = std::make_shared<Derived>(2);
        upb = NULL;
        printf("Before wow 1\n");
        upb2 = NULL;
        printf("After wow\n");

//        upb->doWork();
        break;
    }
    printf("Outside while loop\n");

    printf("\n");
}
