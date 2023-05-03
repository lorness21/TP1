#include <iostream>
#include <math.h>

int main()
{
	int diametre;
	std::cout << "Rentrer valeur" << std::endl;
	std::cin >> diametre;
	double thickness = 0.5;
	double radius = (diametre - 1.0) / 2.0;
	double rIn = radius - thickness;
	double rOut = radius + thickness;
	

	for (int y = 0; y < diametre ; y++)
	{
		for (int x = 0; x < diametre; x++)
		{
			double value = (x - radius) * (x - radius) + (y - radius) * (y - radius);
			if (value >= rIn * rIn && value <= rOut * rOut)
			{
				std::cout << '#';
			}
			else
			{
				std::cout << ' ';
			}
		}
		std::cout << std::endl;
	}
	
}