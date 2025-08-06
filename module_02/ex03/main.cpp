#include <iomanip>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main() {
	Point	a(2.02f, 0.83f);
	Point	b(2.66f, 1.68f);
	Point	c(1.24f, 1.91f);
	Point	p(2.07f, 1.46f);

	if (bsp(a, b, c, p) == true)
		std::cout << "El punto p esta en el triangulo." << std::endl;
	else
		std::cout << "El punto p no esta en el triangulo." << std::endl;
	return 0;
}