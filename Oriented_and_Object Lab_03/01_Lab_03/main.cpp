#include "existing_class.h"
#include "adapter.h"
#include "new_interface.h"
#include <memory>

int main()
{
	std::shared_ptr<existingInterface> oldObj = std::make_shared<existingClass>();
	std::shared_ptr<newInterface> adapter = std::make_shared<Adapter> (oldObj);

	adapter-> newAction(); 

	return EXIT_SUCCESS;
}
