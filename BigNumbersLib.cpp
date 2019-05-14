/**
 * @file BigNumbersLib.cpp
 *
 * @author Michelle Lim
 *
 * @version 1
 *
 * @brief This library was created for CS2560 Final Part 2. It will
 * expand primitive data types (short, int, and double) and allow users to
 * store big numbers that can store up to 1,00 digits long. In order to do this,
 * a BigNumbers class will be created using TDD, that will use vectors from
 * STL to store the digits. BigNumbers should have the same functionality
 * as other numerical data types.
 
 */

#include <stdio.h>
#include "BigNumbersLib.h"
#include <vector>

namespace MyBigNumbers {
    int BigNumbers::operator+(<#int a#>, <#int b#>) {
        return a + b;
    }
    int BigNumbers::operator-(<#int a#>, <#int b#>) {
        return a - b;
    }
    int BigNumbers::operator*(<#int a#>, <#int b#>) {
        return a * b;
    }
    int BigNumbers::operator/(<#int a#>, <#int b#>) {
        return a / b;
    }
    int BigNumbers::operator%(<#int a#>, <#int b#>) {
        return a % b;
    }
}
