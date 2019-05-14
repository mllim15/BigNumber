/**
 * @file BigNumbersLib.h
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

#ifndef BigNumbersLib_h
#define BigNumbersLib_h

#include <vector>

namespace MyBigNumbers {
    class BigNumbers {
    private:
        std::vector<int> storeDigits;   /* vector to store up to 1000 digits long */
    public:
        /**
         * @brief This will add a and b together.
         *
         * @param a is the first number and b is the second number.
         *
         * @returns a + b
         */
        void operator + (int a, int b);
        
        /**
         * @brief This will subtract b from a.
         *
         * @param a is the first number and b is the second number.
         *
         * @returns a - b
         */
        void operator - (int a, int b);
        
        /**
         * @brief This will multiply a and b.
         *
         * @param Where a is the first number and b is the second number.
         *
         * @returns a * b
         */
        void operator * (int a, int b);
        
        /**
         * @brief This will divide b from a.
         *
         * @param Where a is the first number and b is the second number.
         *
         * @returns a / b
         */
        void operator / (int a, int b);
        
        /**
         * @brief This will perform a mod b.
         *
         * @param Where a is the first number and b is the second number.
         *
         * @returns a % b
         */
        void operator % (int a, int b);
        
        
    };
}

#endif /* BigNumbersLib_h */
