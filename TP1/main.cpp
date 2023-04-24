#include <iostream>

int main() {
	int largeur, longueur;
	std::cin >> largeur >> longueur;

	for (int i_l = 0; i_l < largeur; i_l++) {
		for (int i_L = 0; i_L < longueur;i_L++) {
			if (i_l == 0 || i_l == largeur - 1)
				std::cout << "-";
			else if (i_L == 0 || i_L == longueur - 1)
				std::cout << "|";
			else
				std::cout << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}