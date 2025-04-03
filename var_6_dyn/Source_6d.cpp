#include <iostream>
#include <cstdint>
#include <cmath> 
#include "Header_6d.h"


void EnterChoice(int32_t& choice)
{
    std::cout << "Choose an option (0 - Random, 1 - Manual): ";
    std::cin >> choice;
}


void RandomFillingArray(float* array, int32_t& size)
{
    std::srand(time(0));
    for (int32_t i = 0; i < size; ++i)
    {
        array[i] = -100 + 201 * rand() / (float)RAND_MAX;
        std::cout << array[i] << "\n";
    }
}

void FillingArray(float* array, int32_t& size)
{
    std::cout << "Enter " << size << " values:\n";
    for (int32_t i = 0; i < size; ++i)
    {
        std::cin >> array[i];
    }
}

void EnterSize(int32_t& size)
{
    std::cout << "Enter size: ";
    std::cin >> size;
}

void FindMinimalIndex(float* array, int32_t size)
{
    float temp_number{ array[0] };
    int16_t temp_index{ 0 };

    for (int16_t i = 1; i < size; ++i)
    {
        if (std::abs(array[i]) <= std::abs(temp_number))
        {
            temp_number = array[i];
            temp_index = i;
        }
    }

    std::cout << "The minimal absolute value is: " << temp_number << " at index: " << temp_index << "\n";
}

void SummOfElements(float* array, int32_t size)
{
    float summ{};
    int32_t temp{};
    for (int32_t i = 0; i < size; ++i)
    {
        if (array[i] < 0)
        {
            temp = i;
            break;
        }
    }
    for (; temp < size; ++temp)
    {
        summ += array[temp];
    }
    std::cout << "Summ of elements: " << summ << "\n"; 
}
void EnterNumberP(int32_t& P)
{
    std::cout << "Enter the P number:";
    std::cin >> P;
}
void CompressArray(float* array, int32_t size, int32_t P)
{
    int32_t writeIndex{};
    for (int32_t i = 0; i < size; ++i)
    {
        if (array[i] != P)
        {
            array[writeIndex++] = array[i];
        }
    }
    for (int32_t i = writeIndex; i < size; ++i)
    {
        array[i] = 0; 
    }

    std::cout << "Compressed array: ";
    for (int32_t i = 0; i < size; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
}