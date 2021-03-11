// Steam fee calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>

const std::string euro = "euros";

struct calculate {
    calculate() {
        float beforeFee;
        float numOfItems;
        std::cin >> beforeFee;
        std::cout << "Number of items: ";
        std::cin >> numOfItems;
        std::cout << std::endl;

        const float fee = 1.15;

        float calculation = beforeFee / fee * numOfItems;

        if (calculation > 0) {
            system("CLS");
            std::cout << calculation << std::flush;
            system("CLS");
            std::cout << std::endl << std::endl << std::flush;
            system("CLS");
            std::cout << beforeFee << " " << euro << " / 1.15 * " << numOfItems << " = " << calculation << " " << euro << std::endl << std::endl << std::flush;
            calculate();
        }
        else {
            std::cout << "Invalid number" << std::endl;
            std::cout << "Insert new number" << std::endl;
            calculate();
        }
    }

};

int main()
{
    std::cout << "Enter a value\n";
    calculate();
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
