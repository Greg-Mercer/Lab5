//
// Created by Greg on 2018-10-17.
//
#ifndef LAB5_ABSTRACT_OPERATION_HPP
#define LAB5_ABSTRACT_OPERATION_HPP

#include "operation.hpp"

/*
 * See operation.hpp.
 */
class abstract_operation : public operation {
private:
    char operation_type; // identifier for this operation.

public:
    /*
     * Constructs an abstract_operation.
     * @param c this operation as a char (ex: +, -)
     */
    abstract_operation(char c) {
        operation_type = c;
    };
    /*
     * See operation.hpp.
     */
    char get_code() override {
        return operation_type;
    };

    /*
     * Destroys this abstract_operation.
     */
    virtual ~abstract_operation() { };
};

#endif //LAB5_ABSTRACT_OPERATION_HPP
