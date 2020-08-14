//
//  HashableDemo.cpp
//  Learn CPP
//
//  Created by Bill Chee on 10/8/20.
//  Copyright © 2020 Bill Chee. All rights reserved.
//

#include "HashableDemo.hpp"
#include "Cell.hpp"
#include <unordered_set>

namespace std {
    template<> struct hash<Cell>
    {
        size_t operator()(const Cell& p) const noexcept
        {
            return p(p);
        }
    };
}

void N::HashableDemo::runDemo() {
    printf("## Hashable Demo ##\n\n");
    Cell c1 = { 2, 3 };
    Cell c2 = { 2, 3 };

    std::unordered_set<Cell> thisSet;
    thisSet.insert(c1);

    if (thisSet.find(c2) != thisSet.end()) {
        printf("They are equal\n");
    } else {
        printf("They are NOT equal\n");
    }
    printf("\n");
}
