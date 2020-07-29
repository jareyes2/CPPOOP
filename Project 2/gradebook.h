#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include<array>

const int rows = 10;
const int cols = 4;

void Initialize(std::array<std::array<double, cols>, rows> & );
void Print(const std::array< std::array<double, cols>, rows> & );
void Max(const std::array< std::array<double, cols>, rows> & );

#endif