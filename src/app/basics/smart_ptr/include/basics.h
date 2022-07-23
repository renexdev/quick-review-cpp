#pragma once

#include <iostream>
#include <memory>

using namespace std;

class Entity
{
public:
	Entity(){cout << "> Entity::Entity()"<< endl;};
	~Entity(){cout << "> Entity::~Entity()"<< endl;};
};