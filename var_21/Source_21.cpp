#include<iostream>
#include<cstdint>
#include "Header_21.h"

void EnterChoice(int32_t& choice)
{
    std::cout << "Choose an option (0 - Random, 1 - Manual): ";
    std::cin >> choice;
}
void EnterSize(int32_t& size)
{
    std::cout << "Enter size (1 to " << MAX_SIZE << "): ";
    std::cin >> size;
}
void RandomFillingArray(float* arr, int32_t& size)
{
    std::srand(time(NULL));
    for (int32_t i = 0; i < size; ++i)
    {
        arr[i] = -100 + 201 * rand() / (float)RAND_MAX;
        std::cout << arr[i] << '\n';
    }
}

void FillingArray(float* arr, int32_t& size)
{
    std::cout << "Enter " << size << " values:\n";
    for (int32_t i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }
}
int32_t CountUniqueElements(float* arr, int32_t size)
{
    int32_t uniqueCount = 0;

    for (int32_t i = 0; i < size; i++)
    {
        bool isUnique = true;


        for (int32_t j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            uniqueCount++;
        }
    }

    return uniqueCount;
}

void FindPlusElements(float* arr, int32_t size, int32_t& firstPosition, int32_t& secondPosition)
{
    for (int32_t i = 0; i < size; ++i)
    {
        if (arr[i] > 0)
        {
            if (firstPosition == -1)
            {
                firstPosition = i;
            }
            else
            {
                secondPosition = i;
                break;
            }
        }
    }
}

void SummOfElements(float* arr, int32_t firstPosition, int32_t secondPosition)
{
    double sum{};

    for (int32_t i = firstPosition + 1; i < secondPosition; ++i)
    {
        sum += arr[i];
    }
    std::cout << "The sum of the elements between the first and second positive elements: " << sum << '\n';
}
void EnterA(int32_t& a)
{
    std::cout << "Enter (integer) A: ";
    std::cin >> a;
}
void EnterB(int32_t& b)
{
    std::cout << "Enter (integer) B: ";
    std::cin >> b;
}

void AnotherArray(float* arr, int32_t size, int32_t a, int32_t b)
{
    const int32_t MAX_TEMP{ 100 };
    float resultArr[MAX_TEMP];
    int32_t index = 0;

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < a || arr[i] > b)
        {
            resultArr[index++] = arr[i];
        }
    }
    for (int32_t i = 0; i < size; ++i)
    {
        if (arr[i] >= a && arr[i] <= b)
        {
            resultArr[index++] = arr[i];
        }
    }
    for (int32_t i = 0; i < size; ++i)
    {
        arr[i] = resultArr[i];
    }
    for (int32_t i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
}


