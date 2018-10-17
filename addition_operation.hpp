//
// Created by Greg on 2018-10-17.
//

#ifndef LAB5_ADDITION_OPERATION_HPP
#define LAB5_ADDITION_OPERATION_HPP

#include "abstract_operation.hpp"

class addition_operation : public abstract_operation {

public:
    static const char ADDITION_CODE{'+'};
    addition_operation() : abstract_operation(ADDITION_CODE) { };
    int perform(int x, int y) override {return x + y;};
    virtual ~addition_operation() { };
};

#endif //LAB5_ADDITION_OPERATION_HPP
