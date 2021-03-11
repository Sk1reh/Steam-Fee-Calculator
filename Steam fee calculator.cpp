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
