#include "../../vendor/external-lib/include/external_lib.hpp"
#include "../../include/lib.hpp"

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}

int pow(int a, int b) {
	int result = a;
	for (int i = 0; i < b - 1; i++) {
		result = multiply(result, a);
	}
	return result;
}

float add_f(float a, float b) {
	return a + b;
}
