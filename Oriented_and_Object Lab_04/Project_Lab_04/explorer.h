#ifndef EXPLORER
#define EXPLORER

#include <string>

class Explorer
{
	public:
		virtual void explore(std::ostream& os) const = 0;
		virtual ~Explorer() = default;
		
};

#endif

