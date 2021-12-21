#include <iostream>
#include <memory>

// pointer == memory address
char* scaryPointer = (char*)7;

// c-style type casting
Document* documentPtr = getDocument();
char* myCharPtr = (char*)documentPtr;

// static casting
Document* documentPtr = getDocument();
char* myCharPtr = static_cast<char*>(documentPtr);

// array and pointer
// compiler convert array variable to pointer
int myIntArray[10];
int* myIntPtr = myIntArray;
myIntPtr[4] = 5;

void doubleInts(int* theArray, size_t size) {
    for (size_t i = 0; i < size; i++) {
        theArray[i] *= 2;
    }
}

int* myArray = new int[8];
myArray[2] = 33;
*(myArray + 2) = 33;

// wide string
const wchar_t* myStr = L"Hello World";

wchar_t* toCaps(const wchar_t* inString) {}

//smart pointer
void leakMemory() {
    Simple* mySimplePtr = new Simple();
    mySimplePtr->go();
}

void couldBeLeaky() {
    Simple* mySimplePtr = new Simple();
    mySimplePtr->go();
    delete mySimplePtr;
    mySimplePtr = nullptr;
}

void notLeaky() {
    auto mySimplePtr = make_unique<Simple>();
    mySimplePtr->go();
}

// unique pointer
mySimpleSmartPtr->go();

void processData(Simple* simple)
auto mySimpleSmartPtr = make_unique<Simple>();
processData(mySimpleSmartPtr.get());

mySimpleSmartPtr.reset();
mySimpleSmartPtr.reset(new Simple());

//release
Simple* simple = mySimpleSmartPtr.release(); // return internal pointer wrapped by smart pointer
delete simple;
simple = nullptr;

// move
class Foo {
    public:
        Foo(unique_ptr<int> data) : mData(move(data)) {}
    private:
        unique_ptr<int> mData;
}

auto myIntSmartPtr = make_unique<int>(42);
Foo f(move(myIntSmartPtr));