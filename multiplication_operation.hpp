//
// Created by Greg on 2018-10-17.
//

#ifndef LAB5_MULTIPLICATION_OPERATION_HPP
#define LAB5_MULTIPLICATION_OPERATION_HPP

#include "abstract_operation.hpp"

static const char MULTIPLICATION_CODE{'*'}; // char for multiplication

/*
 * A multiplication operation. See abstract_operation.hpp.
 */
class multiplication_operation : public abstract_operation {

public:
    /*
     * See abstract_operation.hpp.
     */
    multiplication_operation() : abstract_operation(MULTIPLICATION_CODE) { };
    /*
     * See operation.hpp.
     */
    int perform(int x, int y) override {return x * y;};
    /*
     * Destroys this multiplication_operation.
     */
    virtual ~multiplication_operation() { };
};

#endif //LAB5_MULTIPLICATION_OPERATION_HPP
