// stack
int myArray[5];

// heap
int* myArrayPtr = new int[5];

// delete
delete [] myArrayPtr;
myArrayPtr = nullptr;

// do not use realloc in c++

/**
 * @brief object array
 */
class Simple {
    public:
        Simple() {
            std::cout << "Simple constructor called" << endl;
        }
        ~Simple() {
            std::cout << "Simple destructor called" << endl;
        }
}

Simple* mySimpleArray = new Simple[4];

delete [] mySimpleArray;
mySimpleArray = nullptr;

/**
 * @brief pointer araay
 */

const size_t size = 4;
Simple** mySimpleArray = new Simple*[size];

for (size_t i = 0; i < size; i++) {
    mySimpleArray[i] = new Simple();
}

for (size_t i = 0; i < size; i++) {
    delete mySimpleArray[i];
}

delete [] mySimpleArray;
mySimpleArray = nullptr;

/**
 * @brief 다차원 array
 */
char board[3][3] = {};
board[0][0] = 'X';
board[2][1] = 'O';