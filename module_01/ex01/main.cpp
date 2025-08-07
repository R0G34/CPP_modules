#include "Zombie.hpp"

int main() {
	Zombie *horde = zombieHorde(5, "Charo");
	delete[] horde;
	return 0;
}