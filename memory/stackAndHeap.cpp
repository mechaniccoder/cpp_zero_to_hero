#include <iostream>
#include <stdlib>

/**
 * @brief stack and heap
 */
// stack memory allocation
int i = 7;

// point heap memory address
// dynamic memory is always on heap memory
int* ptr = new int;

int** handle = nullptr; // allocated in stack
handle = new int*; // new int* is a pointer of int memory allocated in heap
*handle = new int;  


/**
 * @brief new and delete
 */
// memory leak
void leak() {
    new int;
    std::cout << "loose int" << endl;
}

// memory delete
int* ptr = new int;
delete ptr; // it returns nullptr if memory is short.
ptr = nullptr; // this is to prevent mistack of using ptr deallocated

/**
 * @brief malloc vs new
 * 
 */
int* cInt = (int*)malloc(sizeof(int)); // it just allocates memory, not creating object
int* cppInt = new int; // it allocates memory and creates object

/**
 * @brief fail to allocated heap memory
 */
int* ptr = new(nothrow) int; // it returns nullptr if memory is short.

