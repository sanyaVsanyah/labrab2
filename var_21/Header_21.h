#pragma once
#ifndef HEADER_21_H
#define HEADER_21_H

#include<iostream>

const int32_t MAX_SIZE{ 100 };

void EnterChoice(int32_t&);
void RandomFillingArray(float*, int32_t&);
void FillingArray(float*, int32_t&);
void EnterSize(int32_t&);
int32_t CountUniqueElements(float*, int32_t);
void FindPlusElements(float*, int32_t, int32_t&, int32_t&);
void SummOfElements(float*, int32_t, int32_t);
void EnterA(int32_t&);
void EnterB(int32_t&);
void AnotherArray(float*, int32_t, int32_t, int32_t);

#endif