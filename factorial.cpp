//
// Created by alex on 13.02.18.
//
#include "factorial.h"

int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    return 1;
}