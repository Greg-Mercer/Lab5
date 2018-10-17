//
// Created by Greg on 2018-10-17.
//

#ifndef LAB5_OPERATION_HPP
#define LAB5_OPERATION_HPP

class operation {
public:
    virtual char get_code();
    virtual int perform(int x, int y);
    virtual ~operation() { };
};

#endif //LAB5_OPERATION_HPP
