#ifndef ADAPTER_H
#define ADAPTER_H

#include "new_interface.h"
#include "existing_interface.h"
#include <memory>


class Adapter : public newInterface
{
	private:
		std::shared_ptr<existingInterface> adaptee;

	public:
		Adapter(std::shared_ptr<existingInterface> obj);
		void newAction() override;
};

#endif
