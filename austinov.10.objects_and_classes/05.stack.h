/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Consider the following structure declaration:                     */

    struct customer
    {
        char fullname[35];
        double payment;
    };

/* Write a program that adds and removes customer structures from a  */
/* stack, represented by a Stack class declaration in listing 10.10. */
/* Each time a customer is removed, his or her payment should be     */
/* added to a running total, and the running total should be         */
/* reported.                                                         */
/* Note: You should be able to use the Stack class unaltered; just   */
/*       change the typedef declaration so that Item is type         */
/*       customerinstead of unsigned long.                           */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


// stack.h -- class definition for the stack ADT from listing 10.10

#ifndef STACK_H_
#define STACK_H_

typedef customer Item;

class Stack
{
    private:
        enum {MAX = 10};  // constant specific to class
        Item items[MAX];  // holds stack items
        int top;          // index for top stack item
    public:
        Stack() { top = 0; }  // create an empty stack
        bool isempty() const { return 0 == top; }
        bool isfull() const { return MAX == top; }

        // push() returns false if stack already is full,
        // true otherwise
        bool push(const Item & item); // add item to stack

        // pop() returns false if stack already is empty,
        // true otherwise
        bool pop(Item & item); // pop top into item
};

#endif
