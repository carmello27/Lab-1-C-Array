#include <iostream>
#include "array.h"

void test5() {
    Array arr(3, 2);

    arr.setValue(3);
    arr.setValue(0);
    arr.setValue();
    arr.setValue();
    arr.setValue();

    std::cout << "Test 5 result: " << arr.getElemSize() << std::endl;
    arr.showElements();
}

int main() {
    Array arr;

    arr.setValue(6);
    arr.setValue(60);
    arr.setValue(40);

    arr.showElements();

    test5();

    return 0;
}