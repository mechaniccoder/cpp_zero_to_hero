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

// shared pointer
// shared pointer를 생성할때는 make_shared를 사용하자.
auto mySimpleSmartPtr = make_shared<int>();

// 커스텀 제거자(free)의 타입을 템플릿 매개변수로 지정하지 않아도 된다.
shared_ptr<int> myIntSmartPtr(malloc_int(42), free);

// share pointer를 file pointer로 사용하는 예시이다.
void CloseFile(FILE* filePtr) {
    if (filePtr == nullptr) {
        return;
    }
    fclose(filePtr);
    cout << "File closed" << endl;
}

int main() {
    FILE* f = fopen("data.txt", "w");
    shared_ptr<FILE> filePtr(f, CloseFile);
    if (filePtr == nullptr) {
        cerr << "Error opneing file" << endl;
    } else {
        cout << "File opened" << endl;
    }
    return 0;
}

class Simple {

};

// smart pointer가 삭제되려할때 레퍼런스 카운팅이 각각 1이기 때문에 서로 mySimple객체를 삭제하려고 한다.(위험하다.)
void doubleDelete() {
    Simple* mySimple = new Simple();
    shared_ptr<Simple> smartPtr1(mySimple);
    shared_ptr<Simple> smartPtr2(mySimple);
}

void noDoubleDelete() {
    Simple* mySimple = new Simple();
    shared_ptr<Simple> smartPtr1(mySimple);
    shared_ptr<Simple> smartPtr2(smartPtr1);
}

// aliasing
class Foo {
    public:
        Foo(int value) : mData(value) {}
        int mData;
};

auto foo = make_shared<Foo>(42);
auto aliasing = shared_ptr<int>(foo, &foo -> mData);


// 이동의미론 
unique_ptr<Foo> create() {
    auto ptr = make_unique<Foo>();
    return ptr;
}

int main() {
    unique_ptr<Foo> mySmartPtr1 = create();
    auto mySmartPtr2 = create();
    return 0;
}