#include "SpreadSheetCell.h"
using namespace std;

SpreadSheetCell::SpreadSheetCell(double initialValue) {
    setValue(initialValue);
}

SpreadSheetCell::SpreadSheetCell(string_view initialValue) {
    setValue(initialValue);
}

SpreadSheetCell::SpreadSheetCell() {
    mValue = 0;
}

// 스코프지정 연산자
void SpreadSheetCell::setValue(double inValue)
{
    this->value = inValue;
}

double SpreadSheetCell::getValue() const
{
    return mValue;
}

std::string SpreadSheetCell::getString() const
{
    return doubleToString(mValue);
}

void SpreadSheetCell::setString(std::string_view inString) {
    mValue = stringToDouble(inString);
}

std::string SpreadSheetCell::doubleToString(double inValue) const {
    return to_string(inValue);
}

double SpreadSheetCell::stringToDouble(std::string_view inString) const {
    return strtod(inString.data(), nullptr);
}

// stack
void stack() {
    SpreadSheetCell myCell, anotherCell;
    myCell.setValue(6);
    anotherCell.setString("3.2");
    count << "cell 1: " << myCell.getValue() << endl;
    count << "cell 1: " << myCell.getValue() << endl;
}

void heap() {
    SpreadSheetCell* myCellptr = new SpreadSheetCell();
    myCellptr->setValue(3.7);
    cout << "cell 1: " << myCellptr->getValue() << " " << myCellptr->getString() << endl;
    delete myCellptr;
    myCellptr = nullptr;
}

// stack ctor
void stackCtor() {
    SpreadSheetCell myCell(5), anotherCell(5);
}

void heapCtor() {
    auto smartCellp = make_unique<SpreadSheetCell>(4);
    SpreadSheetCell* myCellp = new SpreadSheetCell(5);

}

void stackDefaultCtor() {
    SpreadSheetCell myCell;
    // SpreadSheetCell myCell() => default ctor을 함수처럼 호출하면 안된다.
}

void heapDefaultCtor() {
    SpreadSheetCell* myCell = new SpreadSheetCell();
    SpreadSheetCell* myCell = new SpreadSheetCell;
}

void destroy() {
    SpreadSheetCell* cellPtr1 = new SpreadSheetCell(4);
    SpreadSheetCell* cellPtr1 = new SpreadSheetCell(5);
    count << "cellPtr1: " << cellptr1->getValue() << endl;
    delete cellPtr1;
    cellPtr1 = nullptr;
}

// 대입 연산자
void operator() {
    SpreadSheetCell cell(4);
    cell = cell; // 대입 연산자 실행
}

SpreadSheetCell& SpreadSheetCell::operator=(const SpreadSheetCell& rhs) {
    if (this == &rhs)
}