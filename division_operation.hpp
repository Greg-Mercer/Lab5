//
// Created by Greg on 2018-10-17.
//

#ifndef LAB5_DIVISION_OPERATION_HPP
#define LAB5_DIVISION_OPERATION_HPP

#include "abstract_operation.hpp"

/*
 * A division operation. See abstract_operation.hpp.
 */
class division_operation : public abstract_operation {

public:
    static const char DIVISION_CODE{'/'}; // char for division
    /*
     * See abstract_operation.hpp.
     */
    division_operation() : abstract_operation(DIVISION_CODE) { };
    /*
     * See operation.hpp.
     */
    int perform(int x, int y) override {return x / y;};
    /*
     * Destroys this division_operation.
     */
    virtual ~division_operation() { };
};

#endif //LAB5_DIVISION_OPERATION_HPP
