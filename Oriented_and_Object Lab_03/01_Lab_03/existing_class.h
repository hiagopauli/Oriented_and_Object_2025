#ifndef EXISTING_CLASS_H
#define EXISTING_CLASS_H

#include "existing_interface.h"
#include <iostream>

class existingClass : public existingInterface
{
	public:
		void existingMethod() override;

};

#endif
