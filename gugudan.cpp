#include <iostream>
#include <iomanip>

void gugudan(int n) { // n * n ´Ü
	for (int i = 1; i < n + 1; i++) {
		std::cout << "-----------" << i << "´Ü" << "-----------" << '\n';
		for (int j = 1; j < n + 1; j++) {
			std::cout << i << " * " << j << " = " << i * j << '\n';
		}
		std::cout << '\n';
	}
}

int main() {
	gugudan(9);
}
