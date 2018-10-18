//
// Created by Greg on 2018-10-17.
//

#ifndef LAB5_ADDITION_OPERATION_HPP
#define LAB5_ADDITION_OPERATION_HPP

#include "abstract_operation.hpp"

static const char ADDITION_CODE{'+'}; // char for addition

/*
 * An addition operation. See abstract_operation.hpp.
 */
class addition_operation : public abstract_operation {

public:
    /*
     * See abstract_operation.hpp.
     */
    addition_operation() : abstract_operation(ADDITION_CODE) { };
    /*
     * See operation.hpp.
     */
    int perform(int x, int y) override {return x + y;};
    /*
     * Destroys this addition_operation.
     */
    virtual ~addition_operation() { };
};

#endif //LAB5_ADDITION_OPERATION_HPP
