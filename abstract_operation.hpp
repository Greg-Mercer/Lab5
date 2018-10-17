//
// Created by Greg on 2018-10-17.
//
#ifndef LAB5_ABSTRACT_OPERATION_HPP
#define LAB5_ABSTRACT_OPERATION_HPP

#include "operation.hpp"

class abstract_operation : public operation {
private:
    char operation_type;

public:
    abstract_operation(char c) {
        operation_type = c;
    };

    char get_code() override {
        return operation_type;
    };

    virtual ~abstract_operation() { };
};

#endif //LAB5_ABSTRACT_OPERATION_HPP
