#pragma once

#include <iostream>

using namespace std;

struct Vector2
{
    float x, y;
};

struct Vector4
{
    float x, y, z , w;
};

void PrintVector2( const Vector2& vec)
{
    cout << vec.x << vec.y << endl;
}