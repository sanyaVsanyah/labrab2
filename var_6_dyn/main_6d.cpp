#include "Header_6d.h"

int main()
{

    int32_t choice{};
    int32_t size{};
    float* array = new float[size];
    int32_t P{};

    EnterChoice(choice);
    switch (choice)
    {
    case 0:
        RandomFillingArray(array, size);
        break;
    case 1:
        EnterSize(size);
        break;
    default:
        std::cout << "Invalid number.";
        return 1;
    }
    try {
        if (size <= 0)
        {
            throw std::invalid_argument("Wrong size.");
        }

        FillingArray(array, size);
        FindMinimalIndex(array, size);
        SummOfElements(array, size);
        EnterNumberP(P);
        CompressArray(array, size, P);
    }
    catch (std::invalid_argument e) {
        std::cout << e.what();
    }
    delete []array;
    return 0;
}
