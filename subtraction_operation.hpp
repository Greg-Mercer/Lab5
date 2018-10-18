//
// Created by Greg on 2018-10-17.
//

#ifndef LAB5_SUBTRACTION_OPERATION_HPP
#define LAB5_SUBTRACTION_OPERATION_HPP

#include "abstract_operation.hpp"

static const char SUBTRACTION_CODE{'-'}; // char for subtraction

/*
 * A subtraction operation. See abstract_operation.hpp.
 */
class subtraction_operation : public abstract_operation {

public:
    /*
     * See abstract_operation.hpp.
     */
    subtraction_operation() : abstract_operation(SUBTRACTION_CODE) { };
    /*
     * See operation.hpp.
     */
    int perform(int x, int y) override {return x - y;};
    /*
     * Destroys this subtraction_operation.
     */
    virtual ~subtraction_operation() { };
};

#endif //LAB5_SUBTRACTION_OPERATION_HPP
