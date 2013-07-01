/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Consider the following structure declaration:                     */
/*
    struct customer
    {
        char fullname[35];
        double payment;
    };
*/
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

// Listing 10.11 stack.cpp -- Stack member functions #include "stack.h"

#include "05.stack.h"

bool Stack::push(const Item & item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false;
}
