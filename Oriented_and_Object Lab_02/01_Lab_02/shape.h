#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
	public:
		Shape();
		static constexpr double PI = 3.141592;

		virtual double calculateArea() const = 0;		
		virtual ~Shape() = default;
	

};

#endif
