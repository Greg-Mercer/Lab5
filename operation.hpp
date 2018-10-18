//
// Created by Greg on 2018-10-17.
//

#ifndef LAB5_OPERATION_HPP
#define LAB5_OPERATION_HPP

/*
 * An operation. Performed using two operands.
 */
class operation {
public:
    /*
     * Identifies this operation's type.
     * @return char identifier for this operation
     */
    virtual char get_code() = 0;
    /*
     * Performs the operation.
     * @param x the first operand
     * @param y the second operand
     * @return the result
     */
    virtual int perform(int x, int y) = 0;
    /*
     * Destroys the operation.
     */
    virtual ~operation() { };
};

#endif //LAB5_OPERATION_HPP
