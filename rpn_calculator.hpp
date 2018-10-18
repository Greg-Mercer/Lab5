//
// Created by Greg on 2018-10-17.
//

#ifndef LAB5_RPN_CALCULATOR_HPP
#define LAB5_RPN_CALCULATOR_HPP

#include <stack>
#include <string>
#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "multiplication_operation.hpp"
#include "division_operation.hpp"

class rpn_calculator {
private:
    int result;
    std::stack<int> stack;
    operation* operation_type(int operation);
    void perform(operation* operation);

public:
    int process_formula(std::string formula);
};


#endif //LAB5_RPN_CALCULATOR_HPP
