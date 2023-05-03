#include <iostream>
#include <math.h>

int main()
{
	int choix;
	std::cout << "rectangle(1) ou cercle(2) : ";
	std::cin >> choix;
	if (choix == 2) {

		int diametre;
		std::cout << "Rentrer valeur" << std::endl;
		std::cin >> diametre;
		double thickness = 0.5;
		double radius = (diametre - 1.0) / 2.0;
		double rIn = radius - thickness;
		double rOut = radius + thickness;

		for (int y = 0; y < diametre; y++)
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

	else {
		int largeur, longueur;
		std::cin >> largeur >> longueur;

		for (int i_l = 0; i_l < largeur; i_l++) {
			for (int i_L = 0; i_L < longueur;i_L++) {
				if (i_l == 0 || i_l == largeur - 1)
					std::cout << "#";
				else if (i_L == 0 || i_L == longueur - 1)
					std::cout << "#";
				else
					std::cout << " ";
			}
			std::cout << std::endl;
		}
	}
	return 0;
}