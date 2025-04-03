#include "Header_21.h"



int main()
{
    float arr[MAX_SIZE];
    int32_t size{};
    int32_t choice{};
    int32_t firstPosition{ -1 };
    int32_t secondPosition{ -1 };
    int32_t a{};
    int32_t b{};

    EnterChoice(choice);
    switch (choice)
    {
    case 0:

        EnterSize(size);
        try {
            if (size <= 0)
            {
                throw std::invalid_argument("Wrong size.");
            }
        }
        catch (std::invalid_argument e) {
            std::cout << e.what();
        }
        RandomFillingArray(arr, size);

        break;
    case 1:
        EnterSize(size);
        try {
            if (size <= 0)
            {
                throw std::invalid_argument("Wrong size.");
            }

            FillingArray(arr, size);

        }
        catch (std::invalid_argument e) {
            std::cout << e.what();
        }
        break;
    default:
        std::cout << "Invalid number.";
        return -100;
    }
    std::cout << "The number of different elements:" << CountUniqueElements(arr, size) << '\n';
    FindPlusElements(arr, size, firstPosition, secondPosition);
    try {
        if (firstPosition == -1 || secondPosition == -1)
        {
            throw std::logic_error("Not found element");
        }
        SummOfElements(arr, firstPosition, secondPosition);
    }
    catch (std::logic_error f) {
        std::cout << f.what();
    }
    EnterA(a);
    EnterB(b);
    AnotherArray(arr, size, a, b);
    return 0;
}