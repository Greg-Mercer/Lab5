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

/*
 * An RPN calculator. For use in evaluating an RPN formula as a string.
 */
class rpn_calculator {
private:
    int result; // unused
    std::stack<int> stack; // stack of ints; holds values in formula
    /*
     * Determines operation object type given the operation as a character.
     * @param operation the operation as a character
     * @return a pointer to the matching operation object
     */
    operation* operation_type(int operation);
    /*
     * Performs an operation on the two topmost ints on the stack.
     * @param operation the operation to perform
     */
    void perform(operation* operation);

public:
    /*
     * Processes the RPN formula as a string.
     * @param formula the formula to process
     * @return the result
     */
    int process_formula(std::string formula);
};


#endif //LAB5_RPN_CALCULATOR_HPP
