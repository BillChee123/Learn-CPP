//
//  PolymorphismDemo.cpp
//  Learn CPP
//
//  Created by Bill Chee on 10/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#include "PolymorphismDemo.hpp"
#include "Animal.hpp"
#include <vector>

void N::PolymorphismDemo::runDemo() {
    printf("## Polymorphism Demo ##\n\n");
    // Runtime Polymorphism
    for (int i = 0; i < 1; i++) {
        Animal a;
        Dog d;
        a = d;
        a.eat(); // Animal Eating
    }
    printf("Outside Loop 1\n");
    
    Animal* a_ptr;
    while (true) {
        a_ptr = new Dog;
        a_ptr->eat(); // Dog Eating (Overriden)
        break;
    }
    printf("Outside Loop 2, before delete\n");
    delete a_ptr;
    printf("Outside Loop 2\n");
    
    std::vector<Dog> vec;
    for (int i = 0; i < 1; i++) {
        Dog d;
        vec.push_back(d);
    }
    printf("Outside Loop 3, before pop_back()\n");
    vec.pop_back();
    printf("Outside Loop 3\n");
    
    for (int i = 0; i < 1; i++) {
        std::vector<Dog*> vec_2;
        Dog* d = new Dog();
        d->set(5);
        vec_2.push_back(d);
        vec_2.erase(vec_2.begin());
        //printf("%d\n", vec_2[0]->get()); // Still inside
        
    }
    printf("Outside Loop 4\n");
    printf("\n");
}
