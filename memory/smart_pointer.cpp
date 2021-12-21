#include <iostream>
#include <memory>
// #include <cstdlib>

using namespace std;

// c style memory allocation
auto myVariableSizedArray = make_unique<int[]>(10);

// new and delete
int* malloc_int(int value) {
    int* p = (int*)malloc(sizeof(int));
    *p = value;
    return p;
}

int main() {
    unique_ptr<int, decltype(free)*> myIntSmartPtr(malloc_int(42), free);
    return 0;
}

