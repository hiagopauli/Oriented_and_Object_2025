#include "Adapter.h"

Adapter::Adapter(std::shared_ptr<existingInterface> obj) : adaptee (std::move(obj))
{
}

void Adapter::newAction()
{
	adaptee-> existingMethod();
}

