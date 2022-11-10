#include "Entity.h"
#include <iostream>

Entity::Entity()
	: x_(0)
{
	std::cout << "Entity constructor called" << std::endl;
}

Entity::Entity(const Entity& other)
	: x_(other.x_)
{
}

Entity::Entity(Entity&& other) noexcept
	: x_(other.x_)
{
}

Entity& Entity::operator=(const Entity& other)
{
	if (this == &other)
		return *this;
	x_ = other.x_;
	return *this;
}

Entity& Entity::operator=(Entity&& other) noexcept
{
	if (this == &other)
		return *this;
	x_ = other.x_;
	return *this;
}

Entity::~Entity()
{
	std::cout << "Entity destructor called" << std::endl;
}

void Entity::sayHello()
{
	std::cout << "HEY DAVID!" << std::endl;
}