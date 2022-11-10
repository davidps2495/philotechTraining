#ifndef ENTITY_H
#define ENTITY_H

class Entity
{
private:
	int x_;
public:
	Entity();
	Entity(const Entity& other);
	Entity(Entity&& other) noexcept;
	Entity& operator=(const Entity& other);
	Entity& operator=(Entity&& other) noexcept;
	~Entity();
	void sayHello();
};

#endif