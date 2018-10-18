//
// Created by Greg on 2018-10-17.
//

#include <sstream>
#include <string>
#include "rpn_calculator.hpp"

operation* rpn_calculator::operation_type(int operation) {
    switch(operation) {
        case addition_operation::ADDITION_CODE : return new addition_operation();

        case subtraction_operation::SUBTRACTION_CODE : return new subtraction_operation();

        case multiplication_operation::MULTIPLICATION_CODE : return new multiplication_operation();

        case division_operation::DIVISION_CODE : return new division_operation();

        default : throw "Invalid operator in formula.";
    }
}

void rpn_calculator::perform(operation* operation) {
    int x = stack.top();
    stack.pop();
    int y = stack.top();
    stack.pop();

    stack.push(operation->perform(y, x));
}

int rpn_calculator::process_formula(std::string formula) {
    std::istringstream iss = std::istringstream(formula);
    std::string operand;

    while(iss >> operand) {
        std::istringstream iss2 = std::istringstream(operand);
        int n;
        if(iss2 >> n) {
            stack.push(n);
        } else {
            operation* p = operation_type(operand[0]);
            perform(p);
            delete p;
        }
    }

    return stack.top();
}