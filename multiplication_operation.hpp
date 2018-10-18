//
// Created by Greg on 2018-10-17.
//

#ifndef LAB5_MULTIPLICATION_OPERATION_HPP
#define LAB5_MULTIPLICATION_OPERATION_HPP

#include "abstract_operation.hpp"

static const char MULTIPLICATION_CODE{'*'};

class multiplication_operation : public abstract_operation {

public:
    multiplication_operation() : abstract_operation(MULTIPLICATION_CODE) { };
    int perform(int x, int y) override {return x * y;};
    virtual ~multiplication_operation() { };
};

#endif //LAB5_MULTIPLICATION_OPERATION_HPP
