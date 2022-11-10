#include "MyOwnUniquePtr.h"
#include "Entity.h"

int main()
{
	{
		MyUniquePtr<Entity> ptr(new Entity);

		ptr->sayHello();
	}
}