#include <iostream>

#include "array.h"

int main() {
	int vals[6] = { 0,1,2,3,4,5 };
	DynamicArray<int> array(vals, 6);
	array.Show();

}